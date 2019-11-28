#include <unistd.h>
#include <stdio.h>

// return true if c is a letter or a number.
int my_isprint(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true if ascii int is code for a printable char.
  if (32 <= code && code <= 127)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int lowerCase = my_isprint('a');
  printf(lowerCase == 0 ? "Returns false with 'a'.\n" : "Returns true with 'a'.\n");

  int upperCase = my_isprint('Z');
  printf(upperCase == 0 ? "Returns false with 'Z'.\n" : "Returns true with 'Z'.\n");

  int num = my_isprint('7');
  printf(num == 0 ? "Returns false with '7'.\n" : "Returns true with '7'.\n");

  int otherChar = my_isprint('&');
  printf(otherChar == 0 ? "Returns false with &.\n" : "Returns true with &.\n");

  char esc = 27;
  int escape = my_isprint(esc);
  printf(escape == 0 ? "Returns false with 'esc'.\n" : "Returns true with 'esc'.\n");

  char bs = 8;
  int backspace = my_isprint(bs);
  printf(backspace == 0? "Returns false with 'backspace'.\n" : "Returns true with 'backspace'.\n");

}