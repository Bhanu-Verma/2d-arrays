	/* Given a matrix arr[][] of integers, print the prefix sum matrix for it*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"give the size of matrix:";
	cin>>n;
	
	
	vector< vector<int> > v(n, vector<int> (n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>v[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=1; j<n; j++){
			v[i][j]+=v[i][j-1];
		}
	}
	
	for(int j=0; j<n; j++){
		for(int i=1; i<n; i++){
			v[i][j]+=v[i-1][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
