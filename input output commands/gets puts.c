/*
getchar = reads a char / putchar = outputs a char. 
Overflow issues. Use fgets instead.
*/
#include <stdio.h>  
int main() { 
	char astring[100];
		
	printf("Write 100 maximum charackets and press enter:");
	gets(astring);
	printf("\nYou wrote:");
	puts(astring); 
	
	
}
