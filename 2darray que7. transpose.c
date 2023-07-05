		/*function in c to calculate transpose of a square matrix*/

#include <stdio.h>

void transpose(int *ptr, int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			int t;
			t=*(ptr+i*n+j);
			*(ptr+i*n+j)=*(ptr+j*n+i);
			*(ptr+j*n+i)=t;
		}
	}
	
	for( i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ",*(ptr+i*n+j));
			
		}
		printf("\n");
	}
}

int main(){
	int n;
	printf("give the size of squre matrix that you want to input:");
	scanf("%d",&n);
	int i,j;
	int arr[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	transpose(arr, n);
	
	return 0;
}
