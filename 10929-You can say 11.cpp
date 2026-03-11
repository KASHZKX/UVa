#include <bits/stdc++.h>
using namespace std;

int main(){
    string strings;
    while( cin >> strings && strings != "0" ){
        vector<short int>numbers;
        int odd = 0,even = 0;
        for(char c: strings){
            numbers.push_back(c-'0');
        }

        for(int i=0; i < numbers.size(); i++){
            if(i%2 == 0){
                odd += numbers[i];
                continue;
            }
            even += numbers[i];
        }
        if(abs(even - odd) % 11 == 0){
            cout << strings << " is a multiple of 11." << endl;
        }
        else{
            cout << strings << " is not a multiple of 11." << endl ;
        }
    }
}
