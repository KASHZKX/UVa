#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int>a, pair<char, int>b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int line;
    char trash;
    string str;
    vector<int> counts(26, 0);
    vector<pair<char, int>> counts_p;
    cin >> line;
    trash = getchar();

    for(int i = 0; i < line; i++){
        getline(cin, str);

        for(char c: str){
            char up_c = toupper(c);
            if('A' <= up_c && up_c <= 'Z'){
                counts[up_c-'A'] += 1;
            }
        }
    }

    for(int i = 0; i < 26; i++){
        if(counts[i] == 0) continue;
        counts_p.push_back(make_pair(char('A'+i), counts[i]));
    }

    sort(counts_p.begin(), counts_p.end(), cmp);

    for(int i = 0; i < counts_p.size(); i++){
        cout << counts_p[i].first << " " << counts_p[i].second << endl;
    }

    return 0;
}
