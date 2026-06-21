#!/bin/blash
echo "Menu"
echo "1. Lower to Upper"
echo "2. Upper to lower"
echo "3. Quit"
echo "Enter your choice: \c"
read choice
case "$choice" in 
   1)echo "Enter File : \c"
      read f1
      if [ -f "$f1" ];then
	 echo"Converting lower case to upper case"
	 tr '[:lower:]' '[:upper:]' < "$f1"
      else
	 echo "$f1 does not exist "
      fi
      ;;
   2)echo "Enter File : \c"
      read f1
      if [ -f "$f1" ];then
        echo"Converting uppercase to lowercase"
         tr '[:upper:]' '[:lower:]' < "$f1"
      else
	 echo "$f1 does not exit"
      fi
      ;;
   3|*)
      echo "Existing"
      exit 0
      ;;
esac
