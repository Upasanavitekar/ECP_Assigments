#include <stdio.h>


struct Student {
    unsigned int roll_number : 10; 
    unsigned int standard : 4;    
    unsigned int age : 5;        
    unsigned int gender : 1;  
    char name[100];                
};


void input_students_info(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%u", &students[i].roll_number);
        
        printf("Enter Standard (1 to 12): ");
        scanf("%u", &students[i].standard);
        
        printf("Enter Age (0 to 31): ");
        scanf("%u", &students[i].age);
        
        printf("Enter Gender (0 for male, 1 for female): ");
        scanf("%u", &students[i].gender);
        

        while (getchar() != '\n');

        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        students[i].name[strcspn(students[i].name, "\n")] = '\0';
    }
}


void print_students_info(const struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d Information:\n", i + 1);
        printf("Roll Number: %u\n", students[i].roll_number);
        printf("Standard: %u\n", students[i].standard);
        printf("Age: %u\n", students[i].age);
        printf("Gender: %s\n", students[i].gender ? "Female" : "Male");
        printf("Name: %s\n", students[i].name);
    }
}

int main() {
    int num_students = 3; 


    struct Student students[num_students];


    input_students_info(students, num_students);


    print_students_info(students, num_students);

    return 0;
}

