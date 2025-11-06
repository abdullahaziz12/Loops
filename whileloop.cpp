#include<iostream>
using namespace std;
int main(){
	int num,num2,ans;
	char op;
	cout<<"Enter Number:";
	cin>>num;
	ans=num;
	while(true){
		
	
		cout<<"Enter operator:";
		cin>>op;
		if(op=='='){
			break;
		}
		cout<<"Enter number 2:";
		cin>>num2;
	
		if(op=='+'){
			ans=ans+num2;
		
		}
		else if(op=='-')
		{
			
			ans=ans-num2;
			
		}
	}
	cout<<"Answer="<<ans;
}
