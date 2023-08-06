#include<iostream>
using namespace std;

void small_lar(int arr[],int n){
	
	int s=999;
	int l=-999;
	
	for(int i=0;i<n;i++){
		if(s>arr[i]){
			s=arr[i];
		}
		if(l<arr[i]){
			l=arr[i];
		}
	}
	cout<<"The smallest element in the array is: "<<s<<endl;
	cout<<"The largest element in the array is: "<<l;
}

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	small_lar(arr,n);
}
