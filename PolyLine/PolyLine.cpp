#ifndef POLYLINE_CPP
#define POLULINE_CPP
#include "Point.cpp"
#include <vector>
#include "math.h"
class PolyLine {
private:
	vector<Point> points;
public:
	PolyLine()
	{

	}
	PolyLine(vector<Point> points)
	{
		this->points = points;
	}
	void appendPoint(Point point) {
		points.push_back(point);
	}
	void appendPoint(int x, int y) {
		points.push_back(Point(x, y));
	}
	double getLength() {
		double lenght=0;
		int i = 0;
		for (i; i < points.size()-1; i++) {
				lenght += sqrt(pow(points[i+1].getX()-points[i].getX(),2)+pow(points[i+1].getY() - points[i].getY(),2));
		}
		return lenght;
	}

};
#endif
