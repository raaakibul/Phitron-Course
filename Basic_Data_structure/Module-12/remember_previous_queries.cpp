#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int Q;
    cin >> Q;

    list<int>list_value;

    while(Q--){
        int X;
        long long int V;
        cin >> X >> V;

        if(X==0){
            list_value.push_front(V);
        } 
        else if(X==1){
            list_value.push_back(V);
        } 
        else if(X==2){
            if(V<(int)list_value.size()){
                auto iterator = list_value.begin();
                for (int i =0;i<V;i++) {
                    iterator++;
                }
                list_value.erase(iterator);
            }
        }

        cout << "L -> ";
        for(auto it = list_value.begin(); it != list_value.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
        
        cout << "R -> ";
        if(!list_value.empty()){
            auto it = list_value.end();
            it--;
            while(true){
                cout << *it << " ";
                if(it == list_value.begin()){
                    break;
                }
                it--;
            }
        }
        cout << endl;
    }

    return 0;
}