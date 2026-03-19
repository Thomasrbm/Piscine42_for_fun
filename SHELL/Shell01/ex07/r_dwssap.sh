#!/bin/bash

# les comment commencent par #

# grep -v inverse les matchs
# ^  prend que si le char est en debut de ligne (pas si un # au milieu)
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' |  cut -d: -f1 | rev | sort -rd  | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's/,$/./' 


# cut -d:  (define ':' comme delim),  -f1  prend le premier champs (comme un ft split)


# sed 's/,$/.' : s substitution   +  , cherche une virgule  + $  ancré en fin de ligne + . remplace par un point
# les /  separer : cmd / pattern / replace