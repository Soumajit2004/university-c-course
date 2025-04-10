#include <stdio.h>

struct Time {
    int hour;
    int minutes;
    int seconds;
};

int main() {

    struct Time t1 = {19, 30, 0};
    struct Time t2 = {7, 0, 0};

    printf("Time difference:\n%d hrs %d min %d sec\n",
         t1.hour - t2.hour,
         t1.minutes - t2.minutes, 
         t1.seconds - t2.seconds
        );


    return 0;
}