#include <QCoreApplication>
#include <string>
#include <iostream>
int main(int argc, char *argv[])
{
    std::string m;
    int r,d,u,l ;
    r = 0;
    d = 0;
    u = 0;
    l = 0;
   std::cin >> m;
   for (int i=0; i< m.length(); i++){
      if (m[i] == 'L'){
          l++;
      }   else {
          if (m[i] =='R'){
              l--;
          } else{
              if (m[i] == 'U'){
                  u++;
              }else {
                  u--;
              }
          }

      }
   }
   std::cout << ((u==0) && (l==0));
//   std::cout << r<< " "<< l << " " << d <<" " << u << " " << m[1];
    return 0;
}
