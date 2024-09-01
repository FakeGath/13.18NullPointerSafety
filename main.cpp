#include <iostream>

int main(){

    std::cout<<"Verbose Nullptr check: "<<std::endl;
    int * p_number{}; //p_number initialized to nullptr
    std::cout<<"pnumber check nullptr: "<<p_number<<std::endl;

    if (!(p_number==nullptr))
    {
        std::cout<<"p_number points to a Valid Address: "<< p_number<<std::endl;

    }else{
        std::cout<<"p_number points to a Invalid Address: "
        <<std::endl;
    }
    
    if (!(p_number==nullptr))
    {
        delete p_number;
        p_number= nullptr;
    }


    std::cout<<"pnumber check nullptr: "<<p_number<<std::endl;
    

}