#include <iostream>
using namespace std;

int tax(int x){
  return x * 1.08;
}

void casher(int x){
  cout << "お支払金額は";
  cout << tax(x);
  cout << "円です" << endl;
}

int main(void){
  int a, b;
  cin >> a >> b;

  int sum = a + b;

  casher(sum);

  return 0;
}
