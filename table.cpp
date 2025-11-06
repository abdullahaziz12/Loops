#include<iostream>
using namespace std;
int main()
{
	int table,count;
	cout<<"Enter Your Number:";
	cin>>table;
	while(count<=10)
	{
		cout<<table<<"X"<<count<<"="<<table*count<<endl;
		count++;
	}
	return 0;
}
