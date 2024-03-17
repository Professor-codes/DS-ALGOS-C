/* ENTER VALUES BETWEEN 1 TO 5 DIGITS */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int stack[SIZE];

int top = -1;
int count = 0;

// FUNCTION
void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\n+ -------------- +\n");
        printf("| stack overflow |\n");
        printf("+ -------------- +\n");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\n+ --------------- +\n");
        printf("| stack underflow |");
        printf("\n+ --------------- +\n");
    }
    else
    {
        printf("\n+ ---- stack ---- +");

        printf("\n+ --------------- +\n");
        for (i = top; i >= 0; i--)
        {
            printf("| %d\t\t  | \n", stack[i]);
        }
        printf("+ --------------- +\n");
        printf("\n");
    }
}

// MAIN
int main()
{
    int i;
    int num;
    int input;
    int range;

    while (1)
    {
        printf("\n+ -------- + -------- + -------- + -------- +");
        printf("\n| 0 : EXIT ");
        printf("| 1 : PUSH ");
        printf("| 2 : SHOW ");
        printf("| 3 : SIZE |\n");
        printf("+ -------- + -------- + -------- + -------- +\n");

        printf("\nEnter input : [");
        scanf("%d", &input);

        if (input == 0)
        {
            exit(0);
        }
        else if (input == 1)
        {
            printf("Enter range : [");
            scanf("%d", &range);

            if (range >= 100)
            {
                printf("\n+ --------------- +\n");
                printf("| Range undefined |\n");
                printf("+ --------------- +\n");
            }
            else
            {
                // printf("\nEnter { %d } element : [", range);
                printf("\n");
                for (i = 1; i <= range; i++)
                {
                    printf("Enter { %d } element : [", i);
                    scanf("%d", &num);
                    push(num);
                    count++;
                }
            }
        }
        else if (input == 2)
        {
            display();
        }
        else if (input == 3)
        {
            printf("\n+ ---------------------------- +\n");
            printf("| Current stack size : %d       |", count);
            printf("\n+ ---------------------------- +\n");
        }
    }

    return 0;
}