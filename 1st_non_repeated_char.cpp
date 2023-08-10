#include<iostream>
using namespace std;

char non_rep_char(string str,int n){
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(str[i]!=str[j]){
				flag=1;
			}
			else{
			flag=0;	
				break;
			}						
		}
		if(flag==1){
		return str[i];
		}
	}
	return '$';
}

int main(){
	string str="racecarr";
	int n=str.length();
	
	char res=non_rep_char(str,n);
	if(res=='$'){
		cout<<"All characters are repeated";
	}
	else{
		cout<<"First non-repeating character is: "<<res;
	}
}
