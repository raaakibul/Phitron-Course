#include<bits/stdc++.h>
using namespace std;
int main(){

    string text = "apple banana apple";
    map<string, int> freq;
    string word;
    stringstream ss(text);

    while (ss >> word){
        freq[word]++;
    }

    for (auto l : freq){
        cout << l.first << ": " << l.second << endl;
    }
    return 0;
}