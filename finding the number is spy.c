#include<stdio.h>
int main()
{
    int n;
    int prod=1;
    int sum=0;
    scanf("%d",&n);
    int original=n;
    
    while (n>0)
        {
            int rem=n%10;
            prod=prod*rem;
            sum=sum+rem;
            n=n/10;                                                                         }
    if(prod==sum)
    {
        printf("%d is  a spy",original);
    }
    else
    {
        printf("%d is not a spy ",original);
    }
    
    return 0;
}

