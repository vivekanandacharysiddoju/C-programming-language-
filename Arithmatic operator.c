#include <stdio.h>

int main() {
    int a,b;
    printf("enter the value:\n");
    scanf("%d%d",&a,&b);
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modulus division\n");
    int ch;
    printf("enter your choice:\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("addition is:%d\n",a+b);
    }
    else if(ch==2)
    {
        printf("subtraction is:%d\n",a-b);
    }
    else if(ch==3)
    {
        printf("multiplication is:%d\n",a*b);
    }
    else if(ch==4)
    {
        printf("division is:%d\n",a/b);
    }
    else if(ch==5)
    {
        printf("modulus division is:%d\n",a%b);
    }
    else
    {
        printf("invalid choice");
    }
    return 0;
}

