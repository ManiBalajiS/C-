echo -n "Enter the year"
read year
if [ `expr $year % 4` -eq 0 ]
then
echo "$year is a Leap year."
else
echo "$year not a Leap year."
fi
