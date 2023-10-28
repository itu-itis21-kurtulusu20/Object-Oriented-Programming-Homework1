
#include "Student.h"
Student::Student(const Student& student1){
    this->name = student1.get_name();
    this->GPA = student1.get_gpa();
    this->GRE= student1.get_gre();
    this->TOEFL = student1.get_toefl();
    cout<<this->name<<" logged in to the system."<<endl;
}

Student::~Student() {
    cout<<this->name<<" logged out of the system with "<<this->number_of_applications<<" application(s)."<<endl;
}
void Student::set_name(string name) const{
    this->name = name;
}

Student::Student(string name, double GPA, int GRE, int TOEFL){
    this->name = name;
    this->GPA = GPA;
    this->GRE = GRE;
    this->TOEFL = TOEFL;
    cout<<this->name<<" logged in to the system."<<endl;
}
double Student::get_gpa()const{
    return GPA;
}
int Student::get_gre()const{
    return GRE;
}
int Student::get_toefl()const{
    return TOEFL;
}
string Student::get_name()const{
    return name;
}
void Student::application_enhancer()const{
    number_of_applications++;
}

