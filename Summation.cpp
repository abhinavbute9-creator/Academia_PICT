#include<iostream>
using namespace std;

class SumofSquares{
  private:
  int num;
  int add = 0;
  public:
  SumofSquares(int n){
    num = n;
  }
  int summation(){
    for(int i = 1; i < num + 1; i++){
      add += i;
    }
    return add;
  }
};

int main (){
int n;
cout << "Enter the integer to find the sum of squares: ";
cin >> n;
SumofSquares obj(n);
cout << "Sum of first " << n << " natural numbers is: " << obj.summation() << endl;
return 0;
}
