#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool is_perfect(vector< vector<int> > arr, int n){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(i==j || i+j==n-1){
					if(arr[i][j]==0){
						return false;
					}
				}else{
					if(arr[i][j]!=0){
						return false;
					}
				}
			}
		}
		return true;
}
int main(){
	int n;
	cout<<"give a number that represents size of 2d matrix:";
	cin>>n;
	
	vector< vector<int> > arr(n, vector<int> (n));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	
	bool x;
	x=is_perfect(arr,n);
	cout<<x;
	return 0;
}
