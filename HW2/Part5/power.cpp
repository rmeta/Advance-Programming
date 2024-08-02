#include <iostream>
#include <iomanip>

using namespace std;

double power(double x, unsigned int n) 
{
    if (n > 0) 
	{
        double p2 = power(x, n / 2);        
        return p2 * p2 * ((n & 1) ? x : 1);
    }
    else
        return 1;
}

int main()
{
    double y,x;
    int n;

    cin>>x>>n;

    y = power(x,n);

    cout<<setprecision(14)<<y;

    return 0;
}
