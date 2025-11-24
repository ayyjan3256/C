#include <stdio.h>
void temp(double fahr,int LOW, int HIGH, int STEP);
int main(){
	temp(200,-40,212,20);
	}

void temp(double fahr,int LOW, int HIGH, int STEP){
	double celsius=0;
	for (fahr=HIGH;fahr>LOW;fahr-=STEP){
		celsius=5.0*(fahr-32)/9.0;
		printf("\n%f\t\t%f\n",fahr,celsius);
		}
	}
