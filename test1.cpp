#include<iostream>
int main(){


    int change_money = 388 ;
    int c =change_money/100;
    int q=change_money%100/50;
    int b=(change_money%100-50*q)/10;
    int a=change_money%10;
    int s=a/5;
    a=a%5;
    std::cout<<"找你"<<c<<"個100元"<<q<<"個50元"<<b<<"個10元"<<s<<"個5元"<<a<<"個1元";
    return 0;
}