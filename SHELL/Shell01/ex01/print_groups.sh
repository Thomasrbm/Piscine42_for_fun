#!/bin/bash

# env | grep FT_USER | tr -d ZSH=   => mauvaise approche peut match d autres trucs


id -Gn $FT_USER | tr ' ' ',' # G groupe   n name pas les nombres