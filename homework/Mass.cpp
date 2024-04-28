#include <iostream>
#include <cmath>

double BMI(double mass,double height){
    return mass/pow(height, 2);
}
double BMInew(double mass, double height){
    return 1.3*mass/pow(height, 2);
}

int main(){
double mass;
std::cout <<"Write the mass of the entity."<<std::endl;
std::cin>>mass;
double height;
std :: cout<<"Write the height of the entity"<<std::endl;
std::cin>>height;
std :: cout <<"Index of mass:: "<<BMI(mass,height)<<std::endl;
std :: cout<<"New index of mass:: " <<BMInew(mass,height)<<std::endl;
return 0;
}