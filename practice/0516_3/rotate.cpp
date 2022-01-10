#include <bits/stdc++.h>

using namespace std;

int main(){
    char moji[3];
    char tmp;
    for(int i = 0; i < 3 ; i++){
        cin >> moji[i];
    }
    tmp = moji[0];
    moji[0] = moji[1];
    moji[1] = moji[2];
    moji[2] = tmp;

    for(int i = 0; i < 3 ; i++){
        cout << moji[i];
    }
    cout << endl;
}