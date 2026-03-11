#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, num;
    while(cin >> N >> M){
        cout << N << " " << M <<endl;
        if(M == 0 && N == 0){
            break;
        }
        vector<int> nums;
        for(int i = 0; i < N; i++){
            cin >> num;
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end(), [M](int a, int b){
                if((a % M) == (b % M)){
                    if(a % 2 == 1 && b % 2 == 0){
                        return true;
                    }
                    else if(a % 2 == 0 && b % 2 == 1){
                        return  false;
                    }
                    else if(a % 2 == 0 && b % 2 == 0){
                        return a < b;
                    }
                    else{
                        return a > b;
                    }
                }
                else{
                    return ((a % M) < (b % M));
                }
             }
        );
        for(auto it:nums){
            cout << it <<endl;
        }
    }
}
