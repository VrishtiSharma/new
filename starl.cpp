#include<iostream.h>
#include<conio.h>
void main ()
{
clrscr();
int n;
cout<<"Hello Sir"<<endl;
cout<<"Enter number of rows";
cin>>n;
int k=2*n-2;
for(int i=0;i<n;i++)
 {
   for(int j=0;j<k;j++)
    cout<<"  ";
    k=k-1;
    for( j=0;j<=i;j++)
    {
     cout<<"* ";
     }
     cout<<endl;
     }
getch();
}