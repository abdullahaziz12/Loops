#include<iostream>
using namespace std;
int main()
{
	int n,i;
	i=1;
	cout<<"Enter your Number:";
	cin>>n;
	while(i<=10)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		i++;
	}
	return 0;
}

