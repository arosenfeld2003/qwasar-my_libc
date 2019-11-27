#include <unistd.h>
#include <stdio.h>

int my_isspace(char c)
{
  // convert c to ascii.
  int code = (int)c;

  // return true for space, tab, carriage return, new line, vertical tab, form feed.
  if (code == 32 || (code >= 9 && code <= 13))
  {
    return 1;
  }
  return 0;
}

int main()
{
  int space = my_isspace(' ');
  printf(space == 0 ? "Returns false with a space.\n" : "Returns true with a space.\n");

  int htab = 9;
  int ishtab = my_isspace(htab);
  printf(ishtab == 0 ? "Returns false with horizontal tab.\n" : "Returns true with horizontal tab.\n");

  int linefeed = 10;
  int islinefeed = my_isspace(linefeed);
  printf(islinefeed == 0 ? "Returns false with a new line.\n" : "Returns true with a new line.\n");

  int vtab = 11;
  int isvtab = my_isspace(vtab);
  printf(isvtab == 0 ? "Returns false with linefeed.\n" : "Returns true with linefeed.\n");

  int formfeed = 12;
  int isformfeed = my_isspace(formfeed);
  printf(isformfeed == 0 ? "Returns false with formfeed.\n" : "Returns true with a formfeed.\n");

  int creturn = 13;
  int iscreturn = my_isspace(creturn);
  printf(iscreturn == 0 ? "Returns false with carriage return.\n" : "Returns true carriage return.\n");

  int lowercase = my_isspace('a');
  printf(lowercase == 0 ? "Returns false with 'a'.\n" : "Returns true with 'a'.\n");

  int uppercase = my_isspace('Z');
  printf(uppercase == 0? "Returns false with 'Z'.\n" : "Returns true with 'Z'.\n");

  int num = my_isspace('7');
  printf(num == 0 ? "Returns false with '7'.\n" : "Returns true with '7'.\n");

  int otherChar = my_isspace('&');
  printf(otherChar == 0 ? "Returns false with &.\n" : "Returns true with &.\n");
}