#!/bin/bash

# ChatGPT helped me

# Define default file names
defaultOutputFile="temp.cpp"

# Check if arguments are provided
if [ -z "$1" ]; then
    outputFile="$defaultOutputFile"
else
    outputFile="$1"
fi

# Define the root directory where your headers are located
encodedRootDir="/mnt/c/Users/HP/Desktop/compro/"

# Check if the root directory exists
if [ ! -d "$encodedRootDir" ]; then
    echo "Root directory $encodedRootDir does not exist."
    exit 1
fi

# Create a variable to store include directories
includeDirs=""

# Iterate through all subdirectories within the root directory
while IFS= read -r -d '' dir; do
    if [ "$dir" != "$encodedRootDir" ]; then
        includeDirs="$includeDirs -I$dir"
    fi
done < <(find "$encodedRootDir" -type d -print0)

# Debug: Print the command to verify
echo "Running command: g++ $includeDirs $outputFile -std=c++20 -O2 -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -Wduplicated-cond -Wlogical-op 1> error.log"

# Run g++ with the collected paths
g++ $includeDirs "$outputFile" -std=c++20 -O2 -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -Wduplicated-cond -Wlogical-op -D=LOCAL 1> error.log

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
