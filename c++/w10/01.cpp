/*分別輸入2個sort，再分別拉入sort3比大小*/ 

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
	tNumList *list2;
	tNumList *list3;
	int i;
	list1=(tNumList*)malloc(sizeof(tNumList));
	list2=(tNumList*)malloc(sizeof(tNumList));
	list3=(tNumList*)malloc(sizeof(tNumList));
	printf("please enter how many num in list1:");
	scanf("%d",&list1->counts);
	list1->pList=(int*)malloc(sizeof(int)*(list1->counts));
	for(i=0;i<list1->counts;i++){
		scanf("%d",&(list1->pList[i]));
	}
	printf("please enter how many num in list2:");
	scanf("%d",&list2->counts);
	list2->pList=(int*)malloc(sizeof(int)*(list2->counts));
	for(i=0;i<list2->counts;i++){
		scanf("%d",&(list2->pList[i]));
	}
	list3->counts=(list1->counts)+(list2->counts);
	list3->pList=(int*)malloc(sizeof(int)*(list3->counts));
	for(i=0;i<list3->counts;i++){
		if(i<list1->counts){
			(list3->pList[i])=(list1->pList[i]);
		}else{
			(list3->pList[i])=(list2->pList[i-(list1->counts)]);
		}
	}
	sort(list3);
	for(i=0;i<list3->counts;i++){
		printf("%d",list3->pList[i]);
	}
}
