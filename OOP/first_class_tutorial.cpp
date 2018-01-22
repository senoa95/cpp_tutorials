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
private:
  float gpa;

public:   //this makes all following variables public
  string name;
  int age;
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
void party_harder()
{
  gpa = gpa - 1;
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

int main(int argc, char const *argv[]) {
  grad_student sena;
  sena.name - "Sena";
  cout <<sena.name<<" - ";
  cout <<sena.age<<endl;
  cout<<"original gpa = "<<sena.look_at_gpa()<<endl;
  sena.study_harder();
  sena.study_harder();
  sena.party_harder();

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
  cout<<"new gpa = "<<savio.look_at_gpa()<<endl;

  return 0;
}
