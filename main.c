//main
// this program will be the main skeleton of the translator
#include <stdio.h>

int main()
{
  char s;
  printf("Welcome:");
  // print statement
  printf("We can translate your C code into a python code");
  gets(s);
  
  if (s == 'printf("hello!")')
    printf("print ('hello!')");
}
