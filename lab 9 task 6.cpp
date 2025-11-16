#include <stdio.h>


void inputAttendance(int attendance[4][5]) {
    int student, cls;

    printf("Enter attendance for 4 students over 5 classes (1 = present, 0 = absent):\n");

    for (student = 0; student < 4; student++) {
        printf("Student %d:\n", student + 1);
        for (cls = 0; cls < 5; cls++) {
            printf("  Class %d: ", cls + 1);
            scanf("%d", &attendance[student][cls]);
        }
    }
}


void calculateAttendance(int attendance[4][5]) {
    int student, cls;
    int totalClasses = 5;

    for (student = 0; student < 4; student++) {
        int presentCount = 0;

        for (cls = 0; cls < 5; cls++) {
            presentCount += attendance[student][cls];  
        }

        float percentage = (presentCount * 100.0) / totalClasses;
        printf("\nStudent %d attendance: %.2f%%", student + 1, percentage);

        if (percentage < 75.0) {
            printf(" --> Warning: Attendance below 75%%!");
        }
        printf("\n");
    }
}

int main() {
    int attendance[4][5];

    inputAttendance(attendance);
    calculateAttendance(attendance);

    return 0;
}
