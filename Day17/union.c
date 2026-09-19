#include <stdio.h>

// Define union
union student {
    int Rno;
    float Height;
    float AvgMarks;
};

int main() {
    union student s;

    // Assign and print Roll Number
    s.Rno = 101;
    printf("Roll Number: %d\n", s.Rno);

    // Assign and print Height
    s.Height = 172.5;
    printf("Height: %.2f\n", s.Height);

    // Assign and print Average Marks
    s.AvgMarks = 89.4;
    printf("Average Marks: %.2f\n", s.AvgMarks);

    // Notice what happens when we print all again
    printf("\nAfter assigning AvgMarks:\n");
    printf("Roll Number: %d\n", s.Rno);
    printf("Height: %.2f\n", s.Height);
    printf("Average Marks: %.2f\n", s.AvgMarks);

    return 0;
}
