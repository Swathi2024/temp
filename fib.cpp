#include<iostrem.h>
using namespace std;
class Fibonacii {
  public :
  int fib(int n){
    int a = 1, b =1 , c;
    c = a+b;
    cout<<a<<" "<<b<<" "<<c<endl;
    while(c<n){
      a = b;
      b = c;
      c = a+b;
      cout<<c<<" ";
    }
  }
};
int main(){
  fib(10);
  return 0;
}
