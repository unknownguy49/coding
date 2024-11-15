# include <string.h>
# include <stdio.h>
int main()
{
	char word[100];
	int isPalindrome(char str[],int start,int end);
	printf("Enter a word: ");
	scanf("%s",word);
	
	if(isPalindrome(word,0,(strlen(word)-1)))
	printf("Palindrome string");
	else 
	printf("Not a palindrome string");
}

int isPalindrome(char str[],int start,int end)
{
	if(start>=end)
	return 1;
	
	if(str[start]!=str[end])
	return 0;
	
	return isPalindrome(str,start+1,end-1);
}