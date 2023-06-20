heck for correct file extension
if [[ ${1: -2} != ".c" ]]; then
    echo "Error: File must have a .c extension"
    exit 1
fi

# Check number of lines per function
max_lines=40
function_lines=$(awk '/^ *[^/]*\([^)]*\) *{/{getline; while($0!="}") {print;getline}}' $1 | wc -l)
if [[ $function_lines -gt $max_lines ]]; then
    echo "Error: File contains functions with more than $max_lines lines"
    exit 1
fi

# Check number of functions per file
max_functions=5
num_functions=$(grep -E '^(\w+\**\s+){1,3}\w+\s*\([^)]*\)\s*{' $1 | wc -l)
if [[ $num_functions -gt $max_functions ]]; then
    echo "Error: File contains more than $max_functions functions"
    exit 1
fi

# Check for global variables
if grep -q "^[^/]*\s\+\w\+\s*=" $1; then
    echo "Error: File contains global variables"
    exit 1
fi

# Check function comments
if ! grep -qE "^[[:space:]]*/\*\*" $1; then
    echo "Error: File contains functions without comments"
    exit 1
fi

# Check declaration and assignment formatting
if grep -qE "=[[:space:]]*[^[:space:]]" $1; then
    echo "Error: File contains declarations and assignments on the same line"
    exit 1
fi

# Check spacing around operators and commas
if grep -qE "[^[:space:]](=|==|!=|>|<|>=|<=|&&|\|\|)[^[:space:]]" $1; then
    echo "Error: File contains operators without spaces around them"
    exit 1
fi
if grep -qE "[^,[:space:]](,)[^[:space:]]" $1; then
    echo "Error: File contains commas without spaces after them"
    exit 1
fi

# Check number of function parameters
max_params=4
if grep -qE "^\w+\s+\**\s*\w+\s*\([^,()]*,[^,()]*,[^,()]*,[^,()]*,.*\)" $1; then
    echo "Error: File contains a function with more than $max_params parameters"
    exit 1
fi

# Check brace placement
if grep -qE "\{[^[:space:]]" $1; then
    echo "Error: File contains braces not on their own line"
    exit 1
fi

# Check line length
max_length=80
if awk '{ if (length > 80) { print $0; exit 1 } }' $1; then
    echo "Error: File contains a line longer than $max_length characters"
    exit 1
fi

echo "File passed all checks"

