#include<bits/stdc++.h>
using namespace std;

int sumup (long long num){
    if(num < 10) return num;
    int new_num = 0;
    while(num != 0){
        new_num += num % 10;
        num /= 10;
    }
    return sumup(new_num);
}

int main(){
    long long num;
    while( cin >> num && num != 0){
        cout << sumup(num) << endl;
    }
}
