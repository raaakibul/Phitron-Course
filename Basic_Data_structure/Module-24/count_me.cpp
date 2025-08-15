#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here
    int test_cases;
    cin >> test_cases;
    cin.ignore();

    while(test_cases--){
        string sentence, word;
        getline(cin, sentence);

        map<string, int> freq;
        stringstream ss(sentence);

        string most_freq_word;
        int max_count = 0;

        while(ss >> word){
            int count = ++freq[word];
            if(count > max_count){
                max_count = count;
                most_freq_word = word;
            }
        }
        
        cout << most_freq_word << " " << max_count << endl;
    }
    return 0;
}