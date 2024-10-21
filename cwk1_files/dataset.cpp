// COMP2811 Coursework 1: QuakeDataset class
#include <stdexcept>
#include "dataset.hpp"

using namespace std;

QuakeDataset::loadData(const std::string& filename){
    
}

QuakeDataset::strongest(){
    double highest = 0;
    int quakeNum = 0;
    for (int i = 0; i < data.size(); i++){
        if (data[i].getDepth() > highest){
            highest = data[i].getDepth();
            quakeNum = i;
        }
    }
    return data[i];
}

QuakeDataset::shallowest(){
    double lowest = data[0].getDepth();
    int quakeNum = 0;
    for (int i = 1; i < data.size(); i++){
        if (data[i].getDepth() < lowest){
            lowest = data[i].getDepth();
            quakeNum = i;
        }
    }
    return data[i];
}

QuakeDataset::meanDepth(){
    double size = data.size();
    double total = 0;
    for (int i = 0; i < size; i++){
        total = total + data[i].getDepth();
    }

    return total/size;
}

QuakeDataset::meanMagnitude(){
    double size = data.size();
    double total = 0;
    for (int i = 0; i < size; i++){
        total = total + data[i].getMagnitude();
    }

    return total/size;
}