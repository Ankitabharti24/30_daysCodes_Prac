#include<iostream>
#include<vector>
using namespace std;

void gne(int arr[],int n){
	vector<int> v;
	
	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=i+1;j<n;j++){
				if(arr[j]>arr[i]){
					v.push_back(arr[j]);
					flag=1;
					break;
				}
		}
		if(flag==0){
			v.push_back(-1);
		}		
	}
	v.push_back(-1);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
}

int main(){
	int n;
	int arr[n];
	cout<<"Enter the no of elements: ";
	cin>>n;
	
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	gne(arr,n);
	
}
