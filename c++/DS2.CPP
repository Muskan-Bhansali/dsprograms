#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;

for(i=1;i<=5;i++)
{
  for(j=1;j<=5;j++)
  {
    if ((j==1)||(j==5))
    cout<<"* ";
    if ((i==1) && ((j==2)||(j==3)||(j==4)))
    cout<<"* ";
    if ((i==5) && ((j==2)||(j==3)||(j==4)))
    cout<<"* ";
    if (((i==2)||(i==3)||(i==4)) && ((j==2)||(j==3)||(j==4)))
    cout<<"  ";
  }
 cout<<endl;
}
 getch();
}