#include <stdio.h>
void main()
{
    int std1, std2, std3, std4, std5;
    int highest, lowest;

    printf("Enter marks of 5 students:\n");
    scanf("%d %d %d %d %d", &std1, &std2, &std3, &std4, &std5);
// find the higest and lowest markzz
    highest = std1;
    lowest = std1;
    if (std2 > highest) 
    {
        highest = std2;
    }
    if (std3 > highest) 
    {
        highest = std3;
    }
    if (std4 > highest) 
    {
        highest = std4;
    }
    if (std5 > highest) 
    {
        highest = std5;
    }
    if (std2 < lowest) 
    {
        lowest = std2;
    }
    if (std3 < lowest) 
    {
        lowest = std3;
    }
    if (std4 < lowest) 
    {
        lowest = std4;
    }
    if (std5 < lowest) 
    {
        lowest = std5;
    }
    int avg = (std1+std2+std3+std4+std5)/5;

    printf("highest mark: %d\n", highest);
    printf("lowest mark: %d\n", lowest);
    printf("avg mark: %d\n", avg);

    // pass or fail 
    printf("Student 1: ");
    if (std1 >= 40) 
    {
        printf("Passed \n");
    } 
    else 
    {
        printf("Failed\n");
    }
    printf("Student 2: ");
    if (std2 >= 40) 
    {
        printf("Passed\n");
    }
    else 
    {
        printf("Failed\n");
    }
    printf("Student 3: ");
    if (std3 >= 40)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }
    printf("Student 4: ");
    if (std4 >= 40) 
    {
        printf("Passed\n");
    } 
    else 
    {
        printf("Failed\n");
    }
    printf("Student 5: ");
    if (std5 >= 40) 
    {
        printf("Passed\n");
    } 
    else 
    {
        printf("Failed\n");
    }
}
