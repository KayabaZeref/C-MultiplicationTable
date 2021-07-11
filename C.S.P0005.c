#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void caculate(int input)
{	
	int a;
	int result;
	// Multiplies from 1 to 10
	for(a=1; a<=10;	a++)
	{
		result = input *a;	
		printf("%d x %d = %d\n",input,a,result);
	}	
}

// Number cannot smaller than 1 or larger than 9
void exeption(int input, char input2, char c)
{
	do
	{
		
		
		printf("Must be from 1-9 only");
		printf("\nPlease Try Again !!\n");
		fflush(stdin);
		printf ("Please enter a number (1-9): ");
		scanf("%d%c",&input,&input2);	
		
	
	}
	while(input >1 || input < 9 || input2=='\n');
	output(input,input2,c);
}

void output(int input, char input2, char c)
{	
	if (input>=1 && input <=9 && input2=='\n')
	{
		caculate(input);
		}
	else
	{
		exeption(input,input2,c);
	}
}

int main(int argc, char *argv[]) {
	int input;
	char input2;
	int a,result,ee;
	char c;
	do
	{
		printf ("Please enter a number (1-9): ");
		scanf("%d%c",&input,&input2);
		output(input,input2,c);			
		printf("Press any key to continue, Exit if press ESC. ");
		// User input keyboard
		c=getchar();
//		c=getch();	
//		if (c!=27){	
//		printf("\n");
//		}
	}
	// User input button esc to complete
	while (c!=27);
	return 0;
}

