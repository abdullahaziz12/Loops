//Print numbers from 1–100 but skip multiples of 5.
#include<iostream>
using namespace std;
int main()
{
	int num;
	num=1;
	while(num<=100)
	{
		if(num==5)
		{
		continue;	
		}
		cout<<num;
		num++;
	}
}
