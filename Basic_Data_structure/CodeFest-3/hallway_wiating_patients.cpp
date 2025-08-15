#include <bits/stdc++.h>
using namespace std;

int main() {
    int queries;
    cin >> queries;
    
    deque<string> hallway;

    while(queries--){
        string command;
        cin >> command;

        if(command == "ARRIVE"){
            string name;
            cin >> name;
            hallway.push_back(name);
        }
        else if(command == "SERVE"){
            if(hallway.empty()){
                cout << "No patients" << endl;
            }
            else{
                hallway.pop_front();
            }
        }
        else if(command == "FIRST"){
            if(hallway.empty()){
                cout << "No patients" << endl;
            }
            else{
                cout << hallway.front() << endl;
            }
        }
        else if(command == "LAST"){
            if (hallway.empty()){
                cout << "No patients" << endl;
            }
            else{
                cout << hallway.back() << endl;
            }
        }
        else if(command == "COUNT"){
            cout << hallway.size() << endl;
        }
        else if(command == "SHOW"){
            if(hallway.empty()){
                cout << "No patients" << endl;
            }
            else{
                for(int i=0;i<(int)hallway.size();i++){
                    if(i > 0)
                    cout << " ";
                    cout << hallway[i];
                }
                cout << endl;
            }
        }
    }
    return 0;
}