# include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;
    int a[110];
    //ソートする配列
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];
    //カードの数字のデータを配列に格納する．

    sort(a,a+N,greater<int>());
    //大きい順にソートする．greater<int>()で降順．これが無いと小さい昇順にソートされる．
    
    int Bob = 0;
    int Alice = 0;
    //各々の得点
    
    for (int i = 0; i < N; i++){
        if (i % 2 == 0){
            Alice += a[i];
        }
        //偶数の添え字の要素はアリスに要素の得点を加える，0スタートで先に取るから

        else{
            Bob += a[i];
        }
        //奇数の添え字の要素はボブに要素の得点を加える
    }
    //N回行うと配列の全要素を満たす．
    cout << Alice - Bob << endl;
}