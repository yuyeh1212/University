/*example 2*/

#include <stdio.h>
#include <stdlib.h>

void calculate(int *ptr){
	*ptr = (*ptr)*(*ptr);
}

int main(void){
	int a=5;
	calculate(&a);
	printf("%d",a);
}
