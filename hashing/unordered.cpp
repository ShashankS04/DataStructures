#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["gfs"]=20;
    m["ide"]=30;
    m["course"]=15;
    if(m.find("ide")!=m.end())
        cout<<"Found\n";
    else
        cout<<"Not Found\n";
    for(auto i=m.begin();i!=m.end();i++)
    cout<<i->first<<" "<<i->second<<"\n";
    return 0;
}