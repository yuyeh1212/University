/*°O¾ĞÅé¦¾¬V*/ 

#include<stdio.h>
#include<stdlib.h>
#define N 4

int main(void){
	int *array;
	array=(int *)malloc(sizeof(int)*N);
	int *arrayy;
	arrayy=(int *)malloc(sizeof(int)*N);
	int *p;
	int i;
	
	printf("Array_ref:%p, Arrayy_ref:%p, p_ref:%p, i_ref:%p\n",array,arrayy,&p,&i);
	
	p=array;
	array[0]=1;
	p[0]=2;
	*(p+1)=3;
	p++;
	*(p+2)=4;
	
	p=array;
	for(i=0;i<N;i++){
		printf("array[%d]:%d, *(p+%d):%d\n",i,array[i],i,*(p+i));
	}
	
	p=arrayy;
	*(p+4)=300;
	*(p+5)=400;
	*(p+6)=500;
	*(p+7)=600;
	
	for(i=0;i<N;i++){
		printf("array[%d]:%d\n",i,array[i]);
	}
}
