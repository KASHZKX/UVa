#include <bits/stdc++.h>

using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int intv1, intv2;
    while(cin >> intv1 >> intv2){
        cout << intv1 << " " << intv2 <<" ";
        if(intv2 < intv1){
            int temp = intv2;
            intv2 = intv1;
            intv1 = temp;
        }
        int max_cycle = 0;
        for(int i=intv1; i <= intv2; i++){
            int cycle = 1;
            int cur = i;
            while(cur != 1){
                if(cur %2 != 0){
                    cur = 3 * cur + 1;
                }
                else {
                    cur /= 2;
                }
                cycle ++;
            }
            if (cycle > max_cycle) max_cycle = cycle;
        }
        cout << max_cycle << endl;
    }
}
