#include<stdio.h>
int main()
{

 int x, y, z, w, k;
 int ans=1;
 printf("enter x:");
 scanf("%d",&x);
 printf("enter y:");
 scanf("%d",&y);
 printf("enter z:");
 scanf("%d",&z);
 printf("enter value to select case");
 scanf("%d",&w);

switch(w)
{



case 1:
    k=x+y*z/4%2-1;
    printf("%d",k);
    break;
case 2:
    k=x+y*z/4%2-1;
    printf("%d",k);
    break;
case 3:
    k=x*x-y/z;
    printf("%d",k);
    break;
case 4:
    k=x+y/z-y;
    printf("%d",k);
    break;
case 5:
    y=x+y-(x==y);
    printf("%d",y);
    break;
case 6:
    y=x+y-(x=y);
    printf("%d",y);
    break;




}
return 0;
}
