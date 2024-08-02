#include <iostream> 
#include <string.h>
using namespace std; 
 
bool firstLast(char word[], int i, int j) 
{ 
	if (word[i] != word[j]) 
	return false; 
	
	if (i == j) 
	return true; 
 
	if (i < j + 1) 
	return firstLast(word, i + 1, j - 1); 

	return true; 
} 

bool qarine(char word[]) 
{ 
	int length = strlen(word); 
	
	if (length == 0) 
		return true; 
	
	return firstLast(word, 0, length - 1); 
} 

int main() 
{ 
	int num;
	cin>>num;
	
	char word[1000]; 
	cin>>word;
	
	int len;
	len = strlen(word);

	if (qarine(word) && len==num) 
	cout << "Yes"; 
	else
	cout << "No"; 

	return 0; 
} 

