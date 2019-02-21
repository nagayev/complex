#include <string.h>
using namespace System;
double* conv(String ^s1)
{
	 //TODO:replace , -> .
	//чисто мнимое
				double* ret=new double[2];
				int i=s1->IndexOf("+"); bool f=1;
				if (i==-1) {i=s1->LastIndexOf("-"); f=0;}
				int j=s1->IndexOf("i");
				try{
				if (j==-1) {ret[0]=Convert::ToSingle(s1); ret[1]=0; return ret;}
				if (i==-1){ret[0]=0; ret[1]=Convert::ToSingle(s1->Remove(j,1));return ret;}
				if (i==0){ret[0]=0;ret[1]=Convert::ToSingle(s1->Remove(j,1));return ret;}
				String ^s2=s1->Substring(0,i);
				String ^s3=s1->Substring(i+1);
				j=s3->IndexOf("i");
				String ^s4=s3->Remove(j,1);
				if (!f) s4="-"+s4;
				ret[0]=Convert::ToSingle(s2);
				ret[1]=Convert::ToSingle(s4);
				}
				catch(...){
					//MessageBox(NULL, "Hello World!", "Test", MB_OK);
					String ^ zero_string = "0";
					ret[0] = Convert::ToSingle(zero_string);
					ret[1] = ret[0];
					//return ret;
				}
				return ret; 

				
}