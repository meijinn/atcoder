#include <bits/stdc++.h>

using namespace std;

    struct mountain
    {
        char name[30];
        int height;
    };

int main(void){
    int N,tmp;
    struct mountain data[N];
    cin >> N;
    for(int i = 0; i < N;i++){
        cin >> data[i].name;
        cin >> data[i].height;
    }

    for(int i = 0; i < N ;i++){
        for(int j = 0; j < N ; j++){
            if(data[i].height > data[j].height){
                tmp = data[i].height;
                data[i].height = data[j].height;
                data[j].height = tmp;
            }
        }
    }

    for(int i = 0; i < 1 ; i++)
    {
        printf("%s\n",data[1].name);
    }
    //return 0;
}