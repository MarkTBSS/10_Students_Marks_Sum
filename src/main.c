#include <stdio.h>

int marks_summation(int* marks, int number_of_students, char gender) {  
    //printf("number_of_students == : %d\n", number_of_students); 
    int sumOfAllScope = 0;
    int i;
    if (gender == 'b') {
        for (i = 0; i < number_of_students; i += 2) {
            sumOfAllScope += marks[i];
        }
    }
    if (gender == 'g') {
        for (i = 1; i < number_of_students; i += 2) {
            sumOfAllScope += marks[i];
        }
    } 
    //printf("gender ============== : %c\n", gender);
    return sumOfAllScope;
}

int main() {
    int number_of_students = 3;
    
    int notPointerMarks[] = {3, 2, 5}; // ประกาศตัวแปรเป็น Array
    int *marks = notPointerMarks; // สร้างเป็น Pointer ชื่อ marks มาชี้ค่า
    
    char gender = 'b';
    
    int sumOfAll = marks_summation(marks, number_of_students, gender);
    //int sumOfAll = marks_summation(notPointerMarks, number_of_students, gender);
    //printf("Sum of marks ======== : %d\n", sumOfAll);
    printf("%d", sumOfAll);
    return 0;
}