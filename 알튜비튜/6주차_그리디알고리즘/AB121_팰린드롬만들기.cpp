#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int alphabet[26];
int temp[26];



int CheckNum(string str){
    int odd_cnt=0;

    for (int i=0; i<str.size(); i++){
        alphabet[str[i] - 'A']++; //str을 한 글자씩 map 하면서 각 알파벳 글자의 개수 확인. 후 alphabet 배열에 개수 저장
    }
    
    for(int j = 0; j < 26; j++){
        if(alphabet[j] % 2 == 1) { //같은 알파벳의 개수가 홀수
            odd_cnt++;
        }
    }  

    if(odd_cnt>1){ //같은 알파벳이 홀수 개인 글자가 2개 이상이면 회문 불가. 하나일 때만 가운데에 넣을 수 있음
        cout << "I'm sorry Hansoo";
        
    }
 

    return 0;

        
}

 int Palindrome(string str){

    for(int i=0;i<26;i++){
        if(alphabet[i])
        cout << alphabet[i];
    }
    return 0;
}



int main(){
    string input;
    cin>>input;
    sort(input.begin(), input.end()); //정답이 여러 개일 경우 사전순이므로 오름차순으로 정리
    CheckNum(input);
    Palindrome(input);
    return 0;
    
} 