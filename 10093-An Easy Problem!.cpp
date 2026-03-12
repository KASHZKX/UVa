#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string input;
    while(getline(cin, input)){
        int max_v = 1;    // can't be 0, 0 can not be divided !!!
        int sum = 0;
        bool ans = false;
        vector<int> values;
        for(char ch:input){
            int val = -1;

            if('0' <= ch && ch <= '9'){
                val = ch - '0';
            }
            else if('A' <= ch && ch <= 'Z'){
                val = ch - 'A' + 10;
            }
            else if('a' <= ch && ch <= 'z'){
                val = ch - 'a' + 36;
            }
            if(val>=0){
                values.push_back(val);
                if(max_v < val){
                    max_v = val;
                }
            }
        }

        for(int j = 0; j < values.size(); j++){
            sum += values[j];
        }

        for(int i = max_v+1; i <= 62; i++){
            if(sum % (i-1) == 0){
                ans = true;
                cout << i << endl;
                break;
            }
        }
        if(!ans){
            cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}
