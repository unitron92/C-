#!/bin/bash

# Check for and delete all *.exe files in the current directory
for file in *.exe; do
    if [ -f "$file" ]; then
        rm "$file"
        echo "$file deleted."
    fi
done
