//Take input until the user enters 0 — then print total sum.
#include<iostream>
using namespace std;
int main()
{
	int num1,sum;
	cout<<"Enter Your Number:";
		cin>>num1;
		sum=num1;
	while(true)
	{
		int num2;
	   cout<<"Enter Your Number For End 0:";
	   cin>>num2;
	   sum=sum+num2;
		if(num2==0)
		{
			cout<<"Total Sum =  "<<sum;
			break;
		}
	
	}
}
