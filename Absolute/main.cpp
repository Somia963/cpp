
#include <bits/stdc++.h>
using namespace std;
int abs_sum(int a[], int len);
int main()
{
int a[20], n, i;
cout << "\nEnter the number of elements : ";
cin >> n;
cout << "\nInput the array elements : ";
for(i=0; i<n; i++)
{
cin >> a[i];
}
cout << "\nThe sum : " << abs_sum(a, n) << endl;
return 0;
}

// Function to calculate absolute sum
int abs_sum(int arr[], int n)
{
sort(arr, arr+n);

int sum=0;
sum += abs(arr[0]+arr[1]);

sum+=abs(arr[n-1]+arr[n-2]);

return sum;
}
