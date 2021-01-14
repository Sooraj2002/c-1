#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, mp;
    printf("Enter two Numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2)
        mp=num1;
    else
        mp=num2;
    while(1)
    {
        if((num1%mp==0) && (num2%mp==0))
            break;
        else
            mp--;
    }
    printf("\nHCF(%d,%d) = %d", num1, num2, mp);
    getch();
    return 0;
}
