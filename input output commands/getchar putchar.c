/*
getchar = reads a char / putchar = outputs a char
*/
#include <stdio.h>  
int main() { 
	char my_char;
	
	printf("Write some chars. Quit by writing the 'q' character:");
	while (my_char!='q') {
		my_char = getchar();
		putchar(my_char); 
	}
	
}
