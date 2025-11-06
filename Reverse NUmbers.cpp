//Reverse of Numbers
#include<iostream>
using namespace std;
int main()
{
	int n,rev;
	cout<<"Enter Your Number:";
	cin>>n;
	rev=0;
	while(n>0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	cout<<rev;
}
