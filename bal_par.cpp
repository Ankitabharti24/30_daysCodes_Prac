#include<iostream>
#include<stack>
using namespace std;

bool bal_par(string s){
	stack<char> p;
	for(int i=0;i<s.length();i++){
		if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
			p.push(s[i]);
		}
		else{
			p.pop();
		}
	} 
	
	if(p.empty()){
		return true;
	}
	else{
		return false;
	}
	
}

int main(){
	
	string s="[()]{}{[()()]()}";
	int res=bal_par(s);
	
	if(res==true){
		cout<<"True";
	}
	else{
		cout<<"False";
	}

}
