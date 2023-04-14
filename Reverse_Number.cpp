#include <iostream>
using namespace std;
void reverse(int num)
{
    int reversed = 0;
    while (num != 0)    
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout<<"\n Reversed Number is : "<<reversed;
}
int main() 
{
    int num;
    cout << "\n Enter a Integer : ";
    cin >> num;
    reverse(num);
    return 0;
}