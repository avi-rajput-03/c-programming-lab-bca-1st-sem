
/*
 * BCA 1st Semester Project
 * Title: C Programming Lab - Fundamentals & Mini Systems
 * Student: Avi
 * Language: C
 * Description: Menu-driven collection of basic C programs
 */

#include <stdio.h>
#include <stdlib.h>

// Module 1: Addition using function (your file666...)
void add() {
    int a,b,c;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    c = a + b;
    printf("Sum = %d\n",c);
}

// Module 2: Odd numbers 1 to 20 (your file893...)
void oddNumbers() {
    int i, n = 20;
    printf("\nOdd numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Module 3 & 4: goto demonstration (your file589 and file256)
void gotoDemo() {
    printf("\n--- GOTO Demo 1 ---\n");
    goto print_message;
    printf("This line will be skipped\n");
    print_message:
    printf("Hello World (jumped via goto)\n");

    printf("\n--- GOTO Demo 2 ---\n");
    printf("Start of program\n");
    goto end;
    printf("This will also be skipped\n");
    end:
    printf("End of program (jumped via goto)\n");
}

// Module 5: ATM PIN System (your 26.c)
void atmPinSystem() {
    int pin = 1234;
    int enteredPin;
    int attempts = 0;
    int balance = 10000;

    printf("\n===== ATM PIN SYSTEM =====\n");
    while(attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);
        if(enteredPin == pin) {
            printf("PIN Correct! Access Granted.\n");
            printf("Your Balance is: Rs. %d\n", balance);
            // Simple ATM Menu
            int choice, amount;
            printf("\n1. Withdraw\n2. Check Balance\n3. Exit\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            if(choice == 1) {
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful! Remaining Balance: %d\n", balance);
                } else {
                    printf("Insufficient Balance!\n");
                }
            }
            return;
        } else {
            attempts++;
            printf("Wrong PIN! Attempts left: %d\n", 3-attempts);
        }
    }
    printf("Card Blocked! Too many wrong attempts.\n");
}

// Module 6: Loop Examples - for, while, do-while (your 25.c)
void loopExamples() {
    int i, n;
    printf("\n===== LOOP EXAMPLES =====\n");
    
    // For loop
    printf("\n1. FOR LOOP - Table of a number\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    // While loop
    printf("\n2. WHILE LOOP - Sum of first n numbers\n");
    printf("Enter n: ");
    scanf("%d", &n);
    i = 1;
    int sum = 0;
    while(i <= n) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);

    // Do-While loop
    printf("\n3. DO-WHILE LOOP - Print 1 to n\n");
    printf("Enter n: ");
    scanf("%d", &n);
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= n);
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n\n========================================\n");
        printf("  BCA 1st SEM - C PROGRAMMING PROJECT\n");
        printf("========================================\n");
        printf("1. Addition using Function\n");
        printf("2. Odd Numbers (1 to 20)\n");
        printf("3. Goto Statement Demo\n");
        printf("4. ATM PIN Code System\n");
        printf("5. Loops Demo (for, while, do-while)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: add(); break;
            case 2: oddNumbers(); break;
            case 3: gotoDemo(); break;
            case 4: atmPinSystem(); break;
            case 5: loopExamples(); break;
            case 6: printf("Exiting project. Thank you!\n"); exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}
