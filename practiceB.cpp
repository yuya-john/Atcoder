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
    int a, b, product;
    string s;
    cin >> s;
    int counter = 0;
    if (s[0]=='1') ++counter;
    if (s[1]=='1') ++counter;
    if (s[2]=='1') ++counter;
    cout << counter << endl;
}