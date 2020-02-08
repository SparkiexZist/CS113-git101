#include<stdio.h>
// function
int addTen(int x)// Define function.
{
    x += 10;
    return x;
}

int addTwenty();// Define function.
int x = 1000;

int main()
{
    int x = 50;
    int y = addTen(x);// Call function.
    printf("x in main = %d\n", x);
    printf("addTen in main = %d\n", y);
    printf("addTwenty in main = %d\n",addTwenty()); // Call function.
}

int addTwenty() // Define Function.
{
    printf("x in addTwenty = %d\n",x);
    x += 20;
    return x;
}
