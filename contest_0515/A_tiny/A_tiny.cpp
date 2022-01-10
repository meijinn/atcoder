#include <bits/stdc++.h>

using namespace std;

int main(){
    int A[10];
    for(int i = 0;i < 3;i++) cin >> A[i];

    sort(A,A+3);

    int dif01 = A[1]-A[0];
    int dif21 = A[2]-A[1];

    if(dif01 == dif21){
        cout << "Yes" << endl;
    }
    if(dif01 != dif21)
    {
        cout << "No" << endl;
    }
}