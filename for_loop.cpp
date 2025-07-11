#include<iostream>
#include<vector>
int main(){
    int i;
    int a[5]={12,56,85,45,55};
    std::vector<int> b;
    for(i = 0;i < 5; i+=1){
        std::cout<<a[i]<<std::endl;
        b.push_back(a[i]);
        if(i%2==0){
            b.push_back(a[i]+1);
        }  else {
            b.push_back(a[i]);
        }
    }
    std::cout<<"----"<<std::endl;
    for(i = 0;i <b.size(); i++){
        std::cout<<b[i]<<std::endl;
    }
    return 0;
}