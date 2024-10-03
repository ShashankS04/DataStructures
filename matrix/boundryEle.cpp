#include<iostream>
using namespace std;
const int r=4,c=4;
void Bound(int m[r][c])
{
 if(r==1)
 {
    for (int i = 0; i < c; i++)
    {
     cout<<m[0][i]<<" ";
    }
 }
 else if(c==1)
 {
    for(int i = 0; i < r; i++)
    {
        cout<<m[i][0]<<" ";
    }
 }
 else{
    for(int i=0;i<c;i++)
    cout<<m[0][i]<<" ";
    for(int i=1;i<r;i++)
    cout<<m[i][c-1]<<" ";
    for(int i=c-2;i>=0;i--)
    cout<<m[r-1][i]<<" ";
    for(int i=r-2;i>=1;i--)
    cout<<m[i][0]<<" ";
 }
}
int main(int argc, char const *argv[])
{
    int m[r][c]={{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
    Bound(m);
    return 0;
}
