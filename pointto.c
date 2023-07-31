#include <stdio.h>
void pointto()
{
  int var = 25;
  int *pt;
  pt = &var;    
  printf("Address is: %p \n",pt);
  printf("Value is: %d \n", *pt);	 
}
int main()
{
  pointto();
}