#include <stdio.h>

int main(void){

    /* 1. 変数宣言 */
    int num[10] = {};
    int i = 0;

    /* 2. 変数値 */
    /* 3. 計算 */
    for (i = 0; i < 10; i++){
        printf("%d番目の数字を入力してください：", i+1);
        scanf("%d",&num[i]);
    }

    /* 4. 出力 */
    for (i = 10; i > 0; i--){
        printf("%2.0d\n",num[i-1]);
    }
    
    return 0;
}