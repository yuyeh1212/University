/*example 1*/ 

#include <stdio.h>
#include <stdlib.h>

struct person{
	int age;
	float weight;
};

int main(){
	struct person *presonptr,person1;
	presonptr = &person1;
	printf("enter an age:");
	scanf("%d",&person1.age); /*or &((*personptr).age)*/
	printf("the age is %d",person1.age); /*or (*personptr).age)*/
}
