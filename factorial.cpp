#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}

int main()
{
	int n;
	cout<<"ingrese un numero:"; cin>>n;
	if(n<0)
	{
		cout<<"no esta definido";
	}
	else
	{
		int resultado=factorial(n);
		cout<<"el factorial de "<<n<<"es:"<<resultado<<endl;
	}
	
	return 0;
	
}
