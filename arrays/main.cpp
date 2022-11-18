#include <cctype>//For C++ isDigit() function
#include <algorithm>
#include <iostream>
#include <cmath>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

#define charToInt(c) (c-'0')
int main()
{
 int sum = 0;

string str ;
cin>> str;


for (int i=0; i<str.length(); ++i)
 {
 //Check if char is digit
 if (isdigit(str[i])){
 //dispaly digit characters


//convert charater to int
 int a = charToInt(str[i]);

//Sum digits
 sum = sum + a;
 }

}
 //Display Sum
 cout<<sum<<endl;

return 0;
}

