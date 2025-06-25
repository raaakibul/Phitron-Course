#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 4};

    s.insert(3); 
    for(int i : s)
        cout << i << " ";
    return 0;
}
