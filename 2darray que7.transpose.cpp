#include <bits/stdc++.h>
using namespace std;


void transpose(vector < vector<int> > &v, int m, int n){
		for(int i=0; i<m; i++){
			for(int j=0; j<i; j++){
				swap(v[i][j],v[j][i]);
			}
		}
		
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
		return;
}
int main(){
	int m,n;
	cout<<"give the input of rows and columns of the matrix:";
	cin>>m>>n;
	vector < vector<int> > v(m, vector<int> (n));
	if(m!=n)return 0;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>v[i][j];
		}
	}
	
	
	transpose(v,m,n);
	
	return 0; 
}
