/*
 ============================================================================
 Name        : HW1-G00979373-Kadam.c
 Author      : Saniya
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXLENGTH 25
#define COUNT 10

int main(void) {
	char input[COUNT][MAXLENGTH];
	int i,j,k;
	bool flag=0;

	printf("Enter 10 strings\n");
	i=0;
	while(i<10){
	printf("Enter  string %d\n", i+1);
	gets(input[i]);

//	printf("while i<10 %s\n",input[i]);

	while(strlen(input[i])>25){
		printf("please re-enter string <25");
		printf("Enter string %d\n",i+1);
		gets(input[i]);

//		printf("in strlen %s\n",input[i]);

	}
//	printf("outside strlen %s\n",input[i]);

	for (j=0;j<i;j++)
		{
			if (!strncmp(input[j],input[i],25))
			{
			 flag=1;

		    }

		}



//	printf("outside dup %s\n",input[i]);

	while(flag){
		printf("please re-enter unique string");
				printf("Enter string %d\n",i+1);
				gets(input[i]);

//				printf("inside while  dup %s\n",input[i]);
	}
	i++;
	}

	printf("the strings are:");
	for(i=0;i<10;i++)
	{
		printf("%s\n",input[i]);
	}

	return 0;

}
