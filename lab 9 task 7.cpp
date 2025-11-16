#include <stdio.h>


void inputRuns(int *runs, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter runs for Player %d: ", i + 1);
        scanf("%d", runs + i); 
    }
}


void totalAndAverage(int *runs, int n, int *total, float *average) {
    *total = 0;

    for (int i = 0; i < n; i++) {
        *total += *(runs + i);
    }

    *average = (float)(*total) / n;
}


void highestScorer(int *runs, int n, int *highest, int *index) {
    *highest = *runs; 
    *index = 0;

    for (int i = 1; i < n; i++) {
        if (*(runs + i) > *highest) {
            *highest = *(runs + i);
            *index = i;
        }
    }
}

int main() {
    int runs[11];
    int total;
    float average;
    int highest;
    int highestIndex;

    inputRuns(runs, 11);                       
    totalAndAverage(runs, 11, &total, &average); 
    highestScorer(runs, 11, &highest, &highestIndex); 

    printf("\nTotal Score: %d\n", total);
    printf("Average Score: %.2f\n", average);
    printf("Highest Scorer: Player %d with %d runs\n", highestIndex + 1, highest);

    return 0;
}
