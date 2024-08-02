#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	int **matrix;
	
	cin>>rows;
	cin>>cols;
	
	matrix= new int *[rows];
	matrix[0]= new int [rows*cols];
	
	int i;

	for(i=1; i<rows; i++)
	  matrix[i]= matrix[i-1]+cols;
	   
	for(i=0; i<rows; i++)
	  delete []matrix[i];
	  
	delete []matrix;
	
	return 0;
}
