//Print all odd numbers from 1–50.
#include<iostream>
using namespace std;
int main()
{
	int odd;
	odd=1;
	while(odd<=50)
	{
		if(odd%2!=0)
		{
			cout<<odd<<endl;
		}
		odd++;
	}
	return 0;
}
