#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num[5];
    int *p;
    p=num;
    p++;
    *p=10;
    p++;
    p=&num[2];
    *p=30;
    p=num+3;
    *p=40;
    p=num;
    *(p+4)=50;
    for(int i=0;i<5;i++)
        cout<<num[i]<<" ";
        return 0;
        getch();
}