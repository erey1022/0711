#include<iostream>
int main(){


    int change_money = 378 ;
    int hundred =change_money/100;
    int fifty=change_money%100/50;
    int tens=(change_money%100-50*fifty)/10;
    int a=change_money%10;
    int five=a/5;
    a=a%5;
    std::cout<<"找你"<<hundred<<"個100元"<<fifty<<"個50元"<<tens<<"個10元"<<five<<"個5元"<<a<<"個1元";
    return 0;
}