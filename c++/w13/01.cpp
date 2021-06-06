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

void add_student_to_hpso(tstulist *mag,int ID,int pso){
	tstu *stu;
	tstu *p;
	tstu *q;
	stu=(tstu *)malloc(sizeof(tstu));
	stu->stu_id=ID;
	stu->next=NULL;
	if(mag->count==0){
		mag->head=stu;
		mag->tail=stu;
	}else if(pso==1 || pso==0){
		stu->next=mag->head;
		mag->head=stu;
	}else if(pso>mag->count){
		mag->tail->next=stu;
		mag->tail=stu;
	}else{
		p=mag->head;
		for(int i=0;i<pso-2;i++){
			p=p->next;
		}
		q=p->next;
		p->next=stu;
		stu->next=q;
	}
	mag->count++;
}

void add_student_to_tpso(tstulist *mag,int ID,int pso){
	tstu *stu;
	tstu *p;
	tstu *q;
	stu=(tstu *)malloc(sizeof(tstu));
	stu->stu_id=ID;
	stu->next=NULL;
	if(mag->count==0){
		mag->head=stu;
		mag->tail=stu;
	}else if(pso==1 || pso==0){
		mag->tail->next=stu;
		mag->tail=stu;
	}else if(pso>mag->count){
		stu->next=mag->head;
		mag->head=stu;
	}else{
		p=mag->head;
		for(int i=0;i<(mag->count)-pso;i++){
			p=p->next;
		}
		q=p->next;
		p->next=stu;
		stu->next=q;
	}
	mag->count++;
}

void print_student_list(tstulist *mag){
	tstu *p1;
	p1=mag->head;
	for(int i=0;i<mag->count;i++){
		printf("%d ",p1->stu_id);
		p1=p1->next;
	}
}

int main(){
	int input;
	int pso;
	int location;
	tstulist *mag;
	mag=(tstulist *)malloc(sizeof(tstulist));
	mag->count=0;
	mag->head=NULL;
	mag->tail=NULL;
	
	while(pso !=-1){
		printf("choose where to add:");
		scanf("%d",&pso);
		printf("choose where to add (0)head (1)tail:");
		scanf("%d",&location);
		printf("user_input:");
		scanf("%d",&input);
		if(location == 0){
			add_student_to_hpso(mag,input,pso);
		}else{
			add_student_to_tpso(mag,input,pso);
		}
		
		print_student_list(mag);
		printf("\n");
	}
}
