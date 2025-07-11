#include<iostream>
int main(){

    int scores[5]={65,89,78,64,55};

    std::cout<<scores[2]<<std::endl;
    scores[3]=99;
    std::cout<<scores[3]<<std::endl;
    scores[7]=8;
    return 0;

}