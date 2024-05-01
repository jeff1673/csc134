#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

// class declaration
class Rectangle{
private:
    double width;
    double length;
public:
    Rectangle();                //default constructor
    Rectangle(double, double);  // more useful constructor
    void setWidth(double);      // setters
    void setLength(double);     
    double getWidth() const;    // getters (cannot change values)   
    double getLength() const;
    double getArea() const;

};

// function definitions
// NOTE: negative dimensions don't exist, so fix them
Rectangle::Rectangle() {
    // default constructor
    width = 0;
    length = 0;
}
// length then width
Rectangle::Rectangle(double l, double w) {
    // default constructor
    width = w;
    length = l;
    // fix any negative values (could use absolute values)
    if (width < 0) {
        width = -width;
    }
     if (length < 0) {
        length = -length;
    }
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double l) {
    length = l;
}
double Rectangle::getWidth() const {
    return width;
}
double Rectangle::getLength() const {
    return length;
}
double Rectangle::getArea() const {
    double area = length * width;
    return area;
}


#endif // RECTANGLE_H_INCLUDED