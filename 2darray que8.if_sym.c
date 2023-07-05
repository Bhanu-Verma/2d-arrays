#include <stdio.h>


int if_sym(int *ptr, int n){
	int i=0, j=0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(*(ptr+i*n+j)!=*(ptr+j*n+i)){
				return 0;
			}
		}
	}
	
	return 1;
		
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],i,j;
	for( i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int l=if_sym(a,n);
	printf("%d",l);
	return 0;
}
