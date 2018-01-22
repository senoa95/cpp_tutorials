#include <iostream>
using namespace std;

// name of class  = filter

// variables of class:

// sensor data - array of integers [20]
// moving average window size - integer

//function: moving average
class filter
{
public:
  int sensor_data[5];
  int ma_winsize;

filter()
{
  for (int i=0;i<5;i++){
  sensor_data[i] = i;
}
  ma_winsize = 3;
}

void moving_average()
{
for (int i=1;i<6; i++)
{
sensor_data[i] = (sensor_data[i-1] + sensor_data[i] + sensor_data[i+1]) / ma_winsize;
}
}
};

int main(int argc, char const *argv[]) {
  filter test;
  test.moving_average();

  for (int i=0;i<5;i++){
  cout<<test.sensor_data[i];
}


  return 0;
}
