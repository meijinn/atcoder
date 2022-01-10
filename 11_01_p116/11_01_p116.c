#include <stdio.h> /* standard io 疑似命令 */

int main(void){

    /* 1. 変数宣言 */
    int otsuri,shoji,sei,milk;
    double total,tax;

    /* 2. 変数値 */
    shoji = 1000;
    sei = 198; /* 清涼飲料水一本の値段 */
    milk = 138; /* 牛乳一本の値段 */
    tax = 1.05;

    /* 3. 計算 */
    total = (sei + milk*2)*tax; /* 合計金額の計算(実数) */
    otsuri = shoji - (int)total;

    /* 4. 出力 */
    printf("%d円\n",otsuri); /* int型にキャストした合計金額 */
    
    return (0);
}