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

void add_student_to_head(tstulist *mag,int ID){
	tstu *stu;
	stu=(tstu *)malloc(sizeof(tstu));
	stu->stu_id=ID;
	stu->next=NULL;
	if(mag->count>0){
		stu->next=mag->head;
	}else{
		mag->tail=stu;
	}
	mag->head=stu;
	mag->count++;
}

void add_student_to_tail(tstulist *mag,int ID){
	tstu *stu;
	stu=(tstu *)malloc(sizeof(tstu));
	stu->stu_id=ID;
	stu->next=NULL;
	if(mag->count>0){
		mag->tail->next=stu;
	}else{
		mag->head=stu;
	}
	mag->tail=stu;
	mag->count++;
}

void print_student_list(tstulist *mag){
	tstu *p1;
	tstu *p2;
	p1=mag->head;
	p2=mag->head;
	for(int i=0;i<mag->count;i++){
		printf("%d ",p1->stu_id);
		p1=p1->next;
	}
	printf("\n");
	while(p2 != NULL){
		printf("%d ",p2->stu_id);
		p2=p2->next;
	}
}

int main(){
	int input;
	int location;
	tstulist *mag;
	mag=(tstulist *)malloc(sizeof(tstulist));
	mag->count=0;
	mag->head=NULL;
	mag->tail=NULL;
	printf("user_input:");
	scanf("%d",&input);
	
	while(input != -1){
		printf("choose where to add (1)head (2)tail:");
		scanf("%d",&location);
		if(location == 1){
			add_student_to_head(mag,input);
		}else{
			add_student_to_tail(mag,input);
		}
		print_student_list(mag);
		printf("\n");
		printf("user_input:");
		scanf("%d",&input);
	}
}
