#include<iostream>
using namespace std;
int suma(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+suma(n-1);
	}
}
int main()
{
	int num, sum;
	cout<<"ingrese un numero:"; cin>>num;
	sum=suma(num);
	cout<<sum<<endl;
	return 0;
	
	
}
