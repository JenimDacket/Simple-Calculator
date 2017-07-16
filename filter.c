
#include "ft.h"

int	atoi(char *str);

char	opass(char c);

int	priori(char c, int p);

void	filter(char *str head)
{
  int prio;
  int i;
  int numb;
  char op;

  prio = 0;
  while (*str)
    {
      op = 0;
      while (op = 0 && *str)
	{
	  if (*str < 58 && *str > 47)
	    {
	      numb = atoi(str);
	      while (*str < 58 && *str > 47)
		str++;
	    }
	  op = opass(*str);
	  prio = priori(*str, prio);
	  str++;
	}
      //talk with someone to make sure I am doing this right
      node->next = make_node(numb, op, prio);
      node = node->next;
    }
}

int	atoi(char *str)
{
  int i;
  int res;
  
  i = 0;
  res = 0;
  if (*str < 58 && *str > 47)
    {
      while(*str < 58 && *str > 47)
	{
	  res = res * 10 + str[i] - '0';
	  i++;
	}
    }
  return (res);
}

char	opass(char c)
{
  if (c == '+' | c == '-' | c == '*' | c == '/' | c == '%')
    return (c);
  else
    return (0);
}

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
