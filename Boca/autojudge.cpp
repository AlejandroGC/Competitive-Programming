#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string f, fl, fn, ext, data;
  int r, d, e, c, t;
  vector<string> cd, td;
  cin >> f;
  cin >> fn;
  cin >> r;
  cin >> d;
  cin >> e;
  cin >> c;
  cin.ignore();

  for(int i = 0; i < c; i++){
    getline(cin,data);
    cd.push_back(data);
  }
  
  cin >> t;
  cin.ignore();
  for(int i = 0; i < t; i++){
    getline(cin,data);
    td.push_back(data);
  }

  fl = f;

  for(auto& w : fl){
    w = tolower(w);
  }

  int pos = fn.find(".");
  ext = fn.substr(pos);

  if(((ext != ".c") && (ext != ".cpp") && (ext != ".java") && (ext != ".py")) || f != fl) {
    cout << "Compile Error";
    return 0;
  } else if(r != 0) {
    cout << "Run-Time Error";
    return 0;
  } else if(d < e){
    cout << "Time Limit Exceeded";
    return 0;
  } else if(c != t){
    cout << "Wrong Answer";
    return 0;
  } else {
    for(int i = 0; i < c; i++){
      if(cd[i] != td[i]){
        cout << "Wrong Answer";
        return 0;
      }
    }
  }

  cout << "Correct";
  return 0;
}