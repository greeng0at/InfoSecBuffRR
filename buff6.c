
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void stripCRLF(char *s)
{
	while(*s)
	{
		if(*s=='\r') *s=0;
		if(*s=='\n') *s=0;
		s++;
	}
}

int main(int argc, char **argv)
{
	// our stack memory local vars and buffer
	char buf4[17]="SPANISH  [D]";
	char buf3[17]="BUSINESS [B]";
	char buf2[17]="LAW      [F]";;
	char buf1[17]="FINANCE  [C]";;
	char buf[5];

	printf("\n\nstack addresses\n");
	printf("---------------\n");
	printf("addr of buf  is ..   %u\n", &buf[0]);
	printf("addr of buf1 is ..   %u\n", &buf1[0]);
	printf("addr of buf2 is ..   %u\n", &buf2[0]);
	printf("addr of buf3 is ..   %u\n", &buf3[0]);
	printf("addr of buf4 is ..   %u\n", &buf4[0]);
	printf("\n\n\n");

	// prompt for passwd
	printf("Enter password: \n");

	// get the password input
	gets(buf);
	stripCRLF(buf);

	// print out my results
	if (buf[0]=='1' && buf[1]=='2' && buf[2]=='3' && buf[3]=='4')
	{
		printf("\n\n\n");
		printf("Your results are as follows\n");
		printf("---------------------------\n");
		printf("%.12s",buf1);
		printf("\n");
		printf("%.12s",buf2);
		printf("\n");
		printf("%.12s",buf3);
		printf("\n");
		printf("%.12s",buf4);
		printf("\n");
		printf("---------------------------\n");
	}
	else
	{
		printf("**** INCORRECT PASSWORD - enter 1234 **** \n");
	}
	
	printf("\n\n\n");
	return 0;
}
