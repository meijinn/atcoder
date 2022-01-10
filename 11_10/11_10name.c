#include <stdio.h>
#include <string.h>

int main(void){

    /* 1. 変数宣言 */
    char fname[50],lname[50] = "";

    /* 2. 変数値 */
    printf("氏名(姓名)を入力してください：");
    scanf("%s %s", lname,fname);

    /* 3. 計算 */
    strcat(lname,fname);
    
    /* 4. 出力 */
    printf("%s\n",lname);   

    return 0;
}