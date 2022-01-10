#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,total,tmp;
    int res[100];
    int a,b,c;
    cin >> N;

    for (a = 1 ; a < 100 ; a++){
        for(b = 1 ; b < 100 ; b++){
            for(int c=1 ; c < 100 ;c++){
                    total = a*2^b+c;
                    tmp = a+b+c;
                    if(total == N){
                        res[a] = tmp;
                    }
            }
        }
    }
    cout << res[0] << endl;
}