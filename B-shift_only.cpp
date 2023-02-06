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
int main() {
    int N, a[250], i;
    cin >> N;
    for (i=1; i<=N; i++) cin >> a[i];
    int res = 0;
    while(1){
        bool exist_odd = false;
        for(i=1; i<=N; i++){
            if(a[i]%2!=0)exist_odd = true;
        }
        if(exist_odd)break;
        for(i=1; i<=N; i++){
            a[i] /= 2;
        }
        res++;
    }
    cout << res << endl;
}