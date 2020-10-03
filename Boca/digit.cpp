#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> number;
  int x, ri, rf, n, contador = 0;
  cin >> ri;
  cin >> rf;
  cin >> n;
  for(int i = ri; i <= rf; i++){
    x = i;
    number.clear();
    while(x > 0){
      number.push_back(x%10);
      x/=10;
    }
    for(int j = 0; j < number.size(); j++){
      if(number[j] == n){
        contador++;
      }
    }
  }
  cout << contador << endl;
  return 0;
}