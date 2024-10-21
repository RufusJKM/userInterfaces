// COMP2811 Coursework 1: QuakeDataset class

#pragma once

#include <vector>
#include "quake.hpp"

class QuakeDataset
{
  public:
    QuakeDataset(): {}
    QuakeDataset(String filename): { loadData(filename)}
    
    virtual void loadData(String filename) const;
    int size() const { return data.size(); }
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
