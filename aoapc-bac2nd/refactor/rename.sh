#!/bin/bash

for oldname in `ls *.c`
do
    # q_page21
    name=${oldname%.c}
    # q1
    qnum=${name%_*}
    # 1
    qnum=$[${qnum#q} + 101]
    # page 1
    page=$[${name#*_page} + 1000]
    # echo ${qnum:1}
    # echo ${page:1} 
    newname=page${page:1}_q${qnum:1}.c
    echo $oldname
    echo $newname
    mv -i $oldname $newname

#    echo ${oldname##*_}
done
