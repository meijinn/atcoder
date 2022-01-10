# include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    int a[110];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];

    int num[110] = {0};
    for (int i = 0; i < N; i++){
        num[a[i]]++;
    }

    int count = 0;

    for (int i = 0; i < 101; i++){
        if (num[i]){
            count++;
        }
    }
    cout << count << endl;
}