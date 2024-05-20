#include <stdio.h>

int main() {
  int N = 0;
  printf("Input size of matrix: ");
  scanf("%d", &N);
  double matrix[N + 1][N];
  double x[N];
  printf("Input matrix:\n");
  for (int i = 0; i < N; i++)
    for (int j = 0; j <= N; j++)
      scanf("%lf", &matrix[j][i]);
  for (int i = 0; i < N; i++) {
    for (int k = i + 1; k < N; k++) {
      double factor = matrix[i][k] / matrix[i][i];
      for (int j = i; j < N + 1; j++)
        matrix[j][k] -= factor * matrix[j][i];
    }
  }
  for (int i = N - 1; i >= 0; i--) {
    x[i] = matrix[N][i];
    for (int j = i + 1; j < N; j++)
      x[i] -= matrix[j][i] * x[j];
    x[i] /= matrix[i][i];
  }
  printf("Answer:\n");
  for (int i = N - 1; i >= 0; i--)
    printf("%f\n", x[i]);
  return 0;
}
