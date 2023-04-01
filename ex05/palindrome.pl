
print "Enter a string: ";
$str = <STDIN>;
chomp($str);

if ($str eq reverse($str))
{
	print "The string is a palindrome!\n";
}
else 
{
	print "The string is not a palindrome.\n";
}
