/*矩陣相乘*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){	
	int i,j,k,w,x,y,z;
	printf("請輸入矩陣A的行列數(以空白間隔開):");
	scanf("%d %d",&w,&x);
	printf("請輸入矩陣B的行列數(以空白間隔開):");
	scanf("%d %d",&y,&z);
	if(x != y){
		printf("Error");
	}else{
		int A[w][x]={0};
		int B[y][z]={0};
		int C[w][z]={0};
		printf("輸入矩陣A元素:\n");
		for(i=0;i<w;i++){
        	for(j=0;j<x;j++){
            	scanf("%d",&A[i][j]);
        	}
        }
        printf("輸入矩陣B元素:\n");
		for(i=0;i<y;i++){
        	for(j=0;j<z;j++){
            	scanf("%d",&B[i][j]);
        	}
        }
        printf("A矩陣:\n");
        for(i=0;i<w;i++){
        	for(j=0;j<x;j++){
            	printf("%d ",A[i][j]);
        	}
        	printf("\n");
        }
        printf("B矩陣:\n");
        for(i=0;i<y;i++){
        	for(j=0;j<z;j++){
            	printf("%d ",B[i][j]);
        	}
        	printf("\n");
        }
        printf("C矩陣(結果):\n");
        for(i=0;i<w;i++){
        	for(j=0;j<z;j++){
        		for(k=0;k<x;k++){
        			C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
				printf("%d ",C[i][j]);
			}
			printf("\n");
		}
	}
 }
