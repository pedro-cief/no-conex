#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int i = 0;
  int *ptr;
  int sum = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int));
 
  // Si no se ha podido asignar memoria
  if (ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  while (i < n)
  {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
    i++;
  }

  printf("Sum = %d", sum);
  
  // libera la memoria
  free(ptr);

  return (0);
}
