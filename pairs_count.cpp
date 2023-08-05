#include<iostream>
using namespace std;

int sumofpair(int arr[],int n,int k){
	int count=0;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k){
				count++;
			}
		}
	}
	return count;
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
	
	int k;
	cout<<"Enter the value of k: ";
	cin>>k;
	
	int res=sumofpair(arr,n,k);
	
	cout<<"The number of pairs of integers whose sum equal to "<<k<<" is: "<<res;
	
	
	
}
