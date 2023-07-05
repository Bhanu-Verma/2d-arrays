		/*finding largest element*/

#include <stdio.h>
#include <limits.h>
int main(){
	int row, column;
	printf("give the number of rows and columns respectively:\n");
	scanf("%d%d",&row,&column);
	int i,j;
	int arr[row][column];
	int max_ele=INT_MIN;
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			scanf("%d",&arr[i][j]);
			max_ele=(arr[i][j]>max_ele)? arr[i][j]:max_ele;
		}
	}
	
	printf("%d",max_ele);


	return 0;
}
