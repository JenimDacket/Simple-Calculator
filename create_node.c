
#include "./ft.h"

//This may need to include a passed in variable for the location of the next node, and then assign that location to ```new->next```

node	*make_node(int numb, char operator, int priority)
{
  node new;
  
  new = malloc(sizeof(node));
  new->numb = numb;
  new->operator = operator;
  new->priority = priority;
  return (&new);
}
