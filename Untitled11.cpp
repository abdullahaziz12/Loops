#include<iostream>
using namespace std;
int main()
{
	int num,num2,ans;
	char op;
	cout<<"Enter Your Number:";
	cin>>num;
	ans=num;
	while(true)
	{
	
		cout<<"Enter your Operator:";
		cin>>op;
			 if(op=='=')
		{
			
			break;
		}
		if(op=='p')
		{
			ans=ans/100;
			cout<<"Percentage="<<ans<<endl;
			continue;
		}
			cout<<"Enter your Number:";
		cin>>num2;
	
	    if(op=='+')
	{
		ans=ans +num2;
	}
	else if (op=='-')
	{
		ans=ans-num2;
	}
	else if(op=='*')
	{
		ans=ans*num2;
	}
	else if(op=='/')
	{
		ans=ans/num2;
	}
}
	cout<<"Answer:"<<ans<<endl;
	return 0;
}
