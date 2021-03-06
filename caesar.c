/*
	Author : Mahesh Kumar
	Program : Caesar Cipher Implementation
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
#define ARGC 2

int cipher(int);
int argc_length(int);

int main(int argc, char* argv[])
{
	int i;
	
	if(argc_length(argc) == 1)
	{
		return 1;
	}
	
	int l = strlen(argv[1]);
	for(i=0;i<l;i++)
	{
		if(!isdigit(argv[1][i]))
		{
			printf("Invalid argument, enter only integer argument\n");
			return 1;
		}
	}
	
	int k = atoi(argv[1]);
	
	printf("The key value = %d\n",k);

	cipher(k);
	
	return 0;

}

// To find whether the number the arguments in the command line are correct

int argc_length(int len)
{
	if(len != ARGC)
	{
		printf("Invalid arguments, enter only 2 arguments\n");
		return 1;
	}
	return 0;
}

int cipher(int key)
{
	char text[MAX];
	int i;
	
	printf("Enter the plain text to encrypt: ");
	fgets(text, sizeof(text), stdin);
	//scanf("%s",text);
	int n = strlen(text);
	
	for(i=0;i<n;i++)
	{
		if(islower(text[i]))
		{
			//char low = ('a' + text[i] + (key % 26)) - 'a';
			char low = ('a' + text[i] + (key % 26)) - 'a';
			printf("%c",low);
		}
		
		else if(isupper(text[i]))
		{
			char up = ('A' + text[i] + (key % 26)) - 'A';
			printf("%c",up);
		}
		
		else
		{
			printf("%c",text[i]);
		}	
	}
	return 0;
}
