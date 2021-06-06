/*example 3*/

#include <stdio.h>
#include <stdlib.h>

int calculate(int input){
	return input*input;
}

int main(void){
	int a=5,result;
	result=calculate(a);
	printf("%d",result);
}
