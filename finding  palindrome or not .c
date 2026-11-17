
#include <stdio.h>

int main() {
    int n=13331;
    int original=n;
    int res=0;
    while (n>0)
        {
            int rem=n%10;
            res=res*10+rem;
            n=n/10;
        }
    if(original==res)

    {
        printf("it is a palindrome");
    }
else 
    {
        printf("not a palindrome");
    }
    
    return 0;
}
