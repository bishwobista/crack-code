#include<iostream>
using namespace std;
long fact(int n)
{
if(n<=1)
return n;
else
return n*fact(n-1);
}
int main()
{
int n,i,j,k;
cin>>n;
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
cout<<" ";
}
for(j=0;j<=i;j++)
{
cout<<" "<<fact(i)/(fact(j)*fact(i-j));
}
cout<<endl;
}
return 0;
}
