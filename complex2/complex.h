#include "math.h"
#define ROUNDINT pow(10.00,-12)

using namespace std;

class complex{
	double real;
	double img;
public:
	complex(){     // Конструктор по умолчанию
		real=0; img=0;
	}
	complex(const complex& c){   // Копирующий конструктор
		this->img=c.img;
		this->real=c.real;
	}
	complex(double, double); // Конструктор объявлен в классе, а определен будет вне его
	void operator =(complex c){    // Перегрузка оператора присваивания
		this->real=c.real;
		this->img=c.img;
	}
	bool operator ==(complex c){       // Перегрузка оператора сравнения
		if (this->real==c.real&&this->img==c.img)
			return true;
		return false;
	}
	complex operator + (complex c){     // Перегрузка оператора сложения
		complex tmp;
		tmp.real=this->real+c.real;
		tmp.img=this->img+c.img;
		return tmp;
	}
	complex operator - (complex c){
		complex tmp;
		tmp.real=this->real-c.real;
		tmp.img=this->img-c.img;
		return tmp;
	}
	complex operator * (complex c){
		complex tmp;
		tmp.real = this->real * c.real - this->img * c.img;
		tmp.img = this->real * c.img + this->img * c.real;
		return tmp;
	}
	complex operator / (complex c)
	{
		complex tmp;
		tmp.real = (this->real * c.real + this->img * c.img) / (c.real * c.real + c.img * c.img);
		tmp.img = (this->img * c.real - this->real * c.img) / (c.real * c.real + c.img * c.img);
		return tmp;
	}
	complex operator ^ (complex c)
	{
		complex tmp;
		tmp=this->powc(c);
		return tmp;
	}
	complex cosc(){
		complex tmp;
		tmp.real=cos(this->real)*(exp(-this->img) + exp(this->img))/2;
		tmp.img=sin(this->real)*(exp(-this->img) - exp(this->img))/2;
		return tmp;
	} 
	complex sinc(){ //синус
		complex tmp;
		tmp.real=sin(this->real)*(exp(-this->img) + exp(this->img))/2;
		tmp.img=cos(this->real)*(-exp(-this->img) + exp(this->img))/2;
		return tmp;
	}
	complex tanc(){ //тангенс
		complex tmp;
		tmp.real=(this->sinc()/this->cosc()).real;
		tmp.img=(this->sinc()/this->cosc()).img;
		return tmp;
	}
	complex ctanc(){ //котангенс
		complex tmp;
		tmp.real=(this->cosc()/this->sinc()).real;
		tmp.img=(this->cosc()/this->sinc()).img;
		return tmp;
	} 
	complex shc(){ //гиперболический синус
		complex tmp;
		tmp.real=(exp(this->real)-exp(-this->real))/2*cos(this->img);
		tmp.img=(exp(this->real)+exp(-this->real))/2*sin(this->img);
		return tmp;
	}
	complex chc(){ //гиперболический косинус
		complex tmp;
		tmp.real=(exp(this->real)+exp(-this->real))/2*cos(this->img);
		tmp.img=(exp(this->real)-exp(-this->real))/2*sin(this->img);
		return tmp;
	}
	complex thc(){ //гиперболический тангенс
		complex tmp;
		tmp.real=(this->shc()/this->chc()).real;
		tmp.img=(this->shc()/this->chc()).img;
		return tmp;
	} 
	complex cothc(){ //гиперболический котангенс
		complex tmp; 
		tmp.real=(this->chc()/this->shc()).real;
		tmp.img=(this->chc()/this->shc()).img;
		return tmp;
	}
	complex powc(complex c){
		complex tmp;
		tmp=(c*this->logc()).expc();
		//округление 
		if (abs(tmp.real)<ROUNDINT) tmp.real=0;
		if (abs(tmp.img)<ROUNDINT) tmp.img=0;
		return tmp;	
	}
	complex logc(){ //натуральный комплексный логарифм
		complex tmp;
		tmp.real=log(this->module());
		tmp.img=this->getf();
		return tmp;
	}
	complex expc(){ //комплексная экспонента
		complex tmp;
		tmp.real=exp(this->real)*cos(this->img);
		tmp.img=exp(this->real)*sin(this->img);
		return tmp;
	}
	double getf(){
		return atan2(this->img,this->real);
	}
	double module();     // Модуль комплексного числа, в классе только прототип
	
	double* returncomplex(){
		double* ret=new double[2];
		ret[0]=real;
		ret[1]=img;
		return ret; 
	}
};

complex::complex(double a, double b){    // Конструктор определен будет вне класса
	real=a; img=b;
}

double complex::module(){     // Метод определен вне класса
	return sqrt(real*real+img*img);
}
