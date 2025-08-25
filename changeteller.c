#include <stdio.h>

int main() {
  int a, h, f, t;
  int ah, af, at;
  scanf("%d", &a);
  scanf("%d", &ah);
  scanf("%d", &af);
  scanf("%d", &at);

  h = a / 100;
  if (h > ah)
      h = ah;
  a = a - h * 100;

  f = a / 50;
  if (f > af)
      f = af;
  a = a - f * 50;

  t = a / 10;
  if (t > at)
      t = at;
  a = a - t * 10;

  printf("100's: %d\n", h);
  printf("50's: %d\n", f);
  printf("10's: %d\n", t);

  if (a > 0)
      printf("Remaining amount that cannot be given: %d\n", a);

  return 0;
}
