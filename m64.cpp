#define N 20
#include<iostream.h>
void main()
{
	int fib[N]=(1,1);
	int i;
	for(i=2;i<N;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<"Fibonacci���е�ǰ20����: "<<endl;
	for(i=2;i<N;i++)
		cout<<fib[i]<<" ";
	cout<<endl;
}
