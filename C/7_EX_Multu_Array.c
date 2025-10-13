#include <stdio.h>
#include <stdlib.h>
int main()
{
int r,c,n,m;
printf("Enter the rows and columns of 1st matrix:\n");
printf("Enter the number of rows: ");	
	scanf("%d",&r);
printf("Enter the number of columns: ");	
	scanf("%d",&c);
	int arr[r][c],arra[n][m],i,j;
	printf("Enter the elements of 1st matrix:\n ");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	printf("Enter (%d,%d)\n",i+1,j+1); 
	scanf("%d",&arr[i][j]);	
	}
}
printf("Enter the rows and columns of 2nd matrix:\n");
printf("Enter the number of rows: ");	
	scanf("%d",&n);
printf("Enter the number of columns: ");	
	scanf("%d",&m);
printf("Enter the elements of 2nd matrix:\n ");
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	printf("Enter (%d,%d)\n",i+1,j+1);
	scanf("%d",&arra[i][j]);	
	}
}
int mul[r][m],k;
	for(i=0;i<c;i++){
	for(j=0;j<n;j++){
	mul[i][j]=0;
	for(k=0;k<c;k++){
	mul[i][j]+=arr[i][k]*arra[k][j];	
	}
}
}
printf("The Multiplication of the matrix is::\n");
for(i=0;i<r;i++){
	for(j=0;j<m;j++){
		printf("%d",mul[i][j]);
	}
	printf("\n");
}
return 0;
}