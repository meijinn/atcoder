#include <stdio.h>

int main(void){

    /* 1. 変数宣言 */
    int year;

    /* 2. 変数値 */
    printf("西暦年を入力してください：");
    scanf("%d",&year);

    /* 3. 計算 */
    /*
    if(year%2 == 0 && year%4 != 0) printf("冬季オリンピック開催です\n");
    if(year%4 == 0) printf("夏季オリンピック開催です\n");
    if(year%2 != 0) printf("五輪なし\n");
    */
    //計算数が少なく処理が早い
    if(year%2 != 0){
        printf("五輪なし．\n");
    } else if(year%4 != 0){
        printf("冬季オリンピック開催です．\n");
    } else {
        printf("夏季オリンピック開催です．\n");
    }

    /* 4. 出力 */
    return 0;

}