#include <iostream>
#include <stack>

using namespace std;
const int MAX=10000; //스택 배열 최대 크기

int main(){
//시간 초과 방지
 ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  //입력
    int n, x;
    stack<int> s;
    string cmd;


    cin >> n;
    while(n--) {
        cin >> cmd;
        if(cmd == "push") {
            cin >> x;
            s.push(x);
        }
        else if(cmd == "pop") {
            if(s.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if(cmd == "size") {
            cout << s.size() << '\n';
        }
        else if(cmd == "empty") { //비어 있으면 1, 아니면 0 리턴
            cout << s.empty() << '\n';
        }
        else if(cmd == "top") {
            if(s.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << s.top() << '\n';
            }
        }
    }
    return 0;
}