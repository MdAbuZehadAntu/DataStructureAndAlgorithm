#include<stdio.h>

typedef struct card
{
    int face;
    int shape;
    int num;
}card;

int main()
{
    card arr[52];
    scanf("%d %d %d",&arr[0].face,&arr[0].shape,&arr[0].num);

    for(int i=0;i<1;i++)
    {
        printf("%d %d %d",arr[i].face,arr[i].shape,arr[i].num);
    }
    return 0;
}
