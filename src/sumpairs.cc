#include <stdio.h>

// PrintUsage
void PrintUsage()
{
  printf("sumpairs\n\n");
  printf("Print pairs equating to sum in array\n\n");
  printf("Usage:\n\tsumpairs <sum>\n");
}

int main(int argc, const char *argv[])
{
  int arr[20] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 15, 16, 17};

  if (2 > argc) {
    PrintUsage();
    return -1;
  }

  int z = 0;
  sscanf(argv[1], "%d", &z);

  int c = 0;
  for (size_t i = 0; i < sizeof(arr) / sizeof(int); ++i) {
    for (size_t j = sizeof(arr) / sizeof(int) - 1; j > i; --j) {
      if (arr[i] + arr[j] == z) {
        printf("%d + %d\n", arr[i], arr[j]);
      }
      if (arr[i] + arr[j] < z)
        break;
      c++;
    }
  }
  printf("%d runs\n", c);

  return 0;
}

