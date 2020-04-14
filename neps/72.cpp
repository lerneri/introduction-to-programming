#include <iostream>

int main(void) {
  int w, x, y, z;
  cin >> w >> x >> y >> z;
  if (w>=1 && w<=9 && x>=1 && x<=9 && y>=1 && y<=9 && z>=1 && z<=9){
   if(w==y || x==z){
     cout << "V\n";
     return 0;
   }
   if(w==z){
     cout << "F\n";
   }
  }
  return 0;
}
