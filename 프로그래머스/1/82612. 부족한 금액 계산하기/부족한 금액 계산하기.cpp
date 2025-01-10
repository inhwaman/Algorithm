using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long PriceCount=0;
    for(int i = 1; i<=count;i++)
    {
        PriceCount+=price*i;
    }
    if(PriceCount>money)
    {
        answer = PriceCount-money;
    }else
    {
        answer = 0;
    }

    return answer;
}
//카운트++
//+=프라이스*카운트
//프카>머니,리턴프카-머니
//아니면0