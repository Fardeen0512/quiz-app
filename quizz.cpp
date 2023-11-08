#include <stdio.h>

int main() {
    int score = 0;
    
    printf("Welcome to the Quiz!\n");
    printf("Answer the following questions:\n\n");

    // Question 1
    printf("Question 1: What is the capital of France?\n");
    printf("A) London\nB) Berlin\nC) Paris\nD) Madrid\n");
    char answer1;
    scanf(" %c", &answer1);
    if (answer1 == 'C' || answer1 == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C) Paris\n");
    }

    // Question 2
    printf("\nQuestion 2: Which planet is known as the 'Red Planet'?\n");
    printf("A) Venus\nB) Mars\nC) Jupiter\nD) Earth\n");
    char answer2;
    scanf(" %c", &answer2);
    if (answer2 == 'B' || answer2 == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B) Mars\n");
    }

    // Question 3
    printf("\nQuestion 3: What is the largest mammal on Earth?\n");
    printf("A) Elephant\nB) Giraffe\nC) Blue Whale\nD) Lion\n");
    char answer3;
    scanf(" %c", &answer3);
    if (answer3 == 'C' || answer3 == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C) Blue Whale\n");
    }

    // Display the final score
    printf("\nYour Score: %d out of 3\n", score);

    return 0;
}

