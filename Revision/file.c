#include <stdio.h>
#include <conio.h>

struct Student {
    int admission_no;
    char name[50];
    int semester;
    float marks;
};

int main() {
    struct Student students[5];
    FILE *file;
    int i;

    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Admission Number: ");
        scanf("%d", &students[i].admission_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Space before %[^\n] to handle names with spaces
        printf("Semester: ");
        scanf("%d", &students[i].semester);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Open file in write mode
    file = fopen("student_details.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit the program if file can't be opened
    }

    // Write student details to the file
    fprintf(file, "Admission No\tName\t\tSemester\tMarks\n");
    fprintf(file, "-----------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        fprintf(file, "%d\t\t%s\t\t%d\t\t%.2f\n",
                students[i].admission_no,
                students[i].name,
                students[i].semester,
                students[i].marks);
    }

    // Close the file
    fclose(file);

    // Display the details back to the user
    printf("\nDetails of students entered:\n");
    printf("Admission No\tName\t\tSemester\tMarks\n");
    printf("-----------------------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n",
               students[i].admission_no,
               students[i].name,
               students[i].semester,
               students[i].marks);
    }

    printf("\nStudent details have been saved to 'student_details.txt'.\n");
    return 0;
}