//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    int N = 0;
    float sum = 0 ,sums = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        N++;
        sum += atof(textline.c_str());
        sums += pow(atof(textline.c_str()),2);
    }
    float mean = sum/N;
    float sd = sqrt(sums/N - pow(mean,2));
    cout << "Number of data = " << N << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sd ;
}