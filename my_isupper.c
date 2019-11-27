#include <unistd.h>
#include <stdio.h>

// return true if c is uppercase letter.
int my_isupper(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if ascii int is code for a uppercase letter.
  if (65 <= code && code <= 90)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int lowerCase = my_isupper('a');
  printf(lowerCase == 0 ? "Returns false with 'a'.\n" : "Returns true with 'a'.\n");

  int upperCase = my_isupper('Z');
  printf(upperCase == 0 ? "Returns false with 'Z'.\n" : "Returns true with 'Z'.\n");

  int num = my_isupper('7');
  printf(num == 0 ? "Returns false with '7'.\n" : "Returns true with '7'.\n");

  int otherChar = my_isupper('&');
  printf(otherChar == 0 ? "Returns false with &.\n" : "Returns true with &.\n");
}