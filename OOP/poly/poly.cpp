#include <string>
#include <iostream>
using namespace std;

//class - grad student

//variables

//name - string
//age - integer
//gpa - float
//advisor's name - string
//courses taken - array of strings

//functions

//study harder - increases gpa by +0.5
//get younger - decreases age by 2 years
// change advisor - changes advisor's name
// drop course - removes course from courses taken

class grad_student
{

public:   //this makes all following variables public
  string name;
  int age;
  float gpa;
  string advisor_name;
  string courses_taken[5];


grad_student()
{
  name = "John";
  age = 20;
  gpa = 0.0;
  advisor_name = "TOMO";
  // courses_taken = {"A","B","C","D","E"};
}

float look_at_gpa(){
  return gpa;

}

void party_harder(double numBeers)
{
  cout<<"number of beers cannot be decimal - DRINK THE WHOLE BEER MAN"<<endl;
}

void party_harder(int numBeers) //polymorphism lets us use the same function names multiple times to achieve
//different things simultaneously.
{
  if (numBeers > 15)
  {
    gpa = gpa - 1;
  }
  else
  {
    party_harder(); //this calls the function on line 59 -- this has the same name as this function -interesting.
  }
}

void party_harder()
{
  gpa = gpa - 0.5;
}

void study_harder()
{
  gpa = gpa + 0.5;
}

void get_younger()
{
  age = age - 2;
}

void change_advisor(string new_name)
{
  advisor_name = new_name;
}
//
// void drop_course()
// {
//
// }
};

class VtGradStudent: public grad_student
{
public:
  VtGradStudent()
  {
    grad_student();
  }
void party_harder()
{
 gpa = gpa - 0.5;
}

void party_harder(int numBeers)
{
  if (numBeers > 18)
  {
    gpa = gpa - 1;
  }
  else
  {
    party_harder();
  }
}

};

int main(int argc, char const *argv[]) {
  VtGradStudent sena;
  sena.name = "Sena";
  cout <<sena.name<<"  ";
  cout <<sena.age<<endl;
  cout<<"original gpa = "<<sena.look_at_gpa()<<endl;
  // sena.study_harder();
  // sena.study_harder();
  sena.party_harder(0.2);

  cout<<"final gpa = "<<sena.look_at_gpa()<<endl;
  sena.change_advisor("Tomo");
  cout<<sena.advisor_name<<endl;

  grad_student savio;
  savio.name = "Savio";
  savio.age = 25;
  savio.advisor_name = "Ferris";
  cout<<savio.name<<endl;
  cout<<"Age = "<<savio.age<<endl;
  cout<<"old gpa = "<<savio.look_at_gpa()<<endl;
  savio.study_harder();
  savio.study_harder();
  savio.party_harder(13);
  cout<<"new gpa = "<<savio.look_at_gpa()<<endl;

  return 0;
}
