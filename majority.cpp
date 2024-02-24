#include<iostream>
using namespace std;
int major(int *arr,int n,int count=0) {
	int maj=0;
	for(int i=0;i<n;i++) {
		int ele=arr[i];
		for(int j=0;j<n;j++) {
			if(ele==arr[j]) {
				count++;
			}
		}
		if(count>n/2) {
			maj=ele;
			break;
		}
	}
	return maj;
}
int main() {
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++ ) {
		cin>>arr[i];
	}
	int maj=major(arr,n);
	cout<<maj;
	return 0;
}