#include<iostream>
int main(){


    bool a = true;
    bool b = false;

    int c = 4;

    bool x = (c==3);
    int score = 0;

    std::cout<<"please enter score: ";
    std::cin>>score;//輸入
    if(100 == score){
        std::cout<<"A+"<<std::endl;
    }  else if (score>=90){
        std::cout<<"A"<<std::endl;
    }  else if (score>=80){
        std::cout<<"B"<<std::endl;
    }  else if (score>=70){
        std::cout<<"C"<<std::endl;
    }  else if (score<70){
        std::cout<<"F"<<std::endl;
    }

    return 0;
}