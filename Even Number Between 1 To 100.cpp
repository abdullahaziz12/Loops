//Print even numbers between 1–100.
#include<iostream>
using namespace std;
int main()
{
  int num;
  num=1;
  while(num<=100)
  { 
  if(num%2==0)
  {
  	cout<<num<<endl;
  }
  	num++;
  }

  return 0;
}
