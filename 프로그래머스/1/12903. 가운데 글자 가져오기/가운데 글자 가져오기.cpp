#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char>middle(s.begin(),s.end());
    if(middle.size()%2==0){//짝수면
        answer += middle[middle.size()/2-1];
        answer += middle[middle.size()/2];
        
    }else{//홀수면
        answer += middle[middle.size()/2];
    }
    return answer;
}