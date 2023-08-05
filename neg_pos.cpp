#include<bits/stdc++.h>
using namespace std;

void negpos(int arr[],int n){
	vector<int> x;
	vector<int> y;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			x.push_back(arr[i]);	
		}
		else{
			y.push_back(arr[i]);	
		}	
	}
	
	v.insert(v.begin(), x.begin(), x.end());
    v.insert(v.end(), y.begin(), y.end());	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
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
	
	negpos(arr,n);
		
}
