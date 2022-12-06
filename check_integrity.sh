#!/bin/bash

for directory in $(ls $1)
do
  files=$(ls $1/$directory)

  result=FALSE
  for file in $files
  do
    filename="${file%.*}"
    if [[ $directory = $filename ]]
    then
      result=TRUE
    fi
  done

  if [[ $result = FALSE ]]
  then
    echo $directory
  fi

done
