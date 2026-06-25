// Problem 9: AI-Based Medical Imaging System
// An AI system analyzes:
//? Pixel intensity (int)
//? Feature confidence score (float)
//? Segmentation accuracy (double) Task
// Create a template function normalizeValue() that divides a value by a maximum value and
// returns the normalized result.

#include<iostream>
using namespace std;

template<class TT>
double normalizeValue(TT values ,TT maximun_val){
 TT normal = values / maximun_val;
 return normal;
}

int main(){
	int o = 80 , p = 40;
	float q = 90 , w = 30;
	double g =365.54 , h =95.545;
	
	cout<<normalizeValue(o, p)<<endl;
	cout<<normalizeValue(q, w)<<endl;
	cout<<normalizeValue(g, h)<<endl;

	
	return 0;
}


