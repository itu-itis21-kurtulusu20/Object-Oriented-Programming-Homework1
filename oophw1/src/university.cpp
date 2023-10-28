#include "University.h"
University::University(string name, double GPA, double GRE, double TOEFL, double bias_value, string country)
{
    this->name = name;
    this->GPA_weight = GPA;
    this->GRE_weight = GRE;
    this->TOEFL_weight = TOEFL;
    this->bias_value = bias_value;
    this->country = country;
}
University::University(string name, double GPA, double GRE, double TOEFL, double bias_value)
{
    this->name = name;
    this->GPA_weight = GPA;
    this->GRE_weight = GRE;
    this->TOEFL_weight = TOEFL;
    this->bias_value = bias_value;
}
void University::evaluate_student(const Student &student){
    double evaluater = student.get_gpa() * GPA_weight + student.get_gre() * GRE_weight + student.get_toefl() * TOEFL_weight + bias_value;

    if (evaluater >= 0) {
        cout << student.get_name() << " is admitted to " << name << endl;

    } else {
        cout << student.get_name() << " is rejected from " << name << endl;
    }
    student.application_enhancer();
}