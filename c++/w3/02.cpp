/*輸入三個數比大小*/

#include<stdio.h>
#include<stdlib.h>

int maximum(int x,int y,int z);
int main(void){
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	printf("%d",maximum(x,y,z));
}
int maximum(int x,int y,int z){
	if(x>y && x>z){
	return x;
	}else if(y>z){
		return y;
	}else{
		return z;
	}
}
