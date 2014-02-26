#include <stdio.h>
#include <stdlib.h>

int
fib(int max, int x, int y)
{
  int result;

  if (max < 0) {
    goto fail;
  }
  else if (max == 0) {
    result = 0;
  }
  else if (max == 1) {
    result = 1;
  }
  else {
    result = x + y;
  }

  return result;

fail:
  fprintf(stderr, "マイナスはだめです\n");
  exit(1);
}

int main(int argc, char const* argv[])
{
  int max = atoi(argv[1]);
  int current = 0;
  int x = 1;
  int y = 0;

  for (int i = 0; i < max; i++) {
    current = fib(max, x, y);
    printf("%d\n", current);
    y = x;
    x = current;
  }

  return 0;
}
