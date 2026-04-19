#!/bin/bash

# Usage: ./scripts/split_and_extract.sh bigfile.txt

INPUT_FILE=$1

if [ -z "$INPUT_FILE" ]; then
    echo "Usage: $0 <bigfile.txt>"
    exit 1
fi

# ==============================
# 1. Split into testcase files
# ==============================
awk 'BEGIN{n=0} /Test Case/{n++} {print > ("input_" n ".txt")}' "$INPUT_FILE"

# ==============================
# 2. Process each testcase file
# ==============================
for f in input_*.txt; do
    # extract testcase number
    n=$(echo "$f" | grep -o '[0-9]\+')

    total=$(wc -l < "$f")

    # skip invalid small files
    if [ "$total" -lt 3 ]; then
        continue
    fi

    # extract expected output (3rd last line)
    sed -n "$((total-2))p" "$f" | xargs > "output_$n.txt"

    # remove last 3 lines (expected + actual + status)
    head -n $((total-3)) "$f" | tail -n +2 > temp && mv temp "$f"
done

echo "Done: split + extracted outputs"
