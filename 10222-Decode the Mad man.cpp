#include <bits/stdc++.h>
using namespace std;

int main(){
    string keyboard[4] = {
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;';",
        "zxcvbnm,./"
    };
    string input;
    while(getline(cin, input) && input != "\n"){
        for(char ch: input){
            if(ch == ' '){
                cout << " ";
                continue;
            }
            char low_ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
            for(int i = 0; i < 4; i++){
                size_t pos = keyboard[i].find(low_ch);
                if(pos != string::npos && pos > 1){
                    cout << keyboard[i][pos-2];
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
