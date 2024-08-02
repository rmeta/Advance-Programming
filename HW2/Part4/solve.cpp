#include<iostream>
#include<string.h>
using namespace std;

bool recieve(int n, int r)
{
	if(n>=1 , r<=10)
	{
	   return true;
	}
	
	else
        return false;
        
    return true;
}

int solve(int n, int r)
{ 
    int counter=0;
    
    if (n == 1 && r >=0) 
        return 1; 
  
    for (int i = 0; i <= r; i++)
	{ 
	counter += solve(n-1, r-i);
    } 
    
   	return counter;
}


int main()
{
	int n, r;
	cin>>n>>r;
	
	recieve(n,r);
	cout<<solve(n, r);
	
	
	
}
