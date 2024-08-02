#include <iostream>

using namespace std;

struct Fraction
{    
	int num, denom;
	Fraction()
    {
        num = 1;
        denom = 1;
    }
	
	Fraction(int x, int y)
        :num(x)
        ,denom(y){
         if (y==0) 
         { exit(0);}} 
         

	Fraction operator+(const Fraction& frac)
	{
		Fraction result;
	    result.num = num*frac.denom+frac.num*denom;
        result.denom = denom*frac.denom;
		return result;
	}

	bool operator<(const Fraction& frac)
	{
		Fraction result;
		result.num = num*frac.denom-frac.num*denom;
        result.denom= denom*frac.denom;
        
		if(result.num*result.denom<0)
		  return true;
		
		return false;
	}
	
	bool operator>(const Fraction& frac)
	{
		Fraction result;
		result.num = num*frac.denom-frac.num*denom;
        result.denom= denom*frac.denom;
        
		if(result.num*result.denom>0)
		  return true;
		
		return false;
	}
	
	bool operator==(const Fraction& frac)
	{
		Fraction result;
		result.num = num*frac.denom-frac.num*denom;
        result.denom= denom*frac.denom;
        
		if(result.num*result.denom==0)
		  return true;
		
		return false;
	}
	
	Fraction operator*(const Fraction& frac)
   {
	Fraction result;   
	result.num = num*frac.num;
    result.denom = denom*frac.denom;
	return result;
   }
   
   

	friend ostream& operator<<(ostream& os, const Fraction& frac); 
	
	friend istream& operator>>(istream& is, Fraction& frac);  

};

ostream & operator<<(ostream & os, const Fraction & frac)
{
	os << '(' << frac.num << ',' << frac.denom << ')';
	return os;
}

int main()
{
	Fraction A(1, 4);
	Fraction B(2, 3);
	Fraction F(2, 3);
	Fraction C,D,E;

	C = A + B + F;
	D = A * B * F;

	cout << " A + B + F = " << C << endl;
	cout << " A * B * F= " << D << endl;
	
	if(B>A){
		cout<<"A is smaller than B";
	} else{
		cout<<"A is not smaller than B";}
	
	return 0;
}// structure inja behtare chon ke az method hamun estefade khasi nadarim va bishtar manzuremun zakhire sazie data hast. alan mikhaim kasro zakhire konim va nemikhahim method haro seda konim

