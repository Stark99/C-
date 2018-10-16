#include<stdio.h>
int main()
{
    int a[5]={2,4,5,6,7};
    int *p,i;

        for(i=0;i<5;i++)
        {
    p=&a[i];
    printf("Value of a[%d]:%i\t",i,*p);
    printf("Address of array:%x\n",p);
    }
    return 0;
}
