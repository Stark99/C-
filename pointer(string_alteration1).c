#include<stdio.h>
char str[20];
char *p1;
void change(char p)
{
p1 = str + 2;
printf("Value of p1 on change:%s\n",p1);
printf("Value of str on change:%s\n",str);
}
int main()
{
strcpy(str,"Understand");
printf("Value of p1 before change:%s\n",p1);
printf("Value of str before change:%s\n",str);
change(p1);
printf("Value of p1 after change has made:%s\n",p1);
printf("Value of str after change has been made:%s\n",str);
strcpy(p1,"derstanding");
printf("Value of p1:%s \nValue of str:%s",p1,str);
return 0;
}
