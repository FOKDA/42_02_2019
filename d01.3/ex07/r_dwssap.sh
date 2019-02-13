#!/bin/sh

cat /etc/passwd | cut -d : -f1 | grep --invert-match '^#' | sort -r | rev | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | sed "s/ /, /g" | tr '/n' .
