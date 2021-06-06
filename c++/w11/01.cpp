#include <stdio.h>
#include <stdlib.h>

typedef struct stuInfo{
	int stu_id;
	struct stuInfo *next;
}tstu;

typedef struct stulist{
	int count;
	tstu *head;
	tstu *tail;
}tstulist;

void add_student(tstulist *mag,int ID){
	tstu *stu;
	stu=(tstu *)malloc(sizeof(tstu));
	stu->stu_id=ID;
	stu->next=NULL;
	if(mag->count>0){
		mag->head->next=stu;
	}else{
		mag->tail=stu;
	}
	mag->head=stu;
	mag->count++;
}

int main(){
	tstulist *mag;
	mag=(tstulist *)malloc(sizeof(tstulist));
	mag->count=0;
	mag->head=NULL;
	mag->tail=NULL;
	
	add_student(mag,10);
	add_student(mag,20);
	add_student(mag,30);
	add_student(mag,60);
	
	printf("%d ",mag->head->stu_id);
	printf("%d",mag->tail->stu_id);
}
