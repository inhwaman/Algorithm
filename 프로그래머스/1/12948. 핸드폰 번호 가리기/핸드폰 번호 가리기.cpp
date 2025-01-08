#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    vector<char>Num (phone_number.begin(),phone_number.end());
    for(int i = 0;i<Num.size()-4;i++){
        Num[i]='*';
    }
    string answer(Num.begin(),Num.end());
    return answer;
}