/*九九乘法表*/ 

#include<stdio.h>
#include<stdlib.h>

int y=1;
int x=1;
int main(){
	while(x<=9){
		printf("%d*%d=%2d\t",x,y,x*y);
		y<9 ? y++:(y=1,x++,printf("\n"));
	}
	return 0;
} 
