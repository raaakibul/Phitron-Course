#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> S(N);

    for(int i = 0; i < N; i++){
         cin >> S[i];
    }

    int count_groups = 0;

    for(int start=0;start<N;start++){
        int sum=0;
        for(int end=start;end<N;end++){
            sum += S[end];
            if(sum == K){
                count_groups++;
            }
        }
    }

    cout << count_groups << endl;
    return 0;
}