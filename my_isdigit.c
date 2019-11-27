#include <unistd.h>
#include <stdio.h>

// return true if c is a letter or a number.
int my_isdigit(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if ascii int is code for a digit.
  if (48 <= code && code <= 57)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int zero = my_isdigit('0');
  printf(zero == 0 ? "Returns false with '0'.\n" : "Returns true with '0'.\n");

  int nine = my_isdigit('9');
  printf(nine == 0 ? "Returns false with '9'.\n" : "Returns true with '9'.\n");

  int lowercase = my_isdigit('a');
  printf(lowercase == 0 ? "Returns false with 'a'.\n" : "Returns true with 'a'.\n");

  int otherChar = my_isdigit('&');
  printf(otherChar == 0 ? "Returns false with &.\n" : "Returns true with &.\n");
}