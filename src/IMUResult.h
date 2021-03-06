#ifndef IMURESULT_H_
#define IMURESULT_H_

#include <SPI.h>

class IMUResult
{

	public:
		IMUResult(); 
		void setResult(float x, float y, float z) { result[0] = x; result[1] = y; result[2] = z; }
		void getResult(float *destination) { destination[0]=result[0]; destination[1]=result[1]; destination[2]=result[2]; }
		void printResult();
		void setName(char* name);
	protected:
		float result[3];
		unsigned long millis;
		char resultName[16];

};


#endif
