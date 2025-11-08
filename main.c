#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num[]={10,2,12,14,25,28};
  int value,pos=-1,i;
  printf("Enter the value you want to search: ");
  scanf("%d",&value);
  for(i=0;i<7;i++)
  {
      if (value==num[i])
      {
          pos=i+1;
          break;
      }
  }
  if(pos==-1)
    printf("Number is not found");
  else{
    printf("Number is found");
  }
    return 0;
}
