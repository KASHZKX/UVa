#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    while(cin >> a >> b){
        vector<int> dics1(26, 0),dics2(26, 0);
        for(char ch: a){
            dics1[ch-'a'] += 1;
        }
        for(char ch: b){
            dics2[ch-'a'] += 1;
        }
        string permutation;
        for(int i=0; i < 26; i++){
            int cnt = min(dics1[i],dics2[i]);
            permutation.append(cnt, i+'a');

        }
        cout << permutation <<endl;
    }
    return 0;
}
