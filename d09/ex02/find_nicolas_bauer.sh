cat $1 | grep -i "nicolas" | grep -i "bauer" | sed -e "s/	/ /g" | awk '{if(tolower($1)=="nicolas" && tolower($2)=="bauer")print $(NF-1)}'
