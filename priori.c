
#include "ft.h"

int	priori(char c, int p)
{
  int pcounter;

  pcounter = p;
  if (c == '*' || c == '/' || c == '%')
    pcounter += 1;
  if (c == '+' || c == '-')
    pcounter += 0;
  if (c == '(')
    pcounter += 2;
  if (c == ')')
    pcounter -= 2;
  return (pcounter);
}
