#include <iostream>
using namespace std;

int tax(int x){
  return x * 1.08;
}

void casher(int x){
  cout << "合計お支払金額は税込";
  cout << tax(x);
  cout << "円です" << endl;
}

int main(void){
  int a, b;
  cout << "商品Aの金額を入力してください: ";
  cin >> a;
  cout << "商品Bの金額を入力してください: ";
  cin >> b;

  int sum = a + b;

  casher(sum);

  return 0;
}
