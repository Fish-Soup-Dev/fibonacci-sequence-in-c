#include <time.h>
#include <stdio.h>
#include <stdint.h>
#define MAX 40

int main () {

    clock_t start = clock();
    printf("Starting...\n");

    FILE *fp;
    fp = fopen("Fibonacci_Sequence.txt", "w");

    int x = 0;
    int y = 1;
    register int c = 0;
    int temp = 0;

    for (register int i = 0; i <= MAX; i++) {

        fprintf(fp, "%i\n", x);

        temp = x + y;
        x = y;
        y = temp;
        c++;

    }

    fclose(fp);

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\033[0;94mIt took \033[0;31m%.3f\033[0;94m seconds.\nFound \033[0;32m%i\033[0;94m Fibonacci Sequence\033[0m", time_spent, c);

    return 0;
}