#include<stdio.h>
int main()
{ int i;
 char ch_arr[5]={'a','b','c','d','e'};
 int in_arr[5]={1,2,3,4,5};
 char *ch_pointer;
 int *in_pointer;
 ch_pointer= (char *)in_arr;
 in_pointer = (int *)ch_arr;
 for(i=0; i<5;i++)
 {
 printf("[in_pointer] points to %p, containing value char '%c'\n",in_pointer,*in_pointer);
 in_pointer= (int *)((char *)in_pointer+1);
 }
 for(i=0;i<5;i++)
 {
     printf("[ch_pointer] points to %p containing value int '%d'\n",ch_pointer,*ch_pointer);
 ch_pointer=(char *)((int *)ch_pointer+1);
 }
return 0;
}
