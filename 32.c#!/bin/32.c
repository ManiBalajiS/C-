#!/bin/blash
echo -n "Enter the name of a country"
read COUNTRY
echo -n "The official language of $COUNTRY is "
case $COUNTRY in
    Linthuania)
       echo -n "Linthuanian"
       ;;
    Romania)
       echo -n "Romanian"
       ;;
    Italy)
       echo -n "Italian"
       ;;
    *)
       echo -n "Unknown"
       ;;
 esac       
