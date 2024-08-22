#include<stdio.h>

/*

	1 2 3
	4 5 6
	7 8 9
	
	0,0 	0,1		0,2
	1,0 	1,1		1,2
	2,0 	2,1		2,2	
	
	0,2
	1,1
	2,0

*/

void main() {
	
	int r,c;
	
	printf("Enter number of row\t: ");
	scanf("%d",&r);
	printf("Enter number of column\t: ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Matrix:\n");
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Cross Diagonal Matrix:\n");
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			if(i==j || i+j==r-1) {				
				printf("%d ",a[i][j]);
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	
}
