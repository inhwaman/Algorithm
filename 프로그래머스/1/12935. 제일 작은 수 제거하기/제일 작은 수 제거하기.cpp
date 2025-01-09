#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int  b){
        return a>b;
    }
vector<int> solution(vector<int> arr) 
{
    vector<int> answer(arr);
    
    sort(arr.begin(),arr.end(),compare);
    
    int delNum;
    delNum=arr[arr.size()-1];
    
    for(int i =0;i<answer.size();i++){
        if(delNum==answer[i]){
            answer.erase(answer.begin()+i);
        }
    }
    if (answer.size()<1){
        answer.push_back(-1);
    }
    
    
    return answer;
}