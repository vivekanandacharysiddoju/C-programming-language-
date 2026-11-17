#include <stdio.h>
int main()
{
    float avgmarks;
    printf("enter avgmarks:\n");
    scanf("%f",&avgmarks);
    if((avgmarks>=80)&&(avgmarks<=100))
    {printf("grade=A\n");
    }
    else if((avgmarks>=70)&&(avgmarks<=79))
    {printf("grade=B\n");
        }
     else if((avgmarks>=50)&&(avgmarks<=69))
    {printf("grade=C\n");
        }
     else if((avgmarks>=35)&&(avgmarks<=49))
    {printf("grade=D\n");
        }
    else 
     {
         printf("you just fail");
     }
}

