#include <bits/stdc++.h>
using namespace std;
int main()
{
int temp ,n;
int absolute  ;


cin >> n;

for(int i = 0; i<n ; i++){

   cin >> temp;
   if (temp > 0){
   absolute+=temp;
   } else if (temp<0){

   temp =(-1)*temp;
   }
}

cout << "absolute is: " << absolute << endl;
}

