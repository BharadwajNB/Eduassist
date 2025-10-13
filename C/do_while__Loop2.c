#include<stdio.h> 
int main(){    
	int n;  
	printf("enter a number to genarate its multpcaltion= ");
	scanf("%d",&n);
	int i=1;
	do{printf("%d * %d = %d\n",n,i,n*i);
	i++;
	}while(i<=10);
}