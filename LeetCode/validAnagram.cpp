#include <bits/stdc++.h>

using namespace std;

#define ll long long;
#define ar array;

bool anagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s.size() == t.size()){
        for(int i=0; i<s.size(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}

int main() {
    string s,t;
    cin >> s >> t;
    if(anagram(s,t)){
        cout << boolalpha << true;
    } else {
        cout << boolalpha << false;
    }
    

    return 0;
}