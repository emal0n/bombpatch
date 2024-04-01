//basic calculator, by ed.
#include <stdio.h>

int main(void)
{
    int numb1, numb2, sum, sub, mul, div;

    printf("Welcome to calculator. \n");
    printf("Type the two numbers  for calcule:");
    scanf("%d%d", &numb1, &numb2);

    sum = numb1 + numb2; // for sum
    sub = numb1 - numb2; // for subtraction 
    mul = numb1 * numb2; // for multiplication 
    div = numb1 / numb2; // for divison

    printf("The sum is: %d \n", sum);
    printf("The subtraction is: %d \n", sub);
    printf("The multiplication is: %d \n", mul);
    printf("The division is: %d \n", div );
}