#include<iostream>
int main(){


    bool a = true;
    bool b = false;

    int c = 3;
    if(c == 3){
        std::cout<<c<<std::endl;
    } else{
        std::cout<<"c is not 3"<<std::endl;
    }
    if(!a){
        std::cout<<"this is true\n";
    } else{
        std::cout<<"this is false";
    }

    return 0;
}