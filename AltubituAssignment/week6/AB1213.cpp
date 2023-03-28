#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int alphabet[26]; // 각 알파벳의 개수 저장하는 배열

int odd_cnt = 0;

int CheckNum(string str)
{

    for (int i = 0; i < str.size(); i++)
    {
        alphabet[str[i] - 'A']++; // str을 한 글자씩 map 하면서 각 알파벳 글자의 개수 확인. 후 alphabet 배열에 개수 저장
    }

    for (int j = 0; j < 26; j++)
    {
        if (alphabet[j] % 2 == 1)
        { // 같은 알파벳의 개수가 홀수
            odd_cnt++;
        }
    }
    return 0;
}

// aabaa
// abccba
// abba
int Palindrome(string str)
{
    string answer;
    string middle;
    // aaccbb 이렇게 있을 때
    if (str.size() % 2 == 0)
    { // input 문자열의 길이가 짝수
        for (int i = 0; i < str.size() / 2; i++)
        { // 앞의 절반만.
            if (alphabet[i] != 0)
            { // 문자가 1개 이상일 때만 출력
                answer = answer + char(i + 'A');
            }
        }
    }

    else
    {

        for (int i = 0; i < str.size(); i++)
        {
            if (odd_cnt % 2 == 1)
            { // 홀수 개인 글자를 가운데에 배치
                middle = str[i];
            }

            answer = answer + str[i];
        }
    }

    cout << answer;

    if (str.size() % 2 == 1)
    { // 홀수면 가운데 글자 출력
        cout << middle;
    }

    reverse(answer.begin(), answer.end());
    cout << answer;
    return 0;
}

int main()
{
    string input;
    cin >> input;
    sort(input.begin(), input.end()); // 정답이 여러 개일 경우 사전순이므로 오름차순으로 정리
    CheckNum(input);
    if (odd_cnt > 1)
    { // 같은 알파벳이 홀수 개인 글자가 2개 이상이면 회문 불가. 하나일 때만 가운데에 넣을 수 있음
        cout << "I'm sorry Hansoo";
    }
    else
    {
        Palindrome(input);
    }

    return 0;
}