/*W4-03¥Î¨ç¼Æ¼g*/ 

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

void sort(int arr[]){
	int i,j,k=0,t;
	for(i=0;i<N;i++){
		for(j=i+1,k=i;j<N;j++){
			if(arr[j]<arr[k])
				k = j;
		}
		t = arr[k];
		arr[k] = arr[i];
		arr[i] = t;
	}
}

int main(){
	srand(time(NULL));
	int arr[N]={0};
	int i;
	for(i=0;i<N;i++){
		arr[i]=(rand()%100);
	}
	printarray(arr);
	printf("\n");
	sort(arr);
	printarray(arr);
}
