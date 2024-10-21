// COMP2811 Coursework 1: Quake class

#include <stdexcept>
#include "quake.hpp"

using namespace std;


Quake::Quake(const string& tm, double lat, double lon, double dep, double mag):
  time(tm), latitude(lat), longitude(lon), depth(dep), magnitude(mag)
{
  if (latitude < MIN_LATITUDE || latitude > MAX_LATITUDE) {
    throw std::invalid_argument("Latitude out of range");
  }

  if (longitude < MIN_LONGITUDE || longitude > MAX_LONGITUDE) {
    throw std::invalid_argument("Longitude out of range");
  }

  if (depth < 0){
    throw std::invalid_argument("Can't have negative depth");
  }

  if (magnitude < 0){
    throw std::invalid_argument("Can't have negative magnitude");
  }

}


ostream& operator<<(ostream& out, const Quake& quake)
{
  return out << "Time: " << quake.getTime()
             << "\nLatitude: " << quake.getLatitude() << " deg"
             << "\nLongitude: " << quake.getLongitude() << " deg"
             << "\nDepth: " << quake.getDepth() << " km"
             << "\nMagnitude: " << quake.getMagnitude() << endl;
}
