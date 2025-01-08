#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int>allNum(10);
    for(int i = 0;i<allNum.size();i++){
        allNum[i]=i;
    }
    for(int i = 0;i<numbers.size();i++){
    auto it = find(allNum.begin(),allNum.end(),numbers[i]);
    if(it != allNum.end()){
        allNum.erase(allNum.begin()+(it-allNum.begin()));
    }
    }
    for(int i=0;i<allNum.size();i++){
        answer+=allNum[i];
    }
    
    
    
    return answer;
}