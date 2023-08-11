#include<iostream>
#include<stack>
using namespace std;

void rev_word(string s,int n){
	string str=" ";
	stack<string> v;
	string res=" ";
	for(int i=0;i<n;i++){
		if(isspace(s[i])){			
			v.push(str);
			 str="";								
		}
		else{
			str+=s[i];
		}		
	}
	v.push(str);
	
	while(!v.empty()){
		res+=(v.top()+" ");
		v.pop();
	}
	for(int i=0;i<res.length();i++){
		cout<<res[i];
	}
}

int main(){
	string s= "i love programming";
	int n=s.length();
	rev_word(s,n);
}
