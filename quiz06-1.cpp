#include <stdio.h>
main()
{ /* PROGRAM TO PRINT OUT SPACE RESERVED FOR VARIABLES */
	char c;
	short s;
	int i;
	unsigned int ui;
	unsigned long int ul;
	float f;
	double d;
	long double ld;
	printf ("\n");
  pintf("The storage space for each variable type is:");
	printf("char: \t\t\t%d bits",int(sizeof(c)*8);
	printf("short: \t\t\t%d bits",int(sizeof(s)*8)));
	printf("int: \t\t\t%d bits",int(sizeof(i)*8));
	printf("unsigned int: \t\t%d bits",int(sizeof(ui)*8));
	printf("unsigned long int: \t%d bits",int(sizeof(ul)*8));
	printf("float: \t\t\t%d bits",int(sizeof(f)*8));
	printf("double: \t\t%d bits",int(sizeof(d)*8));
	printf("long double: \t\t%d bits",int(sizeof(ld)*8));
}
