#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int inputs;
    cin >> inputs;
    for(int i = 0; i < inputs; i++){
        int players, winner;
        double prob, winrate;
        cin >> players >> prob >> winner;
        winrate = pow(1-prob, winner- 1) * prob / ( 1 - (pow(1-prob, players)));
        cout << fixed << setprecision(4) << winrate << endl;
    }
}
