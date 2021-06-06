/*example 1*/ 
 
#include<stdio.h>
#include<stdlib.h>

int sum(int x,int y);
int main(void){
	printf("%d",sum(10,20));
}
int sum(int x,int y){
	return x+y;
}
