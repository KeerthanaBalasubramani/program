  #include<stdio.h>
  int main()
  {
  int a,b=1;
  scanf("%d",&a);
  if(a==0)
  {
  printf("1");
  }
  else
  {
  for(int i=1;i<=a;i++)
  {
  b=b*i;
  }
  printf("%d",b);
  }
  }
