
#ifndef D_RECTANGLE_H_
#define D_RECTANGLE_H_ 

#include "figure.h"

class Rectangle : public Figure {
public:
	Rectangle (std::istream&);

	Point center() const override;
	void print(std::ostream&) const override;
	double square() const override;
private:
	Point p1, p2, p3, p4;
};


#endif