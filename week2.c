#include <stdio.h> // standard input output.
#include <stdlib.h> // standard library.
// char name[20];
char number[20];
// int number;

int main()
{
   // printf("Enter name : ");
   // gets(name);
   // fgets(name, 5, stdin);
   // getchar(chr); //get 1 character
   // fgets(number, 5, stdin);
   // int i = atoi(number); //atoi is array to integer
   // printf("number = %s, i = %d",number,i);
   // putchar(100);
   // putchar('u');
//////////////////////////////////////////////////////////
   int found = 0;
   float isExist = 0.0;
   char isOnline = '\0'; // \0 is NULL

   // fgets(number, 5, stdin);
   // int i = atoi(number);
   // if (i  > 0 && i <= 10) // if both condition correct line 27 will be executed.
   //    printf("if = %d\n", i > 0 && i<=10);
//////////////////////////////////////////////////////////
   fgets(number, 5, stdin);
   int i = atoi(number);
   // int count = 0;
   // while (count < i)
   // {
   //    printf("%d\n",count);
   //    count++;
   // }
//////////////////////////////////////////////////////////
   for (int j=0; j<i; j++)
      printf("j = %d\n", j);
}
