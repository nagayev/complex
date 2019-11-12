#include "math.h"
#define ROUNDINT pow(10.00,-12)

using namespace std;

class complex{
	double real;
	double img;
public:
	complex(){     // ����������� �� ���������
		real=0; img=0;
	}
	complex(const complex& c){   // ���������� �����������
		this->img=c.img;
		this->real=c.real;
	}
	complex(double, double); // ����������� �������� � ������, � ��������� ����� ��� ���
	void operator =(complex c){    // ���������� ��������� ������������
		this->real=c.real;
		this->img=c.img;
	}
	bool operator ==(complex c){       // ���������� ��������� ���������
		if (this->real==c.real&&this->img==c.img)
			return true;
		return false;
	}
	complex operator + (complex c){     // ���������� ��������� ��������
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
	complex sinc(){ //�����
		complex tmp;
		tmp.real=sin(this->real)*(exp(-this->img) + exp(this->img))/2;
		tmp.img=cos(this->real)*(-exp(-this->img) + exp(this->img))/2;
		return tmp;
	}
	complex tanc(){ //�������
		complex tmp;
		tmp.real=(this->sinc()/this->cosc()).real;
		tmp.img=(this->sinc()/this->cosc()).img;
		return tmp;
	}
	complex ctanc(){ //���������
		complex tmp;
		tmp.real=(this->cosc()/this->sinc()).real;
		tmp.img=(this->cosc()/this->sinc()).img;
		return tmp;
	} 
	complex shc(){ //��������������� �����
		complex tmp;
		tmp.real=(exp(this->real)-exp(-this->real))/2*cos(this->img);
		tmp.img=(exp(this->real)+exp(-this->real))/2*sin(this->img);
		return tmp;
	}
	complex chc(){ //��������������� �������
		complex tmp;
		tmp.real=(exp(this->real)+exp(-this->real))/2*cos(this->img);
		tmp.img=(exp(this->real)-exp(-this->real))/2*sin(this->img);
		return tmp;
	}
	complex thc(){ //��������������� �������
		complex tmp;
		tmp.real=(this->shc()/this->chc()).real;
		tmp.img=(this->shc()/this->chc()).img;
		return tmp;
	} 
	complex cothc(){ //��������������� ���������
		complex tmp; 
		tmp.real=(this->chc()/this->shc()).real;
		tmp.img=(this->chc()/this->shc()).img;
		return tmp;
	}
	complex powc(complex c){
		complex tmp;
		tmp=(c*this->logc()).expc();
		//���������� 
		if (abs(tmp.real)<ROUNDINT) tmp.real=0;
		if (abs(tmp.img)<ROUNDINT) tmp.img=0;
		return tmp;	
	}
	complex logc(){ //����������� ����������� ��������
		complex tmp;
		tmp.real=log(this->module());
		tmp.img=this->getf();
		return tmp;
	}
	complex expc(){ //����������� ����������
		complex tmp;
		tmp.real=exp(this->real)*cos(this->img);
		tmp.img=exp(this->real)*sin(this->img);
		return tmp;
	}
	double getf(){
		return atan2(this->img,this->real);
	}
	double module();     // ������ ������������ �����, � ������ ������ ��������
	
	double* returncomplex(){
		double* ret=new double[2];
		ret[0]=real;
		ret[1]=img;
		return ret; 
	}
};

complex::complex(double a, double b){    // ����������� ��������� ����� ��� ������
	real=a; img=b;
}

double complex::module(){     // ����� ��������� ��� ������
	return sqrt(real*real+img*img);
}
