/* Write a c++ program to implement a class named Car and also create 
an instance to call different members of the class. 
The different members can be brand name, year of manufacturing, price.*/

# include <iostream>
using namespace std;

class Car
{
	public:
		int year;
		string name;
		double price;
	public:
		Car(string name,int year,double price)
		{
			this->name=name;
			this->year=year;
			this->price=price;
		}
		void details()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Year of manufacture: "<<year<<endl;
			cout<<"Price: "<<price<<endl;
		}
};

int main()
{	
	string name;
	int yr;
	double p;
	cout<<"Enter name: ";
	getline(cin,name);
	cout<<"Enter year: ";
	cin>>yr;
	cout<<"Enter price: ";
	cin>>p;
	Car c(name,yr,p);
	c.details();
}