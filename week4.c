#include <stdio.h>
//pointer//
int main()
{
    int x = 100;
    // int a = 0144; //Octal
    // int b = 0x64; //Hexadecimal
    // printf("x = %d",x);
    // printf("reference x = %lu\n", &x); //& will return addrass
    // printf("reference x = %p\n", &x); //%p and & will print Hexadecimal address

    // int number[] = {3, 4, 5, 6, 7};
    // int number[100];
    // int number[100] = {3, 4, 5, 6, 7};
    // printf("index 1 = %d\n", number[1]);
    // printf("reference number[1] = %p\n", &number[1]+1); //move 1 address. int = 4 bit  = move 4 bit.
    // printf("reference number[0] = %p\n", &number[0]); //print address in Hexadecimal.
    // printf("reference number = %p\n", &number); //print Hexadecimal address.
    // printf("reference number[2000] = %p\n", &number[2000]);

    int number[] = {3, 4, 5, 6, 7}; //address = {00, 04, 08 ,12, 16}
    int *ptr = &x;
    int *arrPtr;
    arrPtr = number; // point to number[0]
    arrPtr += 2; // move address 2 place.
    *arrPtr = *arrPtr + 10; //change number at *arrPtr address
    printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr);
    printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr);

    // int number[] = {3, 4, 5, 6, 7};
    // for (int *ptr = number; ptr <= &number[4]; ptr++)
    //     printf("[%p] = %d\n",ptr, *ptr);
    // int *ptr2 = number;
    // for (int i = 0; i < 5; i++)
    //     printf("[%p] = %d\n",ptr2+i, *(ptr2+i));

    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input;*cPtr != '\0' ; cPtr++)
    //     printf("%c\n", *cPtr);

    // char c;
    // int i;
    // char s[100];
    // scanf("%d-%c-%s",&i ,&c ,s);
    // printf("%d %c %s", i, c, s);

}
