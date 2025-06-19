#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3};
    // Add
    v.push_back(4);
    // Remove
    v.pop_back();
    // Access
    cout << v[0] << endl;
    // Size
    cout << "Size: " << v.size() << endl;
}
