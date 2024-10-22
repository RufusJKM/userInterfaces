// COMP2811 Coursework 1: QuakeDataset class

#pragma once

#include <vector>
#include "quake.hpp"

class QuakeDataset
{
  public:
    QuakeDataset(): data() {}
    QuakeDataset(const std::string& filename) { loadData(filename); } 
    void loadData(const std::string& filename) const;
    int size() const { std::cout << "Data size: " << data.size() << std::endl;
    return this->data.size(); }
    Quake operator [] (int index) const; 
    Quake strongest() const;
    Quake shallowest() const;
    double meanDepth() const;
    double meanMagnitude() const;
    // Specify prototypes or inlined methods here
    // (see UML diagram for what is required)

  private:
    std::vector<Quake> data;
};
