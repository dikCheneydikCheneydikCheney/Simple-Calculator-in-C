#include<stdlib.h>
#include<stdio.h>
#include<float.h>

int main() {
   
   int choice;
   double a, b, res;
   res = -DBL_MAX;
   char ch;

    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Please enter your choice: ");

    scanf("%d", &choice);
    // implement loop at some point "while (1) {""
        switch (choice) {
            case 1:
                printf("You've selected Addition\n");
                printf("Enter two operands: ");
                scanf("%lf %lf", &a, &b);
                res = a + b;
                break;
            case 2:
                printf("You've selected Subtraction\n");
                printf("Enter two operands: ");
                scanf("%lf %lf", &a, &b);
                res = a - b;
                break;
            case 3:
                printf("You've selected Multiplication\n");
                printf("Enter two operands: ");
                scanf("%lf %lf", &a, &b);
                res = a * b;
                break;
            case 4:
                printf("You've selected Division\n");
                printf("Enter two operands: ");
                scanf("%lf %lf", &a, &b);
                res = a / b;
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please Try Again.\n");

            
        }
    
    if(res!=-DBL_MAX)
        printf("%.2lf\n", res);
    printf("Press any key to continue...\n");
    //TODO: Figure out a way to have an input like \n (which is the enter key)
    // to close the program as the output isn't readable and closes too fast
}