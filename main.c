#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    int*p=&x;
    //int*p;
    //p=&x;
    printf("the value of x=%d\n",x);
     printf("the value of x=%p\n",&x);

     printf("the value of x=%d\n",p);
     printf("the value of x=%p",&p);
     printf("the value of x=%d",*p);


    return 0;
}
