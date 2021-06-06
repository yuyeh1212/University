/*指標排大小*/ 

#include <stdio.h>
#include <stdlib.h>

void merge(int *a,int *b,int sizeA,int sizeB){
	int *c =(int*) malloc(sizeof(int) * (sizeA + sizeB));
	for(int i = 0; i < (sizeA+sizeB); i++){
		if(i<sizeA){
			*(c + i)=*(a + i);
		}
		else{
			*(c + i)= *(b + i-sizeA);
		}
	}
	for (int i = 0; i < (sizeA+sizeB); i++) {
		for (int j = 0; j < i; j++){
			if (*(c + j) > *(c + i)){
				int temp =*(c + j);
        		*(c + j) = *(c + i);
        		*(c + i) = temp;
			}
		}
	}	
	for(int i = 0; i < (sizeA+sizeB); i++){
		printf("%d ",*(c + i));
	}
}

int main(){
	int a[5]={4,6,7,9,12};
	int b[5]={3,8,15,19,25};
	int sizeA=sizeof(a)/sizeof(int);
	int sizeB=sizeof(b)/sizeof(int);
    merge(a,b,sizeA,sizeB);
		
} 
