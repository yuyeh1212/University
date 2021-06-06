/*array亂數20個後，輸入數字找尋數字是否在陣列裡*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int i,num;
	int arr[20]={0};
	int sn = 0;
	for(i=0;i<20;i++){
		arr[i]=(rand()%100);
		printf("[%d]%d\n",i,arr[i]);
	}
	while(1){
		sn = 0;
		printf("please type a num:");
		scanf("%d",&num);
		for(i=0;i<20;i++){
			if(arr[i]==num){
				printf("%d is [%d]\n",num,i);
				sn = 1;
			}
		}
		if(sn==0){
			printf("not found\n");
		}
	}
}
