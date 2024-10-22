// COMP2811 Coursework 1: QuakeDataset class
#include <stdexcept>
#include "csv.hpp"
#include "dataset.hpp"

using namespace std;

void QuakeDataset::loadData(const std::string& filename){
    csv::CSVReader reader(filename);
    for (auto& row: reader) {
        string time = row["time"].get<>();
        double latitude = row["latitude"].get<double>();
        double longitude = row["longitude"].get<double>();
        double depth = row["depth"].get<double>();
        double magnitude = row["mag"].get<double>();
        data.push_back(Quake(time, latitude, longitude, depth, magnitude));
}
}

Quake QuakeDataset::operator [] (int index) const{
    if (index < 0 || index >= data.size()){
        throw std::invalid_argument("Index out of bounds");
    } else {
        return data[index];
    }
}

Quake QuakeDataset::strongest() const{
    if (data.size() == 0){
        throw std::invalid_argument("There is no data");
    } else {
        double highest = 0;
        int quakeNum = 0;
        for (int i = 0; i < data.size(); i++){
            if (data[i].getDepth() > highest){
                highest = data[i].getDepth();
                quakeNum = i;
            }
        }
        return data[quakeNum];
    }
}

Quake QuakeDataset::shallowest() const{
    if (data.size() == 0){
        throw std::invalid_argument("There is no data");
    } else {
        double lowest = data[0].getDepth();
        int quakeNum = 0;
        for (int i = 1; i < data.size(); i++){
            if (data[i].getDepth() < lowest){
                lowest = data[i].getDepth();
                quakeNum = i;
            }
        }
        return data[quakeNum];
    }
}

double QuakeDataset::meanDepth() const{
    if (data.size() == 0){
        throw std::invalid_argument("There is no data");
    } else {
        float size = data.size();
        float total = 0;
        for (int i = 0; i < size; i++){
            total = total + data[i].getDepth();
        }

        return total/size;
    }
}

double QuakeDataset::meanMagnitude() const {
    if (data.size() == 0){
        throw std::invalid_argument("There is no data");
    } else {
        double size = data.size();
        double total = 0;
        for (int i = 0; i < size; i++){
            total = total + data[i].getMagnitude();
        }

        return total/size;
    }
}