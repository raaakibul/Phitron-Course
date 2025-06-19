#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    // vector<int> v(n);
    vector<int>v;
    v.push_back(1); //v[0]
    v.push_back(2); //v[1]
    v.push_back(3); 
    v.push_back(4);
    v.push_back(5);

    cout << v[0]<< " "; //1
    cout << v[1] <<endl; //2

    cout << v.at(0) << " "; //at function
    cout << v.at(1) << endl; //2

    cout<< v.size() <<endl; // size = 4
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    } //1 2 3 4 5
    cout << endl;
    
    // front()
    cout << v.front() << endl; //1
    // back()
    cout << v.back() << endl; //5
    // clear
    // v.clear();
    // cout << v.size() << endl;

    // empty()
    if(v.empty()) cout << "Empty" << endl;
    else cout << "Not empty" << endl;

    // pop_back()
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout <<endl;
    // erase()
    // v.erase(v.begin()+2);
    v.erase(v.begin()+2,v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout <<endl;


    // insert()
    v.insert(v.begin(),50);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    for(int i=0;i<v1.size();i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    
    vector<int>v2;
    v2.push_back(80);
    v2.push_back(90);
    v2.push_back(100);
    
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    swap(v1,v2);
    for(int i=0;i<v1.size();i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    cout <<endl;
    // sort()
    vector<int>v3;
    
    v3.push_back(5);
    v3.push_back(2);
    v3.push_back(100);
    v3.push_back(50);
    v3.push_back(87);
    
    for(int i=0;i<v3.size();i++){
        cout << v3[i] << " ";
    }
    cout <<endl;
    sort(v3.begin(),v3.end());
    for(int i=0;i<v3.size();i++){
        cout << v3[i] << " ";
    }

    return 0;
}