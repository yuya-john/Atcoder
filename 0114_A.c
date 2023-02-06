/*-----------------------------------------------*/
/*-	Distance II                      -*/
/*-----------------------------------------------*/
#include<stdio.h>
#include<string.h>//char strstr(s1, s2) /*s1から文字列s2を探す。見つかったらその位置のアドレスを返す。*/ //char strcat(s1, s2) /*s1とs2を連結する。*/ /*char strncpy(コピー先の文字列変数ポインタ, コピー開始位置を示すポインタ, 開始位置から何文字抽出するかを示す整数)*/
#include<stdlib.h>
#include<time.h>
#include<math.h> //double pow(double, double) ->底、指数の順 //double sqrt(double x); -> ルートの計算
    //rad = deg * M_PI / 180;
#include<ctype.h>//int isupper //int islower //int toupper //int tolower
//'1'-'0' -> 1; 数字を文字に変換する　//scanf("%c", &ch); 文字の読み込み　//strlen 文字列の長さ測定
//複雑なときは紙に書こう //変数はいろいろ作ると考えやすい？
//printf("%4.2s", "abcd"); // "  ab"
/* printf("%4.2f", 3.14);  // "3.14"（"   3.14"ではない） */

int i, j, k;

int getDigits(int value, int m, int n) {
    int mod_value;
    int result;

    /* n桁目以下の桁を取得 */
    mod_value = value % (int)pow(10, n + 1);

    /* m桁目以上の桁を取得 */
    result = mod_value / pow(10, m);

    return result;

}


int main(void){
    int s[10], N, count=0, S;
    s[1]=1;
    for(i=2; i<=9; i++){
        s[i]=0;
    }
    for(i=1; i<=9; i++){
                    printf("%d", s[i]);
                }
                printf("\n");
    scanf("%d", &N);
    S=100000000;
    while(1){

        if(s[1]==s[2] && s[5]==s[6] && s[7]==s[9]){
            count++;
            if(count==N){
                printf("%d\n", S);
                return 0;
            }
        }
        S++;
    }
    return 0;
}