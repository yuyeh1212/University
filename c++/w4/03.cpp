/*array排序由小到大*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int i,j,k,t;
	int arr[20]={0};
	for(i=0;i<20;i++){
		arr[i]=(rand()%100);
		printf("%2d ",arr[i]);
	}
	printf("\n");
	for(i=0;i<20;i++){
		for(j=i+1,k=i;j<20;j++){
			if(arr[j]<arr[k])
				k = j;
		}
		t = arr[k];
		arr[k] = arr[i];
		arr[i] = t;
		for(k=0;k<20;k++){
			printf("%2d ",arr[k]);
		}
		printf("\n");
	}
}
