#include <iostream>
#include <vector>
using namespace std;

class Point
{
	protected:
		float x;
		float y;
		
	public:
		int read_Point(Point &P)
		{	
			std::cin >> P.x >> P.y;
		}
		
		float X()
		{
			return this->x;
		}
		
		float Y()
		{
			return this->y;
		}		
};

class Triangle : public Point
{
	private:
		std::vector<Point> P;
	public:
		Triangle()
		{
			P=std::vector<Point>(3);
			read_Traingle();
		}
		void read_Traingle()
		{
			read_Point(P[0]);
			read_Point(P[1]);
			read_Point(P[2]);
		}
		
		float area_Triangle()
		{
			
			float area = .5*(P[0].X()*(P[1].Y() - P[2].Y()) + P[1].X()*(P[2].Y() - P[0].Y()) + P[2].X()*(P[0].Y() - P[1].Y()));
			return area;
		}
};

int main()
{
	Triangle Tri;
	std::cout << "Area of a triangle is " << Tri.area_Triangle() << std::endl;
	return 0;
}
