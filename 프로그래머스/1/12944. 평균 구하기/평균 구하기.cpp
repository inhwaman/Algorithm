#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum =0 ;
    double vecsize = arr.size() ;
    for(int i = 0; i<vecsize;i++){
        sum+=arr[i];
    }
    answer = sum/vecsize;
    return answer;
}