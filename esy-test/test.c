#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main()
{
  printf("%s\\n", readline("prompt> "));
  return 0;
}
