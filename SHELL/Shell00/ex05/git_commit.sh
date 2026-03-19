#!/bin/bash

git log > d 

awk '/commit / {print $2} {count++}  {if (count == 5) end} ' d
