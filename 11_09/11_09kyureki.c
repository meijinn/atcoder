#include <stdio.h>

int main(void){

    /* 1. 変数宣言 */
    int month;


    /* 2. 変数値 */
    printf("月を入力して下さい：");
    scanf("%d",&month);


    /* 3. 計算 */
    switch (month){
    case 1:
        printf("睦月\n");
        break;
    case 2:
        printf("如月\n");
        break;
    case 3:
        printf("弥生\n");
        break;
    case 4:
        printf("卯月\n");
        break;
    case 5:
        printf("皐月\n");
        break;
    case 6:
        printf("水無月\n");
        break;
    case 7:
        printf("文月\n");
        break;
    case 8:
        printf("葉月\n");
        break;
    case 9:
        printf("長月\n");
        break;
    case 10:
        printf("神無月\n");
        break;
    case 11:
        printf("霜月\n");
        break;
    case 12:
        printf("霜月\n");
        break;
    default:
        printf("そんな月はない．\n");
        break;
    }
    
    return 0;

}