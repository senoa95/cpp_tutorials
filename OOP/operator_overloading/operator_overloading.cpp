#include <iostream>
#include <string>
using namespace std;
#include <cmath>


class ThreeDPoint
{
public:

  float x;
  float y;
  float z;

  ThreeDPoint()
  {
    x = 0.0;
    y = 0.0;
    z = 0.0;
  }

  float EuclDist()
  {
  return   sqrt(x*x + y*y + z*z);
  }

  bool operator < (const ThreeDPoint pInt)
  {

    if (this->EuclDist() < pInt.EuclDist()) //this: a pointer to the object within this class
                    // ->: a member access operator gives the item located at the given pointer (in this case "this")
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool operator > (const ThreeDPoint pInt)
  {
    if (this->EuclDist() > pInt.EuclDist()) //this: a pointer to the object within this class
                    // ->: a member access operator gives the item located at the given pointer (in this case "this")
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool operator == (const ThreeDPoint pInt)
  {
    if (this->EuclDist() == pInt.EuclDist()) //doubl equal sign "==" is checking syntax for c++
    {
      return true;
    }
    else
    {
      return false;
    }
  }



float operator * (const ThreeDPoint pInt4)
{
  // ThreeDPoint pInt5;
  float pInt6;

  // pInt5.x = x * pInt4.x;
  // pInt5.y = y * pInt4.y;
  // pInt5.z = z * pInt4.z;
  pInt6 = pInt4.x*x + pInt4.y*y + pInt4.z*z;

  return pInt6;
}

ThreeDPoint operator % (const ThreeDPoint pInt7)
{
  ThreeDPoint pInt8;

  pInt8.x = x * pInt7.x;
  pInt8.y = y * pInt7.y;
  pInt8.z = z * pInt7.z;

  return pInt8;
}


ThreeDPoint operator + (const ThreeDPoint pInt2) //here the word "operator" makes this function an overloader
{
  ThreeDPoint pInt3;

  pInt3.x = x + pInt2.x;
  pInt3.y = y + pInt2.y;
  pInt3.z = z + pInt2.z;

  return pInt3;
}


friend ostream & operator << (ostream &out, const ThreeDPoint &p);  //this declares the ostream function as
  //a friend of the class..more on this later
};


ostream & operator <<(ostream &out, const ThreeDPoint &p)
{
  out << "x: "<<p.x<<"m"<<endl;
  out << "y: "<<p.y<<"m"<<endl;
  out << "z: "<<p.z<<"m"<<endl;

return out;
}

int main(int argc, char const *argv[]) {

  ThreeDPoint p1;
  ThreeDPoint p3;
  float p4;
  ThreeDPoint p5;

  p1.x = 2.0;
  p1.y = 3.0;
  p1.z = 10.0;

  ThreeDPoint p2;
  p2.x = 12;
  p2.y = 332;
  p2.z = 5;

  p3 = p1 + p2;
  p4 = p1 * p2;
  p5 = p1 % p2;

  cout<<p1<<endl;
  cout<<p2<<endl;
  cout<<p3<<endl;


  cout<<"dot product = "<<p4<<endl<<endl;
  cout<<"cross product = "<<endl<<p5<<endl;

  return 0;
}


// assignement:
// only astrix (*) --> gives float of (p1*p2) --> returns a float
// dot and astrix (.*) --> gives a vector (p1.*p2) (element by element) -->returns a ThreeDPoint
