#include <vector>
#include <iostream>

class CircleBase
{
private:
	int m_Value;

public:
	CircleBase(int value)
		:m_Value(value)
	{}
	virtual void add(CircleBase*){}
	int radius()
	{
		return m_Value;
	}
};

class SingleCircle : public CircleBase
{
public:
	SingleCircle(int value):
		CircleBase(value)
	{
		std::cout << "Create a single circle with radius: " << value << "." << std::endl;
	}
};

class Circle: public CircleBase
{
private:
	std::vector<CircleBase*> m_Circles;

public:
	Circle(int value)
		:CircleBase(value)
	{
		std::cout << "Create a circle can contain many circles with radius: " << value << "." << std::endl;
	}

	void add(CircleBase* circle)
	{
		std::cout << "Add a circle to circles with radius: " << circle->radius() << "." << std::endl;
		m_Circles.push_back(circle);
	}
};

int main()
{
	Circle c1(1);
	Circle c2(2);
	SingleCircle sc(3);

	c1.add(&c2);
	c1.add(&sc);
}