#include <iostream>
#include <string>
using namespace std;
// base class = vehicle
// derived class 1 = car
//derived class 1.1 = sedan
//derived class 1.2 = SUV
//derived class 1.3 = Convertible
// derived class 2 = truck
// //derived class 2.1 = Pick up
//derived class 2.2 = Lori
//derived class 2.3 = Semi
// derived class 3 = motor bike
//derived class 3.1 = rocket/racebike
//derived class 3.2 = Auto
//derived class 3.3 = Harley

class vehicle
{
public:
int numDoors;  //camel case syntax: alternatingCapitalizationForVariableNames
              // underscore_for_functions

int numCylindersInEngine;
int numTires;
string make;
string model;
int year;
string vinNumber;
float currentPosition[2];
float currentSpeed[2];
float currentHeading;

vehicle()
{
  currentPosition[0] = 0;
  currentPosition[1] = 0;
  currentSpeed[0] = 0;
  currentSpeed[1] = 0;
  currentHeading = 0;

}

void accelerate()
{
currentPosition[0] = currentPosition[0] + 2;
currentPosition[1] = currentPosition[1] + 2;
currentSpeed[0] = currentSpeed[0] + 1;
currentSpeed[1] = currentSpeed[1] + 1;
}
void decelerate()
{
currentPosition[0] = currentPosition[0] - 2;
currentPosition[1] = currentPosition[1] - 2;
currentSpeed[0] = currentSpeed[0] - 1;
currentSpeed[1] = currentSpeed[1] - 1;
}

void steer_left()
{
currentHeading = currentHeading - 1;
}

void steer_right()
{
currentHeading = currentHeading + 1;
}
string generate_vehicle_description();
//this function returns everything on the vehicle in a string
};

class car : public vehicle
{
public:
  string type;
  float zeroToSixty;
  float topSpeed;
  bool hasAirBags;
  int numAirbags;
  int curbWeight;
  int coolPoints;
  int cost;
  bool plastiDip;
  bool upgradedSpeakers;
  bool turbo;
  bool alloy_wheels ;


  car(){
    type = "sedan";
    zeroToSixty = 5.0;
    topSpeed = 140;
    hasAirBags = true;
    numAirbags = 3;
    curbWeight = 10000;
    coolPoints = 0;
    plastiDip = false;
    upgradedSpeakers = false;
    turbo = false;
  }

  void add_turbo()
  {
    zeroToSixty = zeroToSixty - 2.57;
    topSpeed = topSpeed + 15;
    turbo = true;
    coolPoints = coolPoints + 3;
    curbWeight = curbWeight + 50;
  }

  void add_alloy_wheels()
  {
    curbWeight = curbWeight - 250;
    zeroToSixty = zeroToSixty - 0.5;
    topSpeed = topSpeed + 3;
    coolPoints = coolPoints + 3;
  }
  void pimp()
  { car car;
    car.add_turbo();
    car.add_alloy_wheels();   //how do I call functons using other functions?
  }
};

int main(int argc, char const *argv[]) {
  vehicle dummyVehicle;
  dummyVehicle.accelerate();
  dummyVehicle.accelerate();
  dummyVehicle.decelerate();
  dummyVehicle.steer_right();
  dummyVehicle.steer_left();
  cout<<dummyVehicle.currentSpeed[0]<<endl;
  cout<<dummyVehicle.currentPosition[0]<<endl;
  cout<<dummyVehicle.currentHeading<<endl;

  car dummyCar;
  // dummyCar.add_alloy_wheels();
  dummyCar.pimp();
  cout<<endl<<dummyCar.curbWeight<<endl;
  return 0;
}
