#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N;
    int count = 0;
    cin >> N;

    int n[210];
    for (int i = 0; i < N; i++)
    {
        cin >> n[i];
    }

    while (1)
    {
        bool exist_odd = false;

        for (int i = 0; i < N; i++){
            if(n[i]%2 != 0) exist_odd = true;
        }

        if (exist_odd) break;

        for (int j = 0; j < N; j++){
            n[j]/=2;
        }
        count++;
    }
    cout << count << endl;
}