//write a progam to find the  max element from the list
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={1,2,8,4,9};
    int maxx=INT_MIN;
    for(int i=0;i<5;i++)
    {
    if(l.front()> maxx)
    {
        maxx=l.front();

    }
    l.pop_front();
    }
    cout<<"Maximum element is-"<<maxx<<endl;
}
