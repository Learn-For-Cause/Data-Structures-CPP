#include<iostream>
using namespace std;
int count_digit(int num)
{
static int count=0;
    if(num>0)
    {

        if(num%10==0)
        count++;

        count_digit(num/10);
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The number of Zeros in the Given Number is "<<count_digit(n);
}