echo "Enter the first filename"
read file1
echo "Enter the second filename"
read file2
if diff "$file1" "$file2" > /dev/null; 
then
    echo "Files are identical. Deleting the second file."
rm "$file2"
else
    echo "Files are not identical."
fi
