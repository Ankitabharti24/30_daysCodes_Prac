//Given an array arr[] of non-negative integers and an integer sum, 
//find a subarray that adds to a given sum. There may be more than one subarray 
//with sum as the given sum, print first such subarray.


#include<iostream>
using namespace std;

void sumofele(int arr[],int n,int k){
	
	bool flag=0;
	int l,m;

	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(sum==k){
				l=i;
				m=j;
				flag=1;
				break;
			}
			else if(sum>k){
				break;
			}			
		}		
	}
	if(flag==1){
		for(int p=l;p<=m;p++){
			cout<<arr[p]<<" ";
		}
	}
	else if(flag=0){
		cout<<"No res";
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
	
	cout<<"The the value of sum: ";
	cin>>k;
	sumofele(arr,n,k);
}
