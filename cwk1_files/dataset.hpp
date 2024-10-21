// COMP2811 Coursework 1: QuakeDataset class

#pragma once

#include <vector>
#include "quake.hpp"

class QuakeDataset
{
  public:
    QuakeDataset() = default;
    QuakeDataset(const std::string& filename) { loadData(filename); } 
    void loadData(const std::string& filename) const;
    int size() const { return this->size(); }
    Quake operator [] (int) const;
    Quake strongest() const;
    Quake shallowest() const;
    Quake meanDepth() const;
    Quake meanMagnitude() const;
    // Specify prototypes or inlined methods here
    // (see UML diagram for what is required)

  private:
    std::vector<Quake> data;
};
