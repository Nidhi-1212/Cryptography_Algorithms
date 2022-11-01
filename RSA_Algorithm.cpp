#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int greatest_common_divisor(int m,int p)
{
    int temp;
    while(1){
        temp=m%p;
        if(temp==0)
            return p;
        m=p;
        p=temp;
    }
}
int main()
{

    double l=9;
    double k=45;
    double t=l*k;
    double phi=(l-1)*(k-1);
    double e=6;
    while(e<phi){//here e is public key
    if(greatest_common_divisor(e,phi)==1)
        break;
    else
        e++;
}
int h=2;
double d=(1+(h*phi))/e;// Here d is private key
double msg=19;
cout<<"Message Data is::--"<<msg;
double c=pow(msg,e);
c=fmod(c,t);
cout<<"Encrypted data is::--"<<c;
double m=pow(c,d);
m=fmod(m,t);
cout<<"Original Data"<<m;
}
