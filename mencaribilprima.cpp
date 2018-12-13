#include<iostream>
using namespace std;

main()
{
int x,i,count=0;
cout<<"\nmasukan angkanya:";
cin>>x;
for(i=2;i<=x/2;i++)
{
    if(x%i==0)
    count++;
}
if(count>0|| x<2)
cout<<x<<"bukan bilangan prima\n";
else
cout<<x<<"\n itu bilangan prima\n";

}
