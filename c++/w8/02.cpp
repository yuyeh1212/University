/*輸入數字排大小*/ 

#include <stdio.h>
#include <stdlib.h>

typedef struct num_list{
	int counts;
	int *pList;
}tNumList;

void sort(tNumList *list1){
	int i,j,temp;
	for(i=0;i<list1->counts;i++){
		for (j=0;j<i;j++){
      		if (list1->pList[j] > list1->pList[i]) {
        		temp = list1->pList[j];
        		list1->pList[j]=list1->pList[i];
        		list1->pList[i] = temp;
      		}
    	}
	}
}

int main(void){
	tNumList *list1;
	int i;
	list1=(tNumList*)malloc(sizeof(tNumList));
	printf("please enter how many num in list:");
	scanf("%d",&list1->counts);
	list1->pList=(int*)malloc(sizeof(int)*(list1->counts));
	for(i=0;i<list1->counts;i++){
		scanf("%d",&(list1->pList[i]));
	}
	for(i=0;i<list1->counts;i++){
		printf("%d",list1->pList[i]);
	}
	printf("\n");
	sort(list1);
	for(i=0;i<list1->counts;i++){
		printf("%d",list1->pList[i]);
	}
}
