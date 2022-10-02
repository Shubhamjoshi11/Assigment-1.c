#include<stdio.h>

int main()
{
  int r;
  float Area;
  printf("enter radius of circle");
  scanf("%d",&r);
  Area= 3.14*r*r;
  printf("Area of circle is %f having the radius %d",Area,r);
  return 0;
}
