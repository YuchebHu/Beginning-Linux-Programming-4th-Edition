#!/bin/sh

# first
# This file looks through all the files in the current
# directory for the string 0, and then prints the names of
# those files to the standard output

for file in *
do
    if grep -q 0 $file
    then
        echo $file
    fi
done

exit 0
