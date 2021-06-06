/*亂數擲2顆骰子10000次計算點數出現次數*/ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int counter[11]={0};
    int i;
    
    for(i=0;i<=10000;i++){
    	int dice1 = rand()%6+1;
    	int dice2 = rand()%6+1;
    	int sum = dice1 + dice2;
    	counter[sum-2]++;
	}
	for(i=2;i<=12;i++){
		printf("%d:%2d\n",i,counter[i-2]);
	}
	return 0;
}
