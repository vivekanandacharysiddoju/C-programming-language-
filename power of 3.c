#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n%3==0)
        {
            n=n/3;
        }
   if(n==1)
   {
       printf("true\n");
   }
    else
   {
       printf("false\n");
   }
    
    return 0;
}



