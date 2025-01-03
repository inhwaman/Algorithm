#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}
long long solution(long long n) {
    long long answer = 0;
    vector<long long>num(0);
    while (n > 0) {
        num.push_back(n % 10);
        n -= n % 10;
        n /= 10;
    }
    sort(num.begin(), num.end(), compare);
    for (int i = 0;i < num.size();i++) {
        answer = answer * 10 + num[i];
    }

    return answer;
}

int main() {
    cout << solution(1254367) << endl;;

}