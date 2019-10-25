
#ifndef D_RHOMBUS_H_
#define D_RHOMBUS_H_ 

#include "figure.h"

class Rhombus : public Figure {
public:
	Rhombus (std::istream&);

	Point center() const override;
	void print(std::ostream&) const override;
	double square() const override;
private:
	Point p1, p2, p3, p4;
};


#endif