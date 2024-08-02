#include <iostream>
#include <string.h>

using namespace std;

void noRepeat(char word[], int i)
{	
        if(i>=strlen(word))
        {
        	return;
		}
        if(word[i]!=word[i+1])
        {
        	cout<<word[i];
		}
		
		return noRepeat(word, i+1);
		
}

int main()
{
	int i=0 ;

	
	int num;
	cin>>num;
	
	char word[1001];
	cin>>word;
	
	noRepeat(word , i);

	return 0;
	
}
