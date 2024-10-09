#include <stdio.h>

// Function prototypes for arithmetic operations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);

int main() {
    char choice;
    float num1, num2;
    
    do {
        // Display the menu
        printf("\n--- Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        printf("Enter your choice (1-5) or 'q' to quit: ");
        
        choice = getchar();  // Get user choice
        getchar(); // To consume the newline character

        if (choice >= '1' && choice <= '5') {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            getchar(); // To consume the newline character after scanf
            
            switch (choice) {
                case '1':
                    printf("Result: %.2f\n", add(num1, num2));
                    break;
                case '2':
                    printf("Result: %.2f\n", subtract(num1, num2));
                    break;
                case '3':
                    printf("Result: %.2f\n", multiply(num1, num2));
                    break;
                case '4':
                    if (num2 != 0) {
                        printf("Result: %.2f\n", divide(num1, num2));
                    } else {
                        printf("Error: Division by zero!\n");
                    }
                    break;
                case '5':
                    printf("Result: %d\n", modulus((int)num1, (int)num2));
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
        } else if (choice != 'q') {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 'q');

    printf("Program terminated.\n");
    return 0;
}

// Function implementations
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}


