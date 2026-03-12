#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int cases, M, D, mod;
    vector<int> doom = {-1, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
    vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> M >> D;
        mod = (D - doom[M]) % 7;
        cout << days[(mod+7)%7] <<endl;
    }
    return 0;
}
