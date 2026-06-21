echo -n "Enter File name: "
read fname 
if [ -f "$fname" ]; then
   last_modified_time=$(ls -l "$fname" | awk '{print $8}')
   echo "Last Modification time is: $last_modified_time"
else
   echo "File does not exist"
fi

