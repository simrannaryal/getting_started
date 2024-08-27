#include "Functionalities.h"

int main(){
    Container data;
    CreateObjects(data);
    std::future<void> f1 = std::async(&SameGearSystem, std::ref(data));
    f1.get();
    std::future<Container> f2 = std::async(&Match, std::ref(data), CarType::HATCHBACK);
    Container n = f2.get();
    std::cout<<"Car instances are: \n";
    for(auto i: n){
        std::cout<<*i.second<<'\n';
    }
    std::future<float> f3 = std::async(&PriceOfLowestSpeed, std::ref(data));
    std::cout<<"Lowest car price is: "<<f3.get()<<'\n';
    std::future<int> f4 = std::async(&FindRPM, std::ref(data), "2");
    std::cout<<"RPM of given id is: "<<f4.get()<<'\n';
    std::future<int> f5 = std::async(&PriceAboveThreshold, std::ref(data), 7000);
    std::cout<<"Count of cars above threshold price is: "<<f5.get()<<'\n';
}