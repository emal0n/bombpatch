#include <stdio.h>

//void sessions
void sum()
{
    int numb1, numb2, sum;

    printf("Welcome to sume operation \n");
    printf("Type the two numbers  for calcule:");
    scanf("%d%d", &numb1, &numb2);

    sum = numb1 + numb2; // for sum
    
    printf("The sum is: %d \n", sum);

}

void sub()
{
    int numb1, numb2, sub;

    printf("Welcome to subtraction operation. \n");
    printf("Type the two numbers  for calcule:");
    scanf("%d%d", &numb1, &numb2);

    sub = numb1 - numb2; // for subtraction 
   
    printf("The subtraction is: %d \n", sub);
}

void mul()
{
    int numb1, numb2, mul;

    printf("Welcome to multiplication operation \n");
    printf("Type the two numbers  for calcule:");
    scanf("%d%d", &numb1, &numb2);

    mul = numb1 * numb2; // for multiplication 

    printf("The multiplication is: %d \n", mul);
}

void div()
{
    int numb1, numb2, div;

    printf("Welcome to division operation \n");
    printf("Type the two numbers  for calcule:");
    scanf("%d%d", &numb1, &numb2);

    div = numb1 / numb2; // for divison

    printf("The division is: %d \n", div );
}
//

// all systems and firules
int main(void)
{
	
	int all;
	
	printf("Welcome to calculator\n\n");
	printf("Select you operation:");
	printf("\n\n1- sume\n2- subtraction\n3- multiplication\n4- division\n");
	scanf("%d", &all);
	
	switch (all)
	{
	case 1:
	sum();
	break;
	
	case 2:
	sub();
	break;
	
	case 3:
	mul();
	break;
		
	case 4:
	div();
	break;
	
	default :
    printf ("Operation invalid");
    break;
	}
}