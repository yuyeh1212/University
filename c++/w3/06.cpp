/*同04檔案題目，但不用任何迴圈(方法2)*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

static int recursive_die[11];
void print_die_number(int);

int main(int argc, char **argv){
    if (argc == 10002) {
        print_die_number(0);
        return 0;
    } else if (argc == 1) {
        srand(time(NULL));
        main(argc+1, NULL);
    } else {
        recursive_die[rand()%6+1 + rand()%6+1 - 2]++;
        main(argc+1, NULL);
    }
    return 0;
}


void print_die_number(int time){
    if (time == 11)
        return ;
    else {
        printf("Die number %d = Total %d\n", time + 2, recursive_die[time]);
        time++;
        print_die_number(time);
    }
}
