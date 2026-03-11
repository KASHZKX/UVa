#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>countries;
    int num;
    string country;
    cin >> num;
    for(int i = 0; i < num; i ++){
        cin >> country;
        if(countries.find(country) == countries.end()){
            countries[country] = 1;
        }
        else{
            countries[country] += 1;
        }
        getline(cin, country);
        cout << country <<endl;
    }
    for(map<string, int>::iterator it = countries.begin(); it != countries.end(); it++){
        cout << it->first << " " << it->second <<endl;
    }
    return 0;
}
