#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,i,c,sp;
    num=3;
    for(i=1; i<=num;i++)
        {
            for(sp=num-i; sp>=1; sp--)
                cout<<" ";
            for(c=1; c<=i; c++)
                cout<<c;
            for(c=i-1; c>=1; c--)
                cout<<c;
            cout<<"\n";
        }
    for(i=1; i<=num; i++)
        {
            for(sp=i; sp>=1; sp--)
                cout<<" ";
            for(c=1; c<=(num-i); c++)
                cout<<c;
            for(c=num-i-1; c>=1; c--)
                cout<<c;
            cout<<"\n";
        }
}
