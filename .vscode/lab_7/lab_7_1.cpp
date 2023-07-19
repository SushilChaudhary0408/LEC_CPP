#include <iostream>
using namespace std;

// Base class
class Course {
public:
    virtual void introduce() {
        cout << "I am a subject." << endl;
    }
};
// Derived classes
class Mathematics : public Course {
public:
    void introduce() override {
        cout << "I am Mathematics." << endl;
    }
};

class Science : public Course {
public:
    void introduce() override {
        cout << "I am Science." << endl;
    }
};

// Derived classes from Science
class Physics : public Science {
public:
    void introduce() override {
        cout << "I am Physics." << endl;
    }
};

// Derived classes from Science
class Chemistry : public Science {
public:
    void introduce() override {
        cout << "I am Chemistry." << endl;
          }
};

int main() {
    Mathematics math;
    Science science;
    Physics physics;
    Chemistry chemistry;

    math.introduce();       // Output: "I am Mathematics."
    science.introduce();    // Output: "I am Science."
    physics.introduce();    // Output: "I am Physics."
    chemistry.introduce();  // Output:  "I am  chemistry."
 return 0;
}