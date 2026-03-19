#!/bin/bash

git log > tmp

awk '/commit /   {if (i < 5){print $2}  i++}' tmp
 

rm tmp


#apres j ai apris que ca existait : git log --format='%H' -5   (H = le hash)  -5 les 5 dernier