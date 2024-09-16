#include <stdio.h>

int main()
{
	char alphabet;
	
	printf("Enter a character: ");
	scanf("%c", &alphabet);
	
	if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
	{
		printf("The alphabet is a vowel");
	}
	else
	{
		printf("The alphabet is a consonant");
	}
	return 0;
}