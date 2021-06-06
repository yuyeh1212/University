/*右上下直角三角形結合*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
		   printf(" ");
		}
		for(k=1;k<=n-i+1;k++){
		   printf("*");
		}
		printf("\n");
	}
	for(i=2;i<=n;i++){
		for(j=1;j<=n-i;j++){
		   printf(" ");
		}
		for(k=1;k<=i;k++){
		   printf("*");
		}
		printf("\n");
	}
	return 0;		
} 
