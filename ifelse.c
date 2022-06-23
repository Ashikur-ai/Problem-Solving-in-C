#include<stdio.h>
int main()
{
    double number;
    printf("Enter The Number: ");
    scanf("%lf",&number);

    if(number>0)
    {
        printf("The Number is POSITIVE");
    }
    else if (number<0)
    {
        printf("The Number is NEGATIVE");
    }
    else
    {
        printf("The Number is ZERO");
    }

     return 0;
}

