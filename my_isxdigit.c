#include <unistd.h>
#include <stdio.h>

int my_isxdigit(char c)
{
  if ((0 <= c && c <= 9) || ('A' <= c && c <= 'F') || ('a' <= c && c <= 'f'))
  {
    return 1;
  }
  return 0;
}

int main()
{
  int hexa = my_isxdigit('a');
  printf(hexa == 0 ? "Returns false with 'a'.\n" : "Returns true with 'a'.\n");

  int hexF = my_isxdigit('F');
  printf(hexF == 0 ? "Returns false with 'F'.\n" : "Returns true with 'F'.\n");

  int num = my_isxdigit('7');
  printf(num == 0 ? "Returns false with '7'.\n" : "Returns true with '7'.\n");

  int otherLetter = my_isxdigit('j');
  printf(otherLetter == 0 ? "Returns false with &.\n" : "Returns true with &.\n");
}