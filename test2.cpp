#include <iostream>

int main(){

    int i;
    int a[5]={12,56,85,45,55};

    for(i = 0;i < 5; i+=2){
        std::cout<<a[i]<<std::endl;

    }

    std::cout<<"--------\n";
    
    i=0;
    std::cout<<++i;
    std::cout<<" wait\n";
    i=0;
    std::cout<<"ready\n";
    std::cout<<i++;
    std::cout<<" end\n";
    return 0;

}