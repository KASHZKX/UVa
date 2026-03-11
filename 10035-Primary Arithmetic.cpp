#include <bits/stdc++.h>
using namespace std;

int carry(int num1, int num2){
    if(num1 + num2 >= 10){
        return 1;
    }
    return 0;
}

int main(){
    unsigned int num1, num2;
    while(cin >> num1 >> num2){
        if(num1 == 0 && num2 == 0){
            break;
        }
        int totalcarry = 0;
        int carrybit = 0;
        while(num1!=0 || num2!=0){
            if(carrybit){
                carrybit = carry(num1%10, num2%10+1);
            }
            else{
                carrybit = carry(num1%10, num2%10);
            }
            totalcarry += carrybit;
            num1 /= 10;
            num2 /= 10;
        }
        if (totalcarry == 0) cout << "No carry operation." << endl;
        else if (totalcarry == 1) cout << "1 carry operation." << endl;
        else cout << totalcarry << " carry operations." << endl;
    }

    return 0;
}
