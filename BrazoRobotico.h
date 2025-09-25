#include "iostream"

class BrazoRobotico{
	private:
		double x,y,z;
		bool sujeta;
	public:
		BrazoRobotico();
		double getx();
		double gety();
		double getz();
		bool getsujeta();
		void coger();
		void dejar();
		void mover(double,double,double);

};
