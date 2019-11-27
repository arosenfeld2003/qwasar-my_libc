#include <unistd.h>
#include <stdio.h>

// return true if c is a letter or a number.
int my_islower(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if ascii int is code for a letter.
  if (97 <= code && code <= 122)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int lowerCase = my_islower('a');
  printf(lowerCase == 0 ? "Returns false with 'a'.\n" : "Returns true with 'a'.\n");

  int upperCase = my_islower('Z');
  printf(upperCase == 0 ? "Returns false with 'Z'.\n" : "Returns true with 'Z'.\n");

  int num = my_islower('7');
  printf(num == 0 ? "Returns false with '7'.\n" : "Returns true with '7'.\n");

  int otherChar = my_islower('&');
  printf(otherChar == 0 ? "Returns false with &.\n" : "Returns true with &.\n");
}