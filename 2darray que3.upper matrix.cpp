/*Write a user defined function upper() which takes an integer square matrix as an input and 

 its size N and prints the upper half of the matrix*/

#include <bits/stdc++.h>
using namespace std;

void print_up(vector < vector<int> > arr , int n){
		for(int i=0; i<n; i++){
			for(int j=i; j<n; j++){
				cout<<arr[i][j]<<" ";
			}	
			cout<<endl;	
		}
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
	
	print_up(arr, n);
	
	return 0;
}
