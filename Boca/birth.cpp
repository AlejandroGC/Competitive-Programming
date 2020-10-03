#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
  int n, reps = 0;
  cin >> n;
  unordered_map<int, int> uniques;
  // stringstream temp;
  string input;
  for (int i = 0; i < n; i++) {
    stringstream temp;
    cin >> input;

    temp << input.substr(0,2);
    temp << input.substr(3);
    int nuevo = std::stoi(temp.str());
    if (uniques.count(nuevo) != 0) {
      uniques[nuevo]++;
    } else {
      uniques.insert(make_pair(nuevo, 1));
    }
  }

  cout << uniques.size() << "\n";
  return 0;
}