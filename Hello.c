#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // Ask for name
  string name = get_string("what's your name?");
  // Greeting
  printf("Hello, %s\n", name);
  
}
