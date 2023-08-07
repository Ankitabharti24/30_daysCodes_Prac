#include<iostream>
using namespace std;

void rotate(int arr[],int n,int k){
	int temp[n];
	
	for(int i=0;i<n;i++){
		temp[(i+k)%n]=arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i]=temp[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n,k;
	
	cout<<"Enter the size of array: ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"The the value of k: ";
	cin>>k;
	
	rotate(arr,n,k);
	
}
