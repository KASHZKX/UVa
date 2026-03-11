#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
    long long x;
    string line;
    while(cin >> x){
        char newline;
        long long cur_a, result = 0;
        vector<int> a;
        newline = getchar();
        getline(cin, line);
        stringstream ss(line);
        while(ss >> cur_a){
            a.push_back(cur_a);
        }
        long long n = a.size() - 1;
        for(int i = 0; i <= n-1; i++){
//            cout << a[i] << " " << n-i <<" " << pow(x,n-1-i) <<endl;
            result +=  a[i] * (n-i) * pow(x, n-1-i);
        }
        cout << result <<endl;
    }

}
