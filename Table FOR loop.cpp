//Print multiplication table of a given number
#include<iostream>
using namespace std;
int main()
{
	int table;
	cout<<"Enter your Number:";
	cin>>table;
	for(int i=1;i<=10;i++)
	{
		cout<<table<<"X"<<i<<"="<<table*i<<endl;
	}
	return 0;
}
