#include <stdio.h>

int main(void) {
  int t1, t2, t3;
  scanf("%d",&t1);
  scanf("%d",&t2);
  scanf("%d",&t3);

  if(t1<t2 && t1<t3){
    printf("1\n");
    if(t2<t3){
      printf("2\n");
      printf("3\n");
      return 0;
    }
    else{
      printf("3\n");
      printf("2\n");
       return 0;
    }
   }
  if(t2<t1 && t2<t3){
    printf("2\n");
    if(t1<t3){
      printf("1\n");
      printf("3\n");
      return 0;
    }
    else{
      printf("3\n");
      printf("1\n");
       return 0;
    }
   }
   else{
    printf("3\n");
    if(t2<t1){
      printf("2\n");
      printf("1\n");
      return 0;
    }
    else{
      printf("1\n");
      printf("2\n");
       return 0;
    }  
   }
 

  return 0;
}
