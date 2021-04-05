#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vector1(0);
	vector <int> vector2(0);

	vector1.push_back(10);
	vector1.push_back(20);
	cout<<"size ="<<vector1.size();
	cout<<"\n"<<vector1.at(0);
	cout<<"\n"<<vector1.at(1);

	vector2.push_back(100);
	vector2.push_back(200);
	cout<<"size ="<<vector2.size();
	cout<<"\n"<<vector2.at(0);
	cout<<"\n"<<vector2.at(1);

	vector <vector<int>> vector2d(0);
	vector2d.push_back(vector1);
	vector2d.push_back(vector2);
	cout<<"\n"<<vector2d[0][0];
	cout<<"\n"<<vector2d[0][1];
	cout<<"\n"<<vector2d[1][0];
	cout<<"\n"<<vector2d[1][1];

	vector1.at(0)=1000;
	cout<<"\n";	
	cout<<"\n"<<vector2d[0][0];
	cout<<"\n"<<vector2d[0][1];
	cout<<"\n"<<vector2d[1][0];
	cout<<"\n"<<vector2d[1][1];
	cout<<"\n"<<"vector1";
	cout<<"\n"<<vector1.at(0);
	cout<<"\n"<<vector1.at(1);

	return 0;
}