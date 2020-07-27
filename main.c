#include <stdio.h>

int main(void) {
  float avg;
  float a1, a2;
  a1 = 3;
  a2 = 4;
  avg = 3 / 4;
  printf("%f\n", avg);
  avg = 3. / 4;
  printf("%f\n", avg);
  avg = a1 / a2;
  printf("%f\n", avg);
  printf("Gimme...: ");
  fflush(stdout);
  scanf("%f %f", &a1, &a2);
  avg = a1 / a2;
  printf("%f\n", avg);
  return 4;

  int n=786551620;
  int k=647501711;
  long long int p = ((n - k + 1) * 100);
  //FILE * f=fopen("res.out","w");
  printf("%012d\n%012d\n%012d\n%012lld\n%012lld\n",
         n, k, (n - k + 1), ((long long) (n - k + 1) * 100), p);
  //res.out (wrong):
  //1020089112
  return 0;
  /*
  int a = 3;
  int b = a++ + ++a + --a;
  printf("a=%d, b=%d\n", a, b);
  return 0;
  */
}
