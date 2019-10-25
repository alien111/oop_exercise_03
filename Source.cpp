#include <iostream>
#include <cmath>
#include <vector>
#include "vector.h"
#include "point.h"
#include "rectangle.h"
#include "rhombus.h"
#include "trapezoid.h"
#include "figure.h"

void menu() {
	std::cout << "MENU\n0 : exit\n1 : input new figure\n 	0 : Rectangle\n 	1 : Rhombus\n 	2 : Trapezoid\n2 : functions\n 	0 : print figures\n 	1 : print squares\n 	2 : print centers\n 	3 : print sum of all squares\n3 : delete figure by id\n";
}

int main() {
	
	std::vector<Figure *> figures;

	for (;;) {

		menu();
		int cmd;
		std::cin >> cmd;
		if (cmd == 0) {
		
			break;
		
		} else if (cmd == 1) {

			int figureId;
			std::cin >> figureId;
			Figure * newFigure;

			if (figureId == 0) {
				newFigure = new Rectangle(std::cin);
			} else if (figureId == 1) {
				newFigure = new Rhombus(std::cin);
			} else if (figureId == 2) {
				newFigure = new Trapezoid(std::cin);
			}

			figures.push_back(newFigure);
		} else if (cmd == 2) {

			int functionId;
			std::cin >> functionId;

			if (functionId == 0) {
				for (Figure * currentFigure : figures) {
					currentFigure -> print(std::cout);
				}
			} else if (functionId == 1) {
				for (Figure * currentFigure : figures) {
					std::cout << currentFigure -> square() << '\n';
				}
			} else if (functionId == 2) {
				for (Figure * currentFigure : figures) {
					std::cout << currentFigure -> center();
				}
			} else if (functionId == 3) {
				double sum = 0;
				for (Figure * currentFigure : figures) {
					sum += currentFigure -> square();
				}
				std::cout << sum << '\n';
			}
		
		} else if (cmd == 3) {
			
			int id;
			std::cin >> id;
			if (id >= 0 && id < figures.size()) {

				delete figures[id];
				figures.erase(figures.begin() + id);

			} else {
				throw std::logic_error("id is out of range");
			}

		}

	}

	for (size_t i = 0; i < figures.size(); i++) {
		delete figures[i];
	}

	return 0;
}