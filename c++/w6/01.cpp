/*example 1*/ 

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=3;
	int *ptr;
	ptr=&a;
	printf("%d\n",a);
	printf("%d\n",*ptr);
	printf("%p\n",&a);
	printf("%p\n",ptr);
}
