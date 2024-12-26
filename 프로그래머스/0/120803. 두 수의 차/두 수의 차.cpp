#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int answer = num1 - num2;
    return answer;
}
int main() {
    int firstnum;
    int secondnum;

    cout << "enter firstnumber : " << endl;
    cin >> firstnum;
    cout << "enter secondnumber : " << endl;
    cin >> secondnum;

    solution(firstnum, secondnum);

    cout << "firstnumber : " << firstnum << endl;
    cout << "secondnumber : " << secondnum << endl;
    cout << "result : " << solution(firstnum, secondnum);

    return 0;
}