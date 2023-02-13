#include <stdio.h>
#include <ctype.h>

int main()
	{
	char text[100] = {'\0', };
	int key = 3;
	printf("Enter the text: ");
	gets(text);
	for(int i = 0; text[i] != '\0'; ++i)
		{
		int x = text[i];
		if(isalnum(x))
			{
			if(islower(x))
				x = (x - 'a' + key) % 26 + 'a';
			else if(isupper(x))
				x = (x - 'A' + key) % 26 + 'A';
			else if(isdigit(x))
				x = (x - '0' + key) % 10 + '0';
			else
				{
				printf("Invalid character! \n");
				return 1;
				}
			}
		text[i] = x;
		}
	printf("Encrypted text: %s\n", text);
	return 0;
	}
