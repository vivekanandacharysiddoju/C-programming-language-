#include<stdio.h>
int main()
{
    int n=123;
    int res=0;
    while (n>0)
        {
            int rem=n%10;
            res=res+rem;
            n=n/10;
        }
    printf("%d",res);
    return 0;
}
