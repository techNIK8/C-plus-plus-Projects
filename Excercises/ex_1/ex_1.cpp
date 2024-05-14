#include<iostream>
using namespace std;

class Kouti
{
   private:
      double length;
      double breadth;
      double height;

   public:
      double calculateOgkos(void);
      void setKouti(double, double, double);
      Kouti operator+(const Kouti& b)
      {
       Kouti kouti;
       kouti.length = this->length + b.length;
	   kouti.breadth = this->breadth + b.breadth;
	   kouti.height = this->height + b.height;
	   return kouti;
      };
      void setMikos(double);
      void setPlatos(double);
      void setYpsos(double);

};

void Kouti::setMikos(double x)
{
	length=x;
}

void Kouti::setPlatos(double x)
{
	breadth=x;
}

void Kouti::setYpsos(double x)
{
	height=x;
}
void Kouti::setKouti(double a,double  b,double  c)
{
	length=a;
	breadth=b;
	height=c;
}

double Kouti::calculateOgkos(void)
{
 return length*breadth*height;
}


int main()
{
	Kouti Kouti1, Kouti2, KoutiC;
	double ogkos=0.0;
	Kouti1.setKouti(2.0, 3.2, 6.0);
	Kouti2.setKouti(2.5, 4.0, 5.0);
	KoutiC= Kouti1.operator+(Kouti2);
	cout<<"To kouti C exei ogko to athroisma twn 2 allwn koutiwn, diladi "<< KoutiC.calculateOgkos()<< endl;
	return 0;
}

