#include <stdio.h>
//Pass by ref & Pass by value
int addTen(int *number, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%p] = %d\n", number + i, *(number+i));
        *(number + i) += 10;
    }
    return 1;
}

void addTwenty(int *n) //n value will change in function main because this is a pass by reference.
{
    *n += 20;
}

int main()
{
    int numbers[] = {4, 5, 6, 7, 8};
    int n = 5;

    addTen(numbers, n); // Pass by value. Origin value will not change(value in main won't change.)

    for (int i = 0; i < n; i++)
        printf("main [%p] = %d\n", numbers + i, *(numbers +i));

    addTwenty(&n); // Send address to function (Pass by reference). Origin number will change too.
    printf("n = %d\n", n);
}
