#include <iostream>
using namespace std;


int main(){
    long long S, D;
    while( cin >> S >> D){
        long long sum = 1;
        int s = S;
        while(sum <= D){
            sum += s;
            s++;
        }
        cout << s-1 << endl;
    }
}
