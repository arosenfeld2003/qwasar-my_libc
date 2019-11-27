#include <unistd.h>
#include <stdio.h>

int my_abs(int n)
{
  return n < 0 ? -n : n;
}

int main()
{
  int negFour = my_abs(-4);
  printf("The absolute value of -4 is: %d\n", negFour);

  int twoFifty = my_abs(250);
  printf("The absolute value of 250 is: %d\n", twoFifty);
}