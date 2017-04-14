#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle
{
private:
	double radius;
	static int numberOfObjects;

public:

	int Circle::numberOfObjects = 0;

	//construct a circle object
	Circle::Circle()
	{
		radius = 1;
		numberOfObjects++;
	}

	//construct a circle object
	Circle::Circle(double newradius)
	{
		radius = newradius;
		numberOfObjects++;
	}

	//return area of this circle
	double Circle::getArea() const
	{
		return radius * radius * 3.14159265;
	}

	//return the radius of this circle
	double Circle::getRadius() const
	{
		return radius;
	}

	//set a new radius
	void Circle::setRadius(double newradius)
	{
		radius = (newradius >= 0) ? newradius : 0;
	}

	//return the number of circle objects
	int Circle::getNumberOfObjects()
	{
		return numberOfObjects;
	}

};
		bool operator == (const Circle one, const Circle two)
		{
			if (one.getRadius() == two.getRadius())
				return true;
			else
				return false;
		}

		bool operator < (const Circle one, const Circle two)
		{
			if (one.getRadius() < two.getRadius())
				return true;
			else
				return false;
		}

		bool operator <= (const Circle one, const Circle two)
		{
			if (one.getRadius() <= two.getRadius())
				return true;
			else
				return false;
		}

		bool operator >= (const Circle one, const Circle two)
		{
			if (one.getRadius() <= two.getRadius())
				return true;
			else
				return false;
		}

		bool operator > (const Circle one, const Circle two)
		{
			if (one.getRadius() <= two.getRadius())
				return true;
			else
				return false;
		}

		bool operator != (const Circle one, const Circle two)
		{
			if (one.getRadius() <= two.getRadius())
				return true;
			else
				return false;
		}




#endif // !CIRCLE_H_

