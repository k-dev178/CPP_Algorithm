#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<char> v;
    vector<string> answer;
    int left,right,n;

    cin >> n;
    for(int k = 0; k < n; k++){
        cin >> s;
        
        //곧바로종료
        if(s[0] == ')' || s[-1] == '('){
            cout << "NO\n";
            continue;
        }

        left = 0; right = 0;
        for(int i = 0; i < s.length(); i++){
            //cout << "s[" << i << "]: " << s[i] << endl;

            //계산
            if(s[i] == '('){
                left++;
            } else{
                right++;
            }
        }

        //cout << left << ":" << right << '\n';
        cout << (left == right ? "YES\n" : "NO\n");
    }

    return 0;
}