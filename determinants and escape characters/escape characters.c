/*
Ειδικοί χαρακτήρες - escape characters
*/
#include <stdio.h>  
int main() { 	
	/*Carriage return - αλλαγή γραμμής*/
	printf("1st line \n--2nd line");	
	/*Horizontal tab*/
	printf("\nBefore tab\t after tab");
	/*Vertical tab character*/
	printf("\nVertical tab character \v");
	/*Single quote*/
	printf("\n A signle quote \'");
	/*Double quote*/
	printf("\n A double quote \"");
	/*A latin question marg*/
	printf("\nA latin question marg \?");
	/*A backslash*/
	printf("\nA backslash \\");
}
