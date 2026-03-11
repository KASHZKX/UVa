#include <iostream>
#include <cstdio>   // scanf, printf
#include <cmath>    // sqrt, pow, abs
#include <vector>
#include <map>
#include <algorithm> // sort, max, min
#include <sstream>
using namespace std;

int main(){
   int testcases;
   scanf("%d",&testcases);
   for(int i=0; i<testcases; i++){
        int relatives;
        scanf("%d",&relatives);
        vector<int> streets(relatives,0);
        for(int j=0; j<relatives; j++){
            scanf("%d",&streets[j]);
        }
        sort(streets.begin(), streets.end());
        int middle = streets[(relatives/2)];
        int sum=0;
        for(auto it=streets.begin(); it!=streets.end(); it++){
            sum+=abs(*it-middle);
        }
        printf("%d\n",sum);
   }
   return 0;
}
