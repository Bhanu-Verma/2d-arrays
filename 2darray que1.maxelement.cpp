	/* Given a 2D matrix with m rows and n columns containing integers, find and print the
maximum value present in the array*/

#include <bits/stdc++.h>
//#include <vector>
using namespace std;

int main(){
	int m,n;
	cout<<"give number of rows and columns respectively:";
	
	cin>>m>>n;
	vector < vector<int> > v(m, vector<int> (n));
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>v[i][j];
		}
	}
	int max_ele=v[0][0];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			max_ele=(v[i][j]>max_ele)? v[i][j]:max_ele;
		}
	}
	
	cout<<max_ele;
	return 0;
}
