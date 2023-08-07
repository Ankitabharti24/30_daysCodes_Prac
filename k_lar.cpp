// Find Kth largest element in a given array.

#include<iostream>
using namespace std;

void k_largest(int arr[],int n,int k){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"The kth largest element is: "<<arr[n-k];
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
	k_largest(arr,n,k);
}
