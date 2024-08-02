
#include<iostream>
#include<vector>
#include<string.h>


using namespace std;

bool whatAmI(string what){
	 if(what[0]=='2'|| what[0]=='1'||what[0]=='3'||what[0]=='4'||what[0]=='6'||what[0]=='5'||what[0]=='7'||what[0]=='8'||what[0]=='9'){
	 	return true;}
	 	
	 else
	    return false;}
	    
struct ticket{
	string num,name;
	ticket(string a, string b)
		:num(a)
		,name(b){}
};

class havapeima{
	public:
	vector<ticket> list;
	
	bool cancelNum(string num){
		for(int i=0;i<list.size();i++){
			if(list[i].num==num){
			  list.erase(list.begin()+i);
			  return true;}}
			  return false;}
	
	bool cancelName(string name){
    	for(int i=0;i<list.size();i++){
			if(list[i].name==name){
			  list.erase(list.begin()+i);
			  return true;}}
			  return false;}
	
	bool checkNum(string num){
		for(int i=0;i<list.size();i++){
			if(list[i].num==num){
			  return true;}}
			  
			  return false;}
	
	bool checkName(string name){
		for(int i=0;i<list.size();i++){
			if(list[i].name==name){
			  return true;}}
			  
			  return false;}
			  
	bool cancel(string x){
	        if(whatAmI(x))
	           return cancelNum(x);
	
	        else
	           return cancelName(x);}
	            
    bool check(string x){
    	if(whatAmI(x))
	        return checkNum(x);
	
	    else
	        return checkName(x);}
	        
	void reserve(string num , string name){
		if(checkNum(num)){
		   cout<<"seat not available"<<endl;
	    }else{
		    cancel(name);
		    ticket kharidam(num,name);
		    list.push_back(kharidam);
			cout<<"done"<<endl;}}
			
	void print(){
		for(int i=0; i<list.size();i++){
			cout<<list[i].num<<' '<<list[i].name<<endl;}}
    };

int main(){
	
	int n;
	cin>>n;
	
	havapeima seat;
	for(int i=0;i<n;i++){ 
	
	string recieve;
	cin>>recieve;
		    
		if(recieve=="reserve"){
			string num;
	        string name; 
		    cin>>num>>name;
		    if(whatAmI(name)){
		       swap(num,name);}
		    seat.reserve(num , name);}
				
		if(recieve=="cancel"){
			string varedamKon;
		    cin>>varedamKon;
		    if(seat.cancel(varedamKon)){
			  cout<<"done"<<endl;}
			  
			else
			  cout<<"ticket not found"<<endl;}
		   
		if(recieve=="check"){
			string yeChiziBede;
			cin>>yeChiziBede;
			if(seat.check(yeChiziBede))
			  cout<<"yes"<<endl;
			else
			  cout<<"no"<<endl;}}
		    
		seat.print();	
		
    return 0;
}
