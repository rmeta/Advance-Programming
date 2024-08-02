#include<iostream>
#include<string>

using namespace std;
string min( int s, int n)
{
	int i;
	int count=0;
	string rmit;
	
	rmit.resize(n);

	for(i=0; i<n; i++){
		rmit[i]='0';
	}	
	
	if(s!=0) 	{
        int save=(s)/9;
        if(save!=0){
	      for(i=(n-1);i>=(n-save);i--)
        	{
         	rmit[i]='9';
            }	
        }
        
        int rem=s%9;
        
        if(n>=1+save)
        rmit[n-1-save]='0'+rem;
    
        if(rmit[0]!='0'){
        	return rmit;
	    }
    
        else{
           rmit[0]='1';
           int save=(s-1)/9;
       if(save!=0)
       {
	     for(i=(n-1);i>=(n-save);i--)
	     {
	       rmit[i]='9';
         }	
       }
           int rem=(s-1)%9;
           
           if(n>=1+save)
           rmit[n-1-save]='0'+rem;
	    }
	return rmit;
    }    
}

string max( int s, int n)
{
	int i;
	int count=0;
	string rmit;
	
	rmit.resize(n);
    
	for(i=0; i<n; i++){
	  rmit[i]='0';
	}	
	
	if(s!=0) {
      int save=s/9;
	for(i=0;i<(save);i++){
	  rmit[i]='9';
    }	
    
    if(count<n){
      int rem=s%9;
      rmit[save]='0'+rem;
    }
    }
    return rmit;
}

int main(){
	int n;
	int s;
	
	cin>>n>>s;
		
	if((s%9==0 && s/9>n)||(s%9!=0 && s/9>=n)||(s==0&&n!=1) || (n==0&&s>0) || (n>1 && s==0)){
	cout<<"-1"<<' ';
    }
    
    else
	cout<<min(s,n)<<' ';
	
	if((s%9==0 && s/9>n)||(s%9!=0 && s/9>=n)||(s==0&&n!=1) || (n==0&&s>0)){
	cout<<"-1";
    }
    
    else
	cout<<max(s,n);	
		
	return 0;
}
