#include<iostream>
using namespace std;
int p(int n, int m)
{
	if(m==0)
	{
		return 0;
	}
	else
	{
		return n+p(m-1, n);
	}
}

int main()
{
	int m, n, suma;
	cout<<"ingrese un numero: "; cin>>n;
	cout<<"ingrese otro numero: "; cin>>m;
	suma=p(n, m);
	cout<<suma<<endl;
	return 0;
	
	
}
