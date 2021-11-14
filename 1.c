#include<stdio.h>
int main()
{
    int n,n1,i,m=0,flag=0, m1=0,flag1=0;
    printf("Enter the number1 ");
    scanf("%d",&n);
    printf("Enter the number2 ");
    scanf("%d",&n1);
    m=n/2;
    m1=n1/2;
    for(i=2; i<=m; i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime");
            flag=1;
            break;
        }
    }
    for(i=2; i<=m1; i++)
    {
        if(n1%i==0)
        {
            printf("Number is not prime");
            flag1=1;
            break;
        }
    }
    if(flag==0 && flag==0)
    {
        int sum = 0;
        sum = n + n1;
        printf("Sum is = %d", sum);
    }
    return 0;
}
