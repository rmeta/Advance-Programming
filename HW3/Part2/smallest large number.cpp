#include<iostream>
#include<string.h>
#include<sstream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
	string sentence;
	getline(cin,sentence);
	
	string save="";
	string alamat="";
	int i;
	 
	 for ( i=0; i < sentence.size(); ++i){
    	sentence[i]=tolower(sentence[i]);}   
	
    replace_if(sentence.begin(), sentence.end(), ::isdigit, ' ');
    replace_if(sentence.begin(), sentence.end(), ::ispunct, ' ');        
    
    vector<string> j;
    string mnm;
    
    istringstream iss(sentence);
    
    while(iss>>mnm){
    	j.push_back(mnm);
	}
	
	for(i=0;i<j.size();i++){
		if(i==0||j[i]!=j[i-1]){
			cout<<j[i]<<' ';}
		}	
}
