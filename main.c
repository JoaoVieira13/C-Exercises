#include <stdio.h>

int ex01(){

    int num1, num2;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The first number is greater than the second number.");
    } else if (num1 < num2) {
        printf("The second number is greater than the second number.");
    } else {
        printf("The first number is equal to the second number.");
    }

}

int ex02(){

   //introduzir três numeros e escolher o menor

    int num1, num2, num3;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    printf("Enter the third number:");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3) {
        printf("The first number is the smallest.");
    } else if (num2 < num1 && num2 < num3) {
        printf("The second number is the smallest.");
    } else if (num3 < num1 && num3 < num2) {
        printf("The third number is the smallest.");
    } else {
        printf("The numbers are equal.");
    }

}

int ex1(){
        int num1, num2;
        char s;

        do{

        printf("Enter the first number:");
        scanf("%d", &num1);

        printf("Enter the second number:");
        scanf("%d", &num2);

        printf("Choose the operation:");

        char op;
        scanf(" %c", &op);

        switch (op) {
            case '+':
                printf("%d + %d = %d", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%d - %d = %d", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%d x %d = %d", num1, num2, num1 * num2);
                break;
            case '/':
                printf("%d / %d = %d", num1, num2, num1 / num2);
                break;
            default:
                printf("%d + %d = %d", num1, num2, num1 + num2);
                break;
            }
            printf("\n Do you want to continue? (y/n)");
            scanf(" %c", &s);
        } while(s== 'y');
}

int ex2(){

    int op1;

    do{
    printf("Enter a menu option:");

        scanf("%d", &op1);
        switch (op1) {
            case 1:
                printf("Create \n");
                break;
            case 2:
                printf("Update \n");
                break;
            case 3:
                printf("Delete \n");
                break;
            case 4:
                printf("Leave \n");
                break;
            default:
                printf("Invalid option.\n");
                break;
        }
    } while (op1 != 4);
}

//somar numeros inteiros





int ex04(){

    int num, sum = 0, avg = 0;

    do{
        printf("Insert a number:");
        scanf("%d", &num);

        sum += num;

        if (num != 0) {
            avg++;
        }

    } while (num != 0);

    printf("The sum is %d and the average is %d", sum, sum/avg);
}

    int f4e1(){
    float price = 0, total = 0;

    for (int i = 0; i < 10; i++){
        printf("Insert the price of the product:");
        scanf("%f", &price);
        total += price;

        printf("The total is %4.2f", total);
    }
}

int ex5(){
    int num;

    printf("Insert a number:");
    scanf("%d", &num);

    if (num < 1){
        printf("Invalid number.\n");
        printf("Insert a number:");
        scanf("%d", &num);
    }

    for (int i = 1; i < num; i+=2){
        printf("%d \n", i);
    }
}

int ex6(){
    int num, count = 0;

    printf("Insert a number:");
    scanf("%d", &num);

    int matrix[4][5];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            printf("Insert a number:");
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (matrix[i][j] == num){
                count++;
            }
        }
    }

    printf("The number %d appears %d times in the matrix.", num, count);
}

int ex3(){
    int num, insert;

    printf("Player 1, insert a number:");
    scanf("%d", &num);

    if (num < 0 || num > 100){
        printf("Invalid number.\n");
        printf("Player 1, insert a number:");
        scanf("%d", &num);
    }

    printf("Player 2, guess the number:");
    scanf("%d", &insert);

    if(insert == num){
        printf("You guessed the number!");
    } else {
        while (insert != num){
            if (insert < num){
                printf("The number is higher.\n");
                printf("Player 2, guess the number:");
                scanf("%d", &insert);
            } else if (insert > num){
                printf("The number is lower.\n");
                printf("Player 2, guess the number:");
                scanf("%d", &insert);
            }
        }
        printf("You guessed the number!");
    }

}

int main() {
//    ex01();
//    ex02();
//    ex1();
//    ex2();
//    ex04();
//    f4e1();
//    ex5();
//    ex6();
    ex3();
}
