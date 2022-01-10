#include <stdio.h>

int main(void){

    /* 1. 変数宣言 */
    int year;
    int year_calc(int);
    
    /* 2. 変数値 */
    printf("西暦を入力してください：");
    scanf("%d",&year);
    
    /* 3. 計算 */
    year_calc(year);
    
    /* 4. 出力 */
    return 0;
}

int year_calc(int kari_year){

    if (kari_year%2 != 0){
        printf("五輪開催無し\n");
    } else if(kari_year%4 != 0){
        printf("冬季五輪開催\n");
    } else{
        printf("夏季五輪開催\n");
    }
    return 0;
}