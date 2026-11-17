#include <stdio.h>
int main()
{
   char a='g';
    int b=10;
    float c=6.622;
    double d=6668252365;
    printf("size of char is:%zu\n",sizeof(a));
    printf("size of integer is:%zu\n",sizeof(b));
    printf("size of float is:%zu\n",sizeof(c));
    printf("size of double is:%zu\n",sizeof(d));
    return 0;
}
