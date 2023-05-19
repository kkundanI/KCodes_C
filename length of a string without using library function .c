#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],ch=0;
    int l,c=-1,i;
    printf("enter name : \t");
    gets(a);
    i=0;
    do
    {
        ch=a[i];
        c++;
        i++;
    }
    while(ch!='\0');
    printf("output : %d",c);
    getch();
}