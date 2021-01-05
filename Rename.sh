#!/bin/bash

a=3
for i in *.txt; do
  new=$(printf "$a after effect.txt")
  mv -i -- "$i" "$new"
  let a=a-1
done
