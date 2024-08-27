#include<iostream>
#include<vector>
#include<memory>
#include<thread>
#include<future>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include "CarUnit.h"

using CarPointer = std::shared_ptr<CarUnit>;
using pairType = std::pair<std::string, CarPointer>;
using Container = std::unordered_map<std::string, CarPointer>;

void CreateObjects(Container& data);

void SameGearSystem(Container& data);

Container Match(Container& data, CarType type);

float PriceOfLowestSpeed(Container& data);

int FindRPM(Container& data, std::string id);

int PriceAboveThreshold(Container& data, float threshold);