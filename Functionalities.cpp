#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace("1", std::make_shared<CarUnit>("Maruti", 5000, CarType::SEDAN, 150, 25, GearType::PRNDL));
    data.emplace("2", std::make_shared<CarUnit>("Maruti", 6000, CarType::HATCHBACK, 200, 35, GearType::TIPTRONIC));
    data.emplace("3", std::make_shared<CarUnit>("Maruti", 7000, CarType::SUV, 250, 40, GearType::CLASSIC));
    data.emplace("4", std::make_shared<CarUnit>("Maruti", 8000, CarType::HATCHBACK, 300, 30, GearType::CLASSIC));
    data.emplace("5", std::make_shared<CarUnit>("Maruti", 9000, CarType::SEDAN, 250, 25, GearType::PRNDL));

}

void SameGearSystem(Container &data)
{
    auto ans = std::all_of(data.begin(), data.end(),
    [](const auto& p){
        return p.second->gearType() != GearType::CLASSIC;
    });
    std::cout<<"Condition is: "<<std::boolalpha<<ans<<'\n';
}

Container Match(Container &data, CarType type)
{
    Container result;
    auto ans2 = std::copy_if(data.begin(), data.end(), std::inserter(result, result.begin()),
    [&](const auto& p){
        return p.second->carType() == type;
    });
    return result;
}

float PriceOfLowestSpeed(Container &data)
{
    auto ans3 = std::min_element(data.begin(), data.end(), 
    [](auto& temppair, auto& pair){
        return temppair.second->carSpeed() < pair.second->carSpeed();
    });
    float price = (*ans3).second->carPrice();
    return price;
}

int FindRPM(Container &data, std::string id)
{
    auto ans4 = std::find_if(data.begin(), data.end(),
    [&](auto& pair){
        return pair.first == id;
    });
    int rpm = (*ans4).second->carRpm();
    return rpm;
}

int PriceAboveThreshold(Container &data, float threshold)
{
    auto ans5 = std::count_if(data.begin(), data.end(),
    [&](auto& pair){
        return pair.second->carPrice() < threshold;
    });
    return ans5;
}
