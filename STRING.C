#include<stdio.h>
main()
{
char s1[]="pass",s2[]="Pass";
int i;
clrscr();
i=strcmpi(s1,s2);
if(i==0)
printf("string are equal");
else
printf("string are not equal");
getch();
return 0;
}