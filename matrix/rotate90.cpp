#include<iostream>
#include<algorithm>
using namespace std;
const int n=4;
void rotate(int m[n][n])
{
  for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)
  swap(m[i][j],m[j][i]);
  for(int i=0;i<n;i++)
  {
    int low=0,high=n-1;
    while(low<high)
    {
        swap(m[low][i],m[high][i]);
        low++;
        high--;
    }
  }
}
int main()
{
    int m[n][n]={{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
    rotate(m);
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    cout<<m[i][j]<< " ";
    cout<<"\n";
    }
}