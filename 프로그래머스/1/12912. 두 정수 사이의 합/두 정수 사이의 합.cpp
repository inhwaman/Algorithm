#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int x,y;
    x = a-b;
    y = b-a;
    if (a>b){for(int i = 0;i<x+1;i++){
        
        answer+=a;
        a-=1;
    }}else if(b>a){
        for(int i = 0;i<y+1;i++){
            
            answer+=a;
            a+=1;
        }
    }else if(a==b){
        answer = a;
    }
    return answer;
}