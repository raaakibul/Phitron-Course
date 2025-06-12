#include <bits/stdc++.h>

using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    
    while(test_case--){
        
        int N,sum;
        cin>> N >> sum;
        int A[N];
        
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        
        int found = 0;
        
        for(int i=0;i<N-2;i++){
            for(int j=i+1;j<N-1;j++){
                for(int k=j+1;k<N;k++){
                    int sum_of_index=A[i]+A[j]+A[k];
                    if(sum==sum_of_index){
                        found=1;
                        break;
                    }
                }
            }
        }
        
        
        if(found==1){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        
        if(test_case!=0){
        cout<<"\n";
        }
        
    }   

    return 0;
}
