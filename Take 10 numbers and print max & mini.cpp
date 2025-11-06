//Take 10 numbers and find maximum and minimum using loops.
#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int max,mini;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Number for "<<i+1<<":";
		cin>>arr[i];
	}
	max=arr[0];
	for(int i=0;i<10;i++)
	{
		if(max<arr[i])
		{
		max=arr[i];	
		}
		
	}
		mini=arr[0];
	for(int i=0;i<10;i++)
	{
		if(mini>arr[i])
		{
			mini=arr[i];
		}
	}
	cout<<"maximum = "<<max<<endl;
	cout<<"minimum = "<<mini;
}
