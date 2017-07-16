
#ifndef FT_H
# define FT_H

#include <stdlib.h>

typedef	struct node
{
  struct node	*next;
  int		numb;
  char		operator;
  int		priority;
}		node;

int	priori(char c);

struct node	*make_node(int numb, char operator, int priority);



#endif
