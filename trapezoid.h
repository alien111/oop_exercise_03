#ifndef D_TRAPEZOID_H_
#define D_TRAPEZOID_H_ 

#include "figure.h"

class Trapezoid : public Figure {
public:
	Trapezoid (std::istream&);

	Point center() const override;
	void print(std::ostream&) const override;
	double square() const override;
private:
	Point p1, p2, p3, p4;
};


#endif