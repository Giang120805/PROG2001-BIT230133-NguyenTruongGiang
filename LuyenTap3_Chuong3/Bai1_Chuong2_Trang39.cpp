#include <time.h>
#include <stdio.h>

int main () {
    time_t current_time;
    time(&current_time);
    printf("Current time: %s",ctime(&current_time));

    return 0;
}