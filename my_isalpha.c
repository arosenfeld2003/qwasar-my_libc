#include <unistd.h>
#include <stdio.h>

// return true if c is a letter or a number.
int my_isalpha(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if ascii int is code for a letter.
  if ((65 <= code && code <= 90) || (code >= 97 && code <= 122))
  {
    return 1;
  }
  return 0;
}

int main()
{
  int lowerCase = my_isalpha('a');
  printf(lowerCase == 0 ? "Returns false with lowercase letter.\n" : "Returns true with lowercase letter.\n");

  int upperCase = my_isalpha('Z');
  printf(upperCase == 0 ? "Returns false with uppercase letter.\n" : "Returns true with uppercase letter.\n");

  int num = my_isalpha('7');
  printf(num == 0 ? "Returns false with '7'.\n" : "Returns true with '7'.\n");

  int otherChar = my_isalpha('&');
  printf(otherChar == 0 ? "Returns false with &.\n" : "Returns true with &.\n");
}