//How do you check if two strings are anagrams of each other?

#include<iostream>
#include<string>
using namespace std;

bool anagram(string str1,string str2,int n1,int n2){
	
	if(n1!=n2){
		return false;
	}
	
	for(int i=0;i<n1-1;i++){
		for(int j=0;j<n1-i-1;j++){
			if(str1[j]>str1[j+1]){
				int temp=str1[j];
				str1[j]=str1[j+1];
				str1[j+1]=temp;
			}
			if(str2[j]>str2[j+1]){
				int temp=str2[j];
				str2[j]=str2[j+1];
				str2[j+1]=temp;
			}
		}
	}
	
	for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}

int main(){
	
	string str1="listen";
	string str2="silent";
	int n1 = str1.length();
	int n2 = str2.length();
	
	int res=anagram(str1,str2,n1,n2);
	if(res){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}
