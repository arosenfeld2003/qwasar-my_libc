#include <unistd.h>
#include <stdio.h>

// return true if c is a letter or a number.
int my_isalnum(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if c is a number or converted ascii int is code for a letter.
  if ((48 <= code && code <= 57) || (65 <= code && code <= 122))
  {
    return 1;
  }
  return 0;
}

int main()
{
  int numCode = my_isalnum('5');
  printf(numCode == 0 ? "Returns false with '5'.\n" : "Returns true with '5'.\n");

  int lowerCase = my_isalnum('a');
  printf(lowerCase == 0 ? "Returns false with lowercase letter.\n" : "Returns true with lowercase letter.\n");

  int upperCase = my_isalnum('Z');
  printf(upperCase == 0 ? "Returns false with uppercase letter.\n" : "Returns true with lowercase letter.\n");

  int otherChar = my_isalnum('&');
  printf(otherChar == 0 ? "Returns false with &.\n" : "Returns true with lowercase letter.\n");
}