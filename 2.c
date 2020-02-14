#include <stdio.h>
#include<string.h>

int main() {
    int c,x=0;
    char name[45];
 printf("enter a number b/w 1-3 and name ");
 scanf("%d",&c);
 gets(name);     

 switch (c)
 {
 case 0:
      x = c+5;
      printf("%d",x);
     break;
 case 1:
      x = x++;
      printf("%d",x);
     break;
 case 2:
      x =+5;
      printf("%d",x);
     break;
 case 3:
     printf("%s",name);
     break;
 default:
     break;
 }
}
