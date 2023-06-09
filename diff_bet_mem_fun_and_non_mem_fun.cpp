class Circle {
  private:
    double radius;
  
  public:
    // Circle(double r) : radius(r) {}

    // Member function
    double getArea() {
        return 3.14159 * radius * radius;
    }
    double calculateCircumference(Circle c);
};

// Non-member function
double Circle:: calculateCircumference(Circle c) {
    return 2 * 3.14159 * c.radius;
}

int main(){
  Circle c1;
  
}