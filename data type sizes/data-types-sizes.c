#include <stdio.h>
/*Display the sizes from data types*/
main(){
	int myInt;
	short myShortInt;
	long myLongInt;
	unsigned myUnsignedInt;
	char myChar;
	signed char mySignedChar;
	unsigned char myUnsighedChar;
	float myFloat;
	double myDouble;
	
	printf("The size of \tInteger is %d bytes (–2.147.483.648 to +2.147.483.647)",sizeof(myInt));
	printf("\nThe size of \tShort Integer is %d bytes (–32.768 to +32.767)",sizeof(myShortInt));
	printf("\nThe size of \tLong Integer is %d bytes (–2.147.483.648 to +2.147.483.647)",sizeof(myLongInt));
	printf("\nThe size of \tUtnsigned integer is %d bytes (0 to 4.294.967.295)",sizeof(myUnsignedInt));
	printf("\nThe size of \tChar is %d byte (any single character)",sizeof(myChar));
	printf("\nThe size of \tSigned Char is %d byte (1 character from -128 to 127)",sizeof(mySignedChar));
	printf("\nThe size of \tUnsiged Char is %d byte (1 character from 0 to 255)",sizeof(myUnsighedChar));
	printf("\nThe size of \tFloat is %d bytes (Decimal values from 3.4E-38 to 3.4E+38 and from –3.4E-38 to –3.4E+38)",sizeof(myFloat));
	printf("\nThe size of \tDouble is %d bytes ()from Decimal values from 1.7E-308 to 1.7E+308 and from –1.7E-308 TO –1.7E+308",sizeof(myDouble));
}
