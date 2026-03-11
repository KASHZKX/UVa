#include <iostream>
#include <vector>
using namespace std;

int main(){
    string line;
    vector<string> matrix;
    int longest = 0;
    while(getline(cin, line)){
        matrix.push_back(line);
        if(longest < line.size()){
            longest = line.size();
        }
    }
    for(int i = 0;i < longest; i++){
        for(int j = matrix.size()-1; j >= 0; j--){
            if(matrix[j].size() > i){
                cout << matrix[j][i];
            }
            else{
                cout <<" ";
            }
        }
        cout << endl;
    }
    return 0;

}
