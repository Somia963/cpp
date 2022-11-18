#include <iostream>
#include <algorithm>
using namespace std;

int main()

{
int num ,count,flag;
int arr[count];
cin>>count;
for(int i=0;i<count-1;i++){
    cin>>arr[i];
}
   for (int i=0;i<count;i++){
        int index;
    num=i;
    for(int n=i+1;i<count;n++){
        if (arr[n]<arr[num]){
            index = num;
           num =arr[n];
           flag=1;
        }
    }
    if(flag ==1){
    int temp = arr[i];
     arr[i] = num;
     arr[index] =temp;
     }
   }
   for (int i=0;i<count ;i++){
    cout <<arr[i]<<" "<<endl;
   }
    return 0;
}
