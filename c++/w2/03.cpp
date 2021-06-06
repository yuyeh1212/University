/*01+02µ²¦X*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
		   printf("*");
		}
		for(k=1;k<i;k++){
			printf(" ");
		}
		for(k=1;k<i;k++){
			printf(" ");
		}
		for(l=1;l<=n-i+1;l++){
			printf("*");
		}
		printf("\n");
	}
	for(i=2;i<=n;i++){
		for(j=1;j<=i;j++){
		   printf("*");
		}
		for(k=1;k<=n-i;k++){
		   printf(" ");
		}
		for(k=1;k<=n-i;k++){
		   printf(" ");
		}
		for(l=1;l<=i;l++){
		   printf("*");
		}
		printf("\n");
	}
	return 0;		
} 
