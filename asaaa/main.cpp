#include <iostream>

using namespace std;

int main()

{

int N, M,last_digit_N,last_digit_M,sum;



cin >> N;

cin >> M;

last_digit_N= N%10;

last_digit_M= M%10;

sum = last_digit_N + last_digit_M;


cout<<sum<<endl;

}
