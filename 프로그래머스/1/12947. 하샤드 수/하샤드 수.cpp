#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int a = 0;
    int b = x;
    while(b>0){
        a+=b%10;
        b/=10;
    }
    if(x%a==0){
        answer = true;
    }
    else{
        answer =false;
    }
    return answer;
}