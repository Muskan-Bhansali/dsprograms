#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k;
cout<<"Input any value-";
cin>>n;

for(i=0;i<n;i=i+2)
{
  for(j=0;j<n-1-i;j++)
  {
  cout<<" ";
  }
  for(k=0;k<=i;k++)
  {
  cout<<"* ";
  }
 cout<<"\n";
}
 getch();
}