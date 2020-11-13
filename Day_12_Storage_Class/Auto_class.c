#include <stdio.h>
int main() 
{
  auto int i; //local variable i.e; auto class
  for(i = 0;i < 5;++i) 
  {
     printf("I am Automatic Storage class\n");
  }
  printf("%d\n",i);
  return 0;
}
