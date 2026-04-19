#!/bin/bash

# Usage: ./scripts/run_tests.sh problem_name

PROBLEM_DIR=$1

if [ -z "$PROBLEM_DIR" ]; then
    echo "Usage: $0 <problem_folder>"
    exit 1
fi

cd "$PROBLEM_DIR" || exit 1

g++ solution.cpp -o solution
if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi

pass=true

for input in inputs/*.txt; do
    name=$(basename "$input")
    output="outputs/${name/input/output}"

    ./solution < "$input" > temp.txt

    if diff -q temp.txt "$output" > /dev/null; then
        echo "$name: PASS"
    else
        echo "$name: FAIL"
        pass=false
    fi
done

rm -f temp.txt solution

if $pass; then
    echo "All test cases PASSED"
else
    echo "Some test cases FAILED"
fi
