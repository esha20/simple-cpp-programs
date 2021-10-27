#include<iostream>
using namespace std;
int main()
{
int i,flag=0;
cin>>i;
for(int l=2;l<i/2;l++)
{
	if(i%l==0)
	flag+=1;
}
if(flag>0)
cout<<"not prime";
else 
cout<<"prime";
	return 0;
}
