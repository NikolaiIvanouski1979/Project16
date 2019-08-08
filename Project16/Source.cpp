# include <iostream>
using namespace std;

float circarea(float);

int main()
{
	
		cout << "Please! Enter the radius of the circle: ";
		float a;
		cin >> a;
		float b;
		b = circarea(a);
		cout << "The area of a circle: " << b << endl;
		system("pause");
		return 0;

	
}

float circarea(float u)
{
	float c = u * 3.14 * u;
	return c;
}
