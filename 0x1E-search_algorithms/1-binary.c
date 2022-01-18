#include "search_algos.h"

/*
**
*/
void print_scope(int *array, int min, int max)
{
  int i;

  for (i = min; i < max; i++)
    printf("%d, ", array[i]);
  printf("%d\n", array[i]);
}
/*
**
*/
int binary_search(int *array, size_t size, int value)
{
  int left;
  int right;
  int mid;

  if (!array)
    return (-1);

  left = 0;
  right= size - 1;
  while (left <= right)
  {
    printf("Searching in array: ");
    print_scope(array, left, right);
    mid = (left + right)/2;
    if (array[mid] == value)
      return (mid);
    else if (value < array[mid])
      right = mid - 1;
    else
      left = mid +1;
  }
  return (-1);
}
