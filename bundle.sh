#!/bin/bash

# Define default file names
defaultInputFile="main.cpp"
defaultOutputFile="temp.cpp"

# Check if arguments are provided
if [ -z "$1" ]; then
    inputFile="$defaultInputFile"
else
    inputFile="$1"
fi

if [ -z "$2" ]; then
    outputFile="$defaultOutputFile"
else
    outputFile="$2"
fi

# Define the root directory where your headers are located
encodedRootDir="/mnt/c/users/hp/desktop/compro"

# Check if the root directory exists
if [ ! -d "$encodedRootDir" ]; then
    echo "Root directory $encodedRootDir does not exist."
    exit 1
fi

# Create a variable to store include directories
includeDirs=""

# Iterate through all subdirectories within the root directory
while IFS= read -r -d '' dir; do
    # Avoid adding the root directory itself
    if [ "$dir" != "$encodedRootDir" ]; then
        includeDirs+=" -I $dir"
    fi
done < <(find "$encodedRootDir" -type d -print0)

# Debug: Print the command to verify
echo "Running command: oj-bundle$includeDirs $inputFile > $outputFile 2> error.log"

# Run oj-bundle with the collected paths
oj-bundle $includeDirs "$inputFile" > "$outputFile" 2> error.log

# Check if there are errors
if [ -f "error.log" ]; then
    echo "Error log content:"
    cat "error.log"
fi

# Check the content of the output file for any anomalies
if [ -f "$outputFile" ]; then
    count=0
    while IFS= read -r line; do
        count=$((count + 1))
        if [ "$count" -ge 20 ]; then
            break
        fi
    done < "$outputFile"
fi
