#include <bits/stdc++.h>
using namespace std;

int main(){
    int line;
    string empty_str, str;
    map<char, int> counts;
    cin >> line;
    getline(cin, empty_str);
    for(int i = 0; i < line; i++){
        getline(cin, str);
        istringstream iss(str);
        string first;
        while(iss >> first){
            for(char c: first){
                char ch = static_cast<char>(toupper(static_cast<unsigned char>(c)));
                if(65 <= ch && ch <= 97){
                    if(counts.find(ch) == counts.end()){
                        counts[ch] = 1;
                    }
                    else{
                        counts[ch] += 1;
                    }
                }
            }
        }
    }
    vector<pair<char, int>> vec_counts(counts.begin(), counts.end());
    sort(vec_counts.begin(), vec_counts.end(), [](const auto&a, const auto&b){
            if (a.second == b.second){
                return static_cast<int>(a.first) < static_cast<int>(b.first);
            }
            return a.second > b.second;
         }
    );
    for(auto it = vec_counts.begin(); it != vec_counts.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
