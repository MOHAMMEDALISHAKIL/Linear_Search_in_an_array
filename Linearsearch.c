#include <stdio.h>
main()
{
  int arr[100], item, k, n;
  printf("enter size \n");
  scanf("%d", &n);
  printf("enter element\n", n);
  for (k= 0; k < n; k++)
    scanf("%d", &arr[k]);
  printf("Enter a number to item\n");
  scanf("%d", &item);
  for (k = 0; k < n; k++)
  {
    if (arr[k] == item)
    {
      printf("%d is present at location %d.\n", item, k);
        //break;
    }
  }
  if (k == n)
    printf("%d isn't present in the array.\n",item);
}
