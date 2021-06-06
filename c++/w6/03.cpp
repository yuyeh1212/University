/*example 4*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[5]={1,2,3,4,5};
	int *ptr;
	ptr = array;
	printf("%d %d\n",ptr[3],ptr[4]);
	printf("%d %d\n",*ptr,ptr[0]);
	printf("%d %d",*(ptr+1),ptr[1]);
}
