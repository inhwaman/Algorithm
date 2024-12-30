#include <string>
#include <vector>
using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double sum = 0;
    double vecsize = numbers.size();
    for(int i=0;i<vecsize;i++){
        sum += numbers[i];
    }
    answer = sum/vecsize;
    return answer;
}