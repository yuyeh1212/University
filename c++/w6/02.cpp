/*指標內容互換*/ 

#include <stdio.h>
#include <stdlib.h>

void calculate(int *x,int *y,int*z){
	int w=0;
	w=*x;
	*x=*y;
	*y=*z;
	*z=w;	
}

int main(void){
	int a1=1,a2=2,a3=3;
	printf("befor-->");
	printf("a:%d b:%d c:%d\n",a1,a2,a3);
	calculate(&a1,&a2,&a3);
	printf("after-->");
	printf("a:%d b:%d c:%d\n",a1,a2,a3);
}
