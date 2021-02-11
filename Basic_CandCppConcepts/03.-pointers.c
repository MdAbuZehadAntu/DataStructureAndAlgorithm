#include<stdio.h>

int main()
{

    int a=10;
    int* p;
    p=&a;

    printf("%d",*p);
    *p=90;
    printf("\n%d",a);

    return 0;
}
