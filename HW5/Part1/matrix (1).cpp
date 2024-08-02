#include <iostream>

using namespace std;
	
class Ver{
		public:
		  double x11,x21;
		  double arr[2];
		  Ver(){
			x11=0;
			x21=0;}

			
		  Ver(double a, double b)
		    :x11(a)
		   ,x21(b){}
		  
		  Ver(double *arr){
		  	x11=arr[0];
		  	x21=arr[1]; }
		  
		   
		  Ver operator+(const Ver& vertic){
		   	Ver result;
		   	result.x11=x11+vertic.x11;
		   	result.x21=x21+vertic.x21;
		   	return result;}	   	
		   	
		  Ver operator-(const Ver& vertic){
		   	Ver result;
		   	result.x11=x11-vertic.x11;
		   	result.x21=x21-vertic.x21;
		   	return result;}	   
		   	
		   };	
		   
class Matrix{
		
	public:
		double x11,x12,x21,x22;
		double arr[4];
		
		Matrix(){
			x11=0;
			x22=0;
			x12=0;
			x21=0;
		}
			
		Matrix(double a, double b , double c , double d)
		:x11(a)
		,x12(b)
		,x21(c)
		,x22(d){}
		
		Matrix(double *arr){
			x11=arr[0];
			x12=arr[1];
			x21=arr[2];
			x22=arr[3];}

Matrix operator*(const Matrix& mat)
	{
		Matrix result;
		result.x11=x11*mat.x11+x12*mat.x21;
		result.x12=x11*mat.x12+x12*mat.x22;
		result.x21=x21*mat.x11+x22*mat.x21;
		result.x22=x21*mat.x12+x22*mat.x22;
		return result;
	}
	
  Matrix operator+(const Matrix& mat){
		Matrix result;
		result.x11=x11+mat.x11;
		result.x12=x12+mat.x12;
		result.x21=x21+mat.x21;
		result.x22=x22+mat.x22;
		return result;}
	
  Matrix operator-(const Matrix& mat){
		Matrix result;
		result.x11=x11-mat.x11;
		result.x12=x12-mat.x12;
		result.x21=x21-mat.x21;
		result.x22=x22-mat.x22;
		return result;}
		
   Matrix inverse(){
   	double saver;
   	saver=(x11*x22)-(x12*x21);
   	Matrix result;
   	result.x11=x11/saver;
   	result.x12=x12/saver;
   	result.x21=x21/saver;
   	result.x22=x22/saver;
   	
	return result;}//khubish ine ke dige niazi be tarife ye operator dige ke majbur bashim tu ye adad zarbesh konim nadare, yekishun hafeze bishtari masraf mikone, yeki copy mikone, un code khanatar az in code masalan, un yeki b zehn adamao riazi nazdiktare
		
     friend ostream& operator<<(ostream& os, const Matrix& mat);}; 

ostream & operator<<(ostream& os, const Matrix& mat)
{
	os << '(' << mat.x11<< ',' << mat.x12 <<','<< mat.x21<<','<<mat.x22<<')';
	return os;
}

class Hor{
	public:
		double x11,x12;
		double arr[2];
		Hor(){
			x11=0;
			x12=0;}

		Hor(double *arr){
			x11=arr[0];
			x12=arr[1];}
			
		Hor(double a, double b)
		:x11(a)
		,x12(b){}
		
		Hor operator*(const Matrix& mat){
    	  Hor result;
	      result.x11=x11*mat.x11+x12*mat.x21;
     	  result.x12=x11*mat.x12+x12*mat.x22;
    	  return result;}
    	  
    	Hor operator+(const Hor& horizon){
    		Hor result;
    		result.x11=x11+horizon.x11;
    		result.x12=x12+horizon.x12;
    		return result;}
    	
		Hor operator-(const Hor& horizon){
    		Hor result;
    		result.x11=x11-horizon.x11;
    		result.x12=x12-horizon.x12;
    		return result;}    		
    	  
     	double operator*(const Ver& vertic){
    	  double result;
    	  result=vertic.x11*x11+x12*vertic.x21;
    	  return result;}
    	  
        friend ostream& operator<<(ostream& oss, const Hor& horizon);};

ostream & operator<<(ostream& oss, const Hor& horizon){
	oss << '(' << horizon.x11<< ',' << horizon.x12 <<')';
	return oss;}
	    	
Matrix operator*(const Hor& horizn, const Ver& verti){
	    Matrix result;
	    result.x11=verti.x11*horizn.x11;
	    result.x12=verti.x11*horizn.x12;
	    result.x21=verti.x21*horizn.x11;
	    result.x22=verti.x21*horizn.x12;
	    return result;}
	    
Ver operator*( const Matrix& mat,const Ver& vertic){
  	    Ver result;
  	    result.x11=mat.x11*vertic.x11+mat.x12*vertic.x21;
  	    result.x21=mat.x21*vertic.x11+mat.x22*vertic.x21;
  	    return result;}	
  	    
ostream& operator<<(ostream& oos, const Ver& vertic);

ostream & operator<<(ostream& oos,const Ver& vertic){
	oos << '(' << vertic.x11<< ',' << vertic.x21 <<')';
	return oos;}
	
	

int main(){
	
	Matrix O(1,2,3,4);
	Matrix D(0,2,4,5);
	Matrix E;
	Hor C(2,4);
	Hor X(1,2);
	Hor F;
	Hor Z;
	Ver G(9,6);
	Ver B(2,3);
	Ver K;
	Ver S;
	double L;

	
	S=G-B;
	cout<<S<<endl;
	
	L=C*G;
    cout<<L<<endl;
    
    K=O*G;
    cout<<K<<endl;
    
    Z=C-X;
	cout<<Z<<endl;

	F=C*D;
	cout<<F<<endl;
	
	E=O*D;
	cout<<E;
	
	
}
