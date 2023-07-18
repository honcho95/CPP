#!/bin/sh
make;
echo -n "This is a test file" > test1;
./sed test1 "test file" "pineapple"
echo -n "This is a test file\nwith several lines" > test2;
./sed test2 " " "1"
echo -n "Test for ininite loop" > test3;
./sed test3 " " "  "