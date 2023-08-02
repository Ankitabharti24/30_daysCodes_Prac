#include<iostream>
using namespace std;

int main(){
	
	int arr[6]={1,3,5,5,7,9};
	int val;
	cout<<"Enter the element that you want to search: "<<endl;
	cin>>val;
	
	int count=0;
	for(int i=0;i<6;i++){
		if(arr[i]==val){
			count++;
		}
	}
	
	cout<<"The count of the element is: "<<count;
	
	
}
