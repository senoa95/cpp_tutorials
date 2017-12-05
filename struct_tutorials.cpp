#include <iostream>
using namespace std;


struct gradstudent{
    string Name;
    int PID;
    int GPA;
    string ResearchTopic;
    string AdvisorName;
    bool is_alive;
  }sena,savio;

void print (gradstudent student);

int main()
 {

  sena.Name = "Sena Hunde";
  sena.PID = 12345;
  sena.GPA = 4;
  sena.ResearchTopic = "agBOT";
  sena.AdvisorName = "Leonessa";

  savio.Name = "Savio Pereira";
  savio.PID = 45623;
  savio.GPA = 4;
  savio.ResearchTopic = "Road Profiling";
  savio.AdvisorName = "Ferris5";

  cout<<" Info about Student 1"<<endl;

  cout<<sena.Name<<", " <<sena.PID<<endl;

  cout<<" Info about Student 2"<<endl;

  cout<<savio.Name<<", " <<savio.PID<<endl;


  return 0;
}


void print (gradstudent student)
{
  cout<<sena.Name<<endl;
  cout<<savio.Name<<endl;
}
