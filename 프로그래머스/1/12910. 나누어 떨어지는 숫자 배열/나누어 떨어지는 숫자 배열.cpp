#include <string>
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;


vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    //arr의 값을 %divisor 했을때 0인 애들을 answer로 이동
    //그 애들을 오름차순으로 전환 sort
    //없으면 -1 반환
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<arr.size();i++){
        if (arr[i]%divisor==0){
        answer.push_back(arr[i]);
    }
        
    }if (answer.empty()){
            answer.push_back(-1);
        }
    return answer;
}