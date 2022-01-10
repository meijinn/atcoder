#include <bits/stdc++.h>

using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string S;
    cin >> S;

    //後ろから解く代わりに全ての文字列を「左右反転」する
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++) reverse(divide[i].begin(),divide[i].end());

    //端から切っていく
    bool can = true;
    for (int i = 0; i < S.size();){
        bool can2 = false;//4個の文字列たちどれかでdivideできるか
        for (int j = 0; j < 4; j++){
            string d = divide[j];
            if(S.substr(i,d.size()) == d){//dでdivideできるか
                can2 = true;
                i += d.size();//divide出来たらiを進める
            }
        }
        if(!can2){//divide出来なかったら
            can = false;
            break;
        }
    }
    
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
}