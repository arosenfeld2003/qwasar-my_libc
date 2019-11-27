#include <unistd.h>
#include <stdio.h>

// return true if c is a letter or a number.
int my_iscntrl(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if ascii int is code for a a control character.
  if ((0 <= code && code <= 31) || code == 127)
  {
    return 1;
  }
  return 0;
}

int main()
{
  char nul = 0;
  int isNul = my_iscntrl(nul);
  printf(isNul == 0 ? "Returns false with NUL.\n" : "Returns true with NUL.\n");

  char esc = 27;
  int isEsc = my_iscntrl(esc);
  printf(isEsc == 0 ? "Returns false with esc.\n" : "Returns true with esc.\n");

  char lowerCase = 'a';
  int isLowerCase = my_iscntrl(lowerCase);
  printf(isLowerCase == 0 ? "Returns false with 'a'.\n" : "Returns true with 'a'.\n");

  char num = '4';
  int isNum = my_iscntrl(num);
  printf(isNum == 0 ? "Returns false with 4.\n" : "Returns true with 4.\n");
}