/*���W�U�����T���ε��X*/ 

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
		   printf("*");
		}
		printf("\n");
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
		   printf("*");
		}
		printf("\n");
	}
	return 0;		
} 
