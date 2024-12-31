#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(n%answer!=1){
        answer+=1.0;
    }
    return answer;
}