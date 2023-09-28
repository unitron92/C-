#include <iostream>
#include <string.h>

int main() {
    // Define a structure representing a student's information
    struct Student {
        int student_id;
        char name[50];
        float gpa;
    }; 

    // Create two student objects
     Student student1, student2;
    
    // Initialize student1's information
    student1.student_id = 101;
    strcpy(student1.name, "John Doe");
    student1.gpa = 3.75;

    // Use memcpy to copy the data from student1 to student2
    memcpy(&student2, &student1, sizeof(struct Student));

    // Display the copied information
    printf("Copied Student Information:\n");
    printf("Student ID: %d\n", student2.student_id);
    printf("Name: %s\n", student2.name);
    printf("GPA: %.2f\n", student2.gpa);

    return 0;
}
