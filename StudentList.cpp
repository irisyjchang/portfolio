// Iris Chang - Student List - 11/7/21
#include <iomanip> // For gpa float rounding
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

struct Student
{
  char firstName[20];
  char lastName[10];
  int id;
  float gpa;
};

vector <Student*> * structPointers;
// User can add new student
void Add()
{
  Student* student;

  student = new Student;
  cout << "first name:";
  cin.getline(student->firstName, sizeof(student->firstName));
  cout << "last name:";
  cin.getline(student->lastName, sizeof(student->lastName));
  cout << "id:";
  cin >> student->id;
  cin.ignore(); // Get rid of new line character
  cout << "gpa:";
  cin >> student->gpa;
  cin.ignore();
  structPointers->push_back(student);
}
// User can print all students
void Print()
{
  for(vector<Student*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
    std::cout << std::fixed << std::setprecision(2);
    cout<< (*it)->firstName << " " <<(*it)->lastName << " " << (*it)->id << " " << (*it)->gpa << endl;
  }
}
// User can delete student based on id
void Delete()
{
  int id;
  cout << "id:";
  cin >> id;
  cin.ignore();
  for(vector<Student*>::iterator it = structPointers->begin(); it != structPointers->end();it++){
    if(id==((*it)->id)){
      delete *it; // delete student record
      structPointers->erase(it); // remove vector entry
      return;
    }
  }
}

int main()
{
  structPointers = new vector <Student*>;
  char input[10];
  // check user input
  while (true){
    cin.getline(input, sizeof(input));
    if (!strcmp(input, "ADD")){
      Add();
    }else if(!strcmp(input, "PRINT")){
      Print();
    }else if(!strcmp(input,"DELETE")){
      Delete();
    }else if(!strcmp(input,"QUIT")){
      break;
    }else{
      cout << "error\n";
    }
  }
  return 0;
}
