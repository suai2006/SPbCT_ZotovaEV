#pragma once
enum class ORIENT { LEFT=0, RIGHT=1, AHEAD=2, BEHIND=3, BETWEEN=4 };
class Triangle;

class Point
{
public:
	// Конструктор
	Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}
	Point operator +(Point&);
	Point operator -(Point&);
	double Length() const; 
	ORIENT Classify(Point, Point) const;
	bool InTriangle(Triangle&) const;
	
	// Другие методы
	void Show() const; 
	void operator +=(Point&);

public:
	double x, y;
};

