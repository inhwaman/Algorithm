#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
string solution(string s) {
    string answer = "";
    vector<char>st(s.begin(),s.end());
    sort(st.begin(),st.end(),compare);
    for(int i=0;i<st.size();i++)
    {
        answer+=st[i];
    }
    return answer;
}