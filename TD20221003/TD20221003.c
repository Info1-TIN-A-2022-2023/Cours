#include <stdio.h>

int main(int argc, char const *argv[])
{
  double temp_real = 0.;
  double temp_csg = 0.;
  int output = 0;

  sscanf(argv[1], "%lf", &temp_real);
  sscanf(argv[2], "%lf", &temp_csg);

  if(temp_real<temp_csg) {
    output = 1;
  }
  else {
    output = 0;
  }

  printf("%d\n", output);

  return 0;
}
