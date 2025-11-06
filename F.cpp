#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{ 
	cout<<"Enter Your Number for "<<i+1<<":" ;
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum of All Number = "<<sum;
	return 0;
}

