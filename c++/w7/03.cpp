#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SWAP(int *ptr ,int *ptr2){
    int temp;
    temp=*ptr;
    *ptr=*ptr2;
    *ptr2=temp;
    }
void show(int x,int sn,int *p){
	int i,j;
	for(i=0;i<sn;i++){
    	for(j=0;j<sn;j++){
    		printf("%2d ",*(p+x));
    		x++;
		}
	printf("\n");	
	}printf("\n");
}

int main(int argc,char *argv[]){
	int *temp;
	int *ptr;
	int n=atoi(argv[1]);
	int sn=sqrt(n);
	int nn=2*sn;
	int x,i,j,w,a;	
	temp=(int*)malloc(sizeof(int)*n);
	ptr=temp;	
	for(int i=0;i<n;i++){
		a=strtol(argv[2+i],NULL,10);
		*temp=a;
		temp=temp+1;	
	}
	temp=ptr;
		
	x=0;
	show(x,sn,temp);
		
	for(i=0;i<sn;i++){
	    SWAP(temp+i,temp+nn+i);	
    }
    x=0;
    show(x,sn,temp);
		
	for(i=0;i<sn;i++){
	    w=i*sn;
	    SWAP(temp+w,temp+2+w);
    }
    x=0;
    show(x,sn,temp);    
}
