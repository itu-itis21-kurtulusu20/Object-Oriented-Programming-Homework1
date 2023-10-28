
#include <iostream>
#include "Student.h"
using namespace std;
class University {
public:
    University(string, double, double, double, double, string);
    University(string, double, double, double, double);
    void evaluate_student(const Student &student);
private:
    double GPA_weight{};
    double GRE_weight{};
    double TOEFL_weight{};
    double bias_value{};
    string name{};
    string country{};
};


