/*同04檔案題目，但不用任何迴圈(方法1)*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void throw_account(int die);
void print_die_number(int index);
static int die[11];

int main(int argc, char **argv){
    srand(time(NULL));
    throw_account(0);
    print_die_number(0);
    return 0;
}


void throw_account(int die_number){
    if (die_number == 10000)
        return ;
    else {
        die[rand()%6+1 + rand()%6+1 - 2]++;
        throw_account(die_number + 1);
    }
}

void print_die_number(int index){
    if (index == 11)
        return ;
    else {
        printf("Die number %d = Total %d\n", index + 2, die[index]);
        print_die_number(index + 1);
    }
}
