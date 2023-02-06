/*-----------------------------------------------*/
/*-	Practice B.cpp                      -*/
/*-----------------------------------------------*/
/*　メモ
・文字列の長さ: s.size()
・文字列の連結: s + t　(例: s = "AtCoder", t = "Jobs" -> s + t = "AtCoderJobs")
*/
#include <iostream>
#include <string>
using namespace std;
int i, j, k;
int A, B, counter=0, n[7], N;

bool func(int N){ //ある5桁の整数が回文数か判定する
    for (i=6; 0<i; i--){ //各桁の数を取得
        n[i] = N % 10;
        N = N / 10;
    }
    if (n[1]==n[6] && n[2]==n[5]) {
        return true;
    } else return false;
}

int main() {
    cin >> A >> B;
    //cout << A << " " << B << endl;

    for(j=A; j<=B; j++){
        //cout << j << endl;
        if (func(j)) counter++;
    }
    cout << counter << endl;
}