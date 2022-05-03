#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
void Student::assignDetails(int n,char na[]) 
{
    studentid=n;
    strcpy(name,na);
}

void Student::display()
{
  cout<<"student id :"<<studentid<<endl;
  cout<<"student name :"<<name<<endl;
  
}
