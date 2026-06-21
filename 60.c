echo "Enter the filename to check permissions:"
read file1
if [ -r "$file1" ] 
then
       echo "$file1 has all permissions (read, write, and execute)."
else
       echo "$file1 does not have all permissions."
fi
