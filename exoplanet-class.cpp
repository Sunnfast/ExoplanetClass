// Exoplanet Class by Simone Christen

#include <iostream>
#include <string>
using namespace std;

class Exoplanet {

  private:
  string _name;
  double _lightYears;
  double _planetMass;
  double _stellarMagnitude;
  int _discoDate;

  public:
  void SetName(string);
  void SetLightYears(double);
  void SetPlanetMass(double);
  void SetStellarMagnitude(double);
  void SetDiscoDate(int);

  string GetName();
  double GetLightYears();
  double GetPlanetMass();
  double GetStellarMagnitude();
  int GetDiscoDate();
};

// set function definitions

void Exoplanet::SetName(string name) {
  _name = name;
}

void Exoplanet::SetLightYears(double lightYears) {
  _lightYears = lightYears;
}

void Exoplanet::SetPlanetMass(double planetMass) {
  _planetMass = planetMass;
}

void Exoplanet::SetStellarMagnitude(double stellarMagnitude) {
  _stellarMagnitude = stellarMagnitude;
}

void Exoplanet::SetDiscoDate(int discoDate) {
  _discoDate = discoDate;
}

// get function definitions
string Exoplanet::GetName() {
  return _name;
}

double Exoplanet::GetLightYears() {
  return _lightYears;
}

double Exoplanet::GetPlanetMass() {
  return _planetMass;
}

double Exoplanet::GetStellarMagnitude() {
  return _stellarMagnitude;
}

int Exoplanet::GetDiscoDate() {
  return _discoDate;
}


int main() {

  Exoplanet ComaeBerenices;
  ComaeBerenices.SetName("11 Comae Berenices b");
  ComaeBerenices.SetLightYears(304);
  ComaeBerenices.SetPlanetMass(19.4);
  ComaeBerenices.SetStellarMagnitude(4.72307);
  ComaeBerenices.SetDiscoDate(2007);

  Exoplanet UrsaeMinoris;
  UrsaeMinoris.SetName("11 Ursae Minoris b");
  UrsaeMinoris.SetLightYears(409);
  UrsaeMinoris.SetPlanetMass(14.74);
  UrsaeMinoris.SetStellarMagnitude(5.013);
  UrsaeMinoris.SetDiscoDate(2009);

  Exoplanet Andromedae;
  Andromedae.SetName("14 Andromedae b");
  Andromedae.SetLightYears(246);
  Andromedae.SetDiscoDate(4.8);
  Andromedae.SetStellarMagnitude(5.23133);
  Andromedae.SetDiscoDate(2008);

  Exoplanet Herculis;
  Herculis.SetName("14 Herculis b");
  Herculis.SetLightYears(58);
  Herculis.SetPlanetMass(4.66);
  Herculis.SetStellarMagnitude(6.61935);
  Herculis.SetDiscoDate(2002);

  Exoplanet Cygni;
  Cygni.SetName("16 Cygni B b");
  Cygni.SetLightYears(69);
  Cygni.SetPlanetMass(1.78);
  Cygni.SetStellarMagnitude(6.215);
  Cygni.SetDiscoDate(1996);


  // vector exercise addition
  // Task: Display the data for all exoplanets in the list, then remove the last exoplanet from the list and display the modified list


  vector<Exoplanet> Exoplanet_vector{ ComaeBerenices, UrsaeMinoris, Andromedae, Herculis, Cygni };

  vector<Exoplanet>::iterator iter;

  // Display the data for all exoplanets in the list, then remove the first or last exoplanet from the list and display the modified list

  cout << "\n" << "Initial Vector: " << "\n" << "\n";


  for (iter = Exoplanet_vector.begin(); iter != Exoplanet_vector.end(); ++iter) {
      cout << "Name: " << (*iter).GetName() << "\n" << "Lightyears from Earth: " << (*iter).GetLightYears() << "\n" << "Planetary Mass: " << (*iter).GetPlanetMass() << " Jupiters" << "\n" << "Stellar Magnitude: " << (*iter).GetStellarMagnitude() << "\n" << "Discovery Date: " << (*iter).GetDiscoDate() << "\n" << "\n";
  }

  Exoplanet_vector.pop_back();

  // display modified list
  cout << "\n" << "Removing last exoplanet from vector..." << "\n";

  cout << "\n" << "Updated Vector: " << "\n" << "\n";

  for (iter = Exoplanet_vector.begin(); iter != Exoplanet_vector.end(); ++iter) {
      cout << "Name: " << (*iter).GetName() << "\n" << "Lightyears from Earth: " << (*iter).GetLightYears() << "\n" << "Planetary Mass: " << (*iter).GetPlanetMass() << " Jupiters" << "\n" << "Stellar Magnitude: " << (*iter).GetStellarMagnitude() << "\n" << "Discovery Date: " << (*iter).GetDiscoDate() << "\n" << "\n";

}