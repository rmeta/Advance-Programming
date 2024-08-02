#include <iostream>
#include <math.h>
using namespace std;

class point{
	   	public:
	    int a,b;		
    	point(int x,int y){
			a=x;
			b=y;
		 }
};

class circle{
	    public:
	    int c;	
    	const double p=3.14;
    	point d;
    	
	    circle(point p, int r)
	   	     : c(r)
	   	     , d(p){}
		   	  			
	    double area(){
			  return p*c*c; }
			
		double circumference() {
		       return 2*p*c; }
};


bool strike(circle a, circle b){
    	int c,d,distance;
    	
    	distance=sqrt(pow((a.d.a-b.d.a),2)+pow((a.d.b-b.d.b),2));	
      	
		if(a.c+b.c>=distance){
			    return true;
		}
		
		else{
			    return false;
		}
		
		return true;
}


int main()
{
	int x1,x2,x3,x4;
	cin>>x1>>x2>>x3>>x4;
	
	point o1(x1,x2), o2(x3,x4);

	int r1,r2;
	cin>>r1>>r2;
	
	circle first(o1,r1), second(o2,r2);	
	
	if(strike(first,second)){
	             cout<<"yes";
	}	
	
	else
	             cout<<"no";
	             
	return 0;
}

//tafavotashun:1- methoda mitunan private bashan ya public ya protected
//methoda ro ba shey mishe seda zad
//functiona inpute makhsuse khodeshuno daran
//az aval publican
//ba esme khodeshun seda zade mishan
//
