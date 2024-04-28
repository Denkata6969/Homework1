#include <iostream>
#include <cmath>
double Area(double r, double h){
    
    return pow(cos((r-h)/r),-1)*pow(r,2)-(r-h)*sqrt(2*r*h-pow(h,2));
}
double Volume(double area, double length){
    return area*length;
}
int main () {
    double radius, height, length;

    std::cout << "Write the radius" << std::endl;
    std::cin>>radius;
    if (radius==0){
        std::cout<<"incorrect parameter pls try again"<<std::endl;
        return 1;
    }
    std::cout << "Write the height" << std::endl;
    std::cin>>height;
    std::cout << "Write the length" << std::endl;
    std::cin>>length;
    std::cout <<"Volume is :: "<< Volume(Area(radius,height), length)<<std::endl;
    return 0;
}