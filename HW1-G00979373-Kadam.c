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

#define MAXLENGTH 25
#define COUNT 10

int main(void) {
	char input[COUNT][MAXLENGTH];
	int i,j,k;

	printf("Enter 10 strings\n");
	i=0;
	while(i<10)
	{
	printf("Enter  string %d\n", i+1);
	gets(input[i]);

	if (strlen(input[i]) > 25){
	printf("please re-enter string less than 25 chars \n");
	}
	else
	i++;
	}
	printf("the strings are:");
	for(i=0;i<10;i++)
	{
		printf("%s\n",input[i]);
	}

	return 0;

}
