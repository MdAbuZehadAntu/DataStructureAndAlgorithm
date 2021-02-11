#include<stdio.h>

typedef struct Rectangle{

int len;
int wid;

}rect;
int main()
{
    rect r;
    printf("Len : ");
    scanf("%d",&r.len);
    printf("Wid : ");
    scanf("%d",&r.wid);

    printf("Area of the rectangle is %d",r.len*r.wid);



    return 0;
}
