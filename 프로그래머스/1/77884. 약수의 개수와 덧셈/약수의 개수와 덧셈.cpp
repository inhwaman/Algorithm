#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) 
{
    int answer = 0;
    int YSZ=0;
    int YSH=0;
    int YSC=0;
    for(int i = left;left <= right;left++)
    {
        for(int i =1;i<=left;i++)
    {
        if(left%i==0)
        {
            YSC+=1;
        }
    }
        if (YSC%2==0)
        {
            YSZ+=left;
        }else
        {
            YSH-=left;
        }
        YSC=0;
     
    }
    answer = YSZ+YSH;
    return answer;
}
//약수의 갯수가 짝수인지 홀수인지 구하기
//짝수면 약짝수에 += 홀수면 약홀수에 -=
//약짝수 + 약홀수 = 앤서