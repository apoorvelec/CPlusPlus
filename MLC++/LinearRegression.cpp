/*
 * LinearRegression.cpp
 *
 *  Created on: 17-Jan-2017
 *      Author: Apoorv
 */

#include<iostream>
#include <Eigen/Dense>
using namespace Eigen;

class LinearRegression{

private:
	Matrix2d InputData;
	Matrix2d OutputData;
	Matrix2d Theta;

public:
	LinearRegression(double* input, double* output, int inpRows, int inpCols,
			int outRows, int outCols);
	void buildModel();
	void predict();
	void calculateError();
	void getInputData();
	void getOutputData();
	void getTheta();
	void setInputData();
	void setOutputData();
};

// constructor
LinearRegression::LinearRegression(double* input, double* output, int inpRows, int inpCols,
		int outRows, int outCols){
	// append vector of ones as a column before input

}

void LinearRegression::buildModel(){

};

void print(int *arr, int m, int n)
{
    int i, j;
    int count = 0;
    for (i = 0; i < m; i++){
    	for (j = 0; j < n; j++){
    		std::cout<< *(arr+count);
    		if((count+1)%n == 0){
    			std::cout<<std::endl;
    		}
    		count++;
    	}

    }

}

int main(){
	int a[2][4]={{1,2,3,4}, {1,2,45,4}};
	print(*a, 2,4);
}
