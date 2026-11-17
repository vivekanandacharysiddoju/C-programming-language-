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
            n=n/10;                                                                         }
printf("%d",prod);
    
    return 0;
}
