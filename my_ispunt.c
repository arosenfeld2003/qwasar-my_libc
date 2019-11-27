#include <unistd.h>
#include <stdio.h>

int my_ispunct(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if converted ascii int is code for any printable char except space or isalnum.
  if ((code <= 48 && code != 32) || (code >= 57 && code <=  65) || code >= 122)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int space = my_ispunct(' ');
  printf(space == 0 ? "Returns false with a space.\n" : "Returns true with a space.\n");
  
  int numCode = my_ispunct('5');
  printf(numCode == 0 ? "Returns false with '5'.\n" : "Returns true with '5'.\n");

  int lowerCase = my_ispunct('a');
  printf(lowerCase == 0 ? "Returns false with lowercase letter.\n" : "Returns true with lowercase letter.\n");

  int upperCase = my_ispunct('Z');
  printf(upperCase == 0 ? "Returns false with uppercase letter.\n" : "Returns true with lowercase letter.\n");

  int ampersand = my_ispunct('&');
  printf(ampersand == 0 ? "Returns false with &.\n" : "Returns true with &.\n");

  int exclamation = my_ispunct('!');
  printf(exclamation == 0 ? "Returns false with an exclamation.\n" : "Returns true with an exclamation.\n");

  int period = my_ispunct('.');
  printf(period == 0 ? "Returns false with a period.\n" : "Returns true with a period.\n");
}