#include<iostream>
using namespace std;
int main()
{
	int count=1,sum;
	sum=0;
	while(count<=5)
	{
		cout<<count<<endl;
		sum=sum+count;
		count++;
		
	}
	cout<<"Sum Of All Numbers = "<<sum;
	return 0;
}
