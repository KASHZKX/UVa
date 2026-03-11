#include <bits/stdc++.h>
using namespace std;

void bangla(long long int num){
    if(num >= 10000000){
        bangla(num/10000000);
        cout << " kuti";
        num %= 10000000;
    }
    if(num >= 100000){
        int lakh = num / 100000;
        cout << " " << lakh << " lakh";
        num -= lakh * 100000;
    }
    if(num >= 1000){
        int hajar = num / 1000;
        cout << " " << hajar << " hajar";
        num -= hajar * 1000;
    }
    if(num >= 100){
        int shata = num / 100;
        cout << " " << shata << " shata";
        num -= shata * 100;
    }
    if(num) cout << " " << num;
}

int main(){
    long long int number;
    int no = 1;
    while(cin >> number){
        cout << no << ".";
        if(number == 0){
            cout <<" 0" <<endl;
            no++;
            continue;
        }
        bangla(number);
        cout <<endl;
        no++;
    }
}
