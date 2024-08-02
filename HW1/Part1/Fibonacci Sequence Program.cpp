#include <iostream>
using namespace std;
int main()
{
	int recieve[10], i;
	for(i=0; i<10; i++)
	{
		cin>>recieve[i];
	}
	int *p;
	p= &recieve[1];
	cout<<*p<<' ';
	for(i=0; i<4; i++)
	{
	   p-=1;
       cout<<*p<<' ';
       p+=3;
       cout<<*p<<' ';	
	}
	p= &recieve[8];
	cout<<*p;
	return 0;
}
	
    	
