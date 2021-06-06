/*02-2­×§ïmain¸Ìªºarr*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 20

void printarray(int x[]){
	for(int i=0;i<N;i++){
		printf("%2d ",x[i]);
	}
}

void sort(int *score){
	int i,j,k=0,t;
	for(i=0;i<N;i++){
		for(j=i+1,k=i;j<N;j++){
			if(*(score+j)<*(score+k))
				k = j;
		}
		t = *(score+k);
		*(score+k) = *(score+i);
		*(score+i) = t;
	}
}

int main(){
	srand(time(NULL));
	int *arr=(int*)malloc(sizeof(int)*N);
	int i;
	for(i=0;i<N;i++){
		arr[i]=(rand()%100);
	}
	printarray(arr);
	printf("\n");
	sort(arr);
	printarray(arr);
}
