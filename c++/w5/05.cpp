/*�x�}�ۭ�*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){	
	int i,j,k,w,x,y,z;
	printf("�п�J�x�}A����C��(�H�ťն��j�}):");
	scanf("%d %d",&w,&x);
	printf("�п�J�x�}B����C��(�H�ťն��j�}):");
	scanf("%d %d",&y,&z);
	if(x != y){
		printf("Error");
	}else{
		int A[w][x]={0};
		int B[y][z]={0};
		int C[w][z]={0};
		printf("��J�x�}A����:\n");
		for(i=0;i<w;i++){
        	for(j=0;j<x;j++){
            	scanf("%d",&A[i][j]);
        	}
        }
        printf("��J�x�}B����:\n");
		for(i=0;i<y;i++){
        	for(j=0;j<z;j++){
            	scanf("%d",&B[i][j]);
        	}
        }
        printf("A�x�}:\n");
        for(i=0;i<w;i++){
        	for(j=0;j<x;j++){
            	printf("%d ",A[i][j]);
        	}
        	printf("\n");
        }
        printf("B�x�}:\n");
        for(i=0;i<y;i++){
        	for(j=0;j<z;j++){
            	printf("%d ",B[i][j]);
        	}
        	printf("\n");
        }
        printf("C�x�}(���G):\n");
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
