/*
Προσδιοριστές - determinants
*/
#include <stdio.h>  
int main() { 
	char sarr[] = "Hello there";
	
	/*Integer*/
	printf("The determinant for the Integer %i is 'i' or 'd'.",123);	
	/*Character*/
	printf("\nThe determinant for the Character %c is 'c'.",'c');	
	/*String*/
	printf("\nThe determinant for the String %s is 's'.",sarr);	
	
	/*Float*/
	printf("\nThe determinant for the Float %f is 'f',  a lenght of 5 with 2 digits is %5.2f.",12.34,12.34);	
	/*Long Float*/
	printf("\nThe determinant for the Long Float %lf is 'lf',  a lenght of 5 with 2 digits is %5.2f.",66.1584,66.1584);	
	/*Float e*/
	printf("\nThe determinant for the Float using e, %e is 'e'.",2.3522e+3);	
	
	/*Unsigned Integer*/
	printf("\nThe determinant for the Unsigned Integer, %u is 'u'.",6916);	
	/*Unsigned Octadecimal*/
	printf("\nThe determinant for the Unsigned Octadecimal, 410=%o is 'o'.",410);	
	
	/*Unsigned Hexadecimal*/
	printf("\nThe determinant for the Unsigned Hexadecimal, 1020=%x is 'x'.",1020);	
	/*Unsigned Hexadecimal in capital*/
	printf("\nThe determinant for the Unsigned Hexadecimal in capital, 1020=%X is 'X'.",1020);	
}
