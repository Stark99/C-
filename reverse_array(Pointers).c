#include<stdio.h>


int main()
{
    int x;
    printf("Enter the size of array:");
    scanf("%d",&x);
    int *arr[x],arr1[x],i;
    printf("Enter terms of array:");
    for(i=1;i<=x;i++)
    {
    scanf("%d",&arr1[i]);
    }

    for(i=x;i>0;i--)
    {
        arr[i]=&arr1[i];
        printf("Value of arr[%d]:%d \n",i,*arr[i]);
        printf("Memory Address of arr[%d]:%x \t Memory Address of arr1[%d]:%x \n",i,arr[i],i,&arr1[i]);
       arr[i]--;
    }
    return 0;
}
