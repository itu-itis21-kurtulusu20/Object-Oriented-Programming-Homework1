
#include <iostream>

using namespace std;

class Student {
public:
    Student(const Student&);
    ~Student();
    Student(string, double, int, int);
    void set_name(string) const;
    string get_name() const ;
    double get_gpa() const;
    int get_gre() const;
    int get_toefl() const;
    void application_enhancer() const;

private:
    double GPA{0};
    int GRE{0};
    int TOEFL{0};
    mutable string name{};
    mutable unsigned int number_of_applications{};
};



