#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int stack[SIZE];

int top = -1;
int count = 0;

// FUNCTION
void push(int num)
{
    top++;
    stack[top] = num;
}

void display()
{
    int i;

    printf("\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int i;
    int num;
    int input;

    while (1)
    {
        printf("\n0:EXIT | 1:PUSH | 2:DISPLAY | 3:SIZE\n\n");

        printf("Input : ");
        scanf("%d", &input);

        if (input == 0)
        {
            exit(0);
        }
        else if (input == 1)
        {
            printf("Element : ");
            scanf("%d", &num);
            push(num);
            count++;
        }
        else if (input == 2)
        {
            display();
        }
        else if (input == 3)
        {
            printf("\nSize : %d\n", count);
        }
    }

    return 0;
}