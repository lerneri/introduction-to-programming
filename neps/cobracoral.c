#include <stdio.h>

int main(void) {
  int w, x, y, z;
  scanf("%d %d %d %d",&w,&x,&y,&z);
  if (w>=1 && w<=9 && x>=1 && x<=9 && y>=1 && y<=9 && z>=1 && z<=9){
   if(w==y || x==z){
     printf("V\n");
     return 0;
   }
   if(w==z){
     printf("F\n");
   }
  }
  return 0;
}
