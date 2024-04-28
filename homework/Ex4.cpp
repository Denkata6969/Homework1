#include <iostream>    //g++ ex4.cpp -o ex4.out
#include <vector>   //./ex4.out < numbers.txt
int main(){
std:: vector<double> chisla;
double input;
while(std::cin>>input){
    chisla.push_back(input);

}
double  current = chisla[0];
for (double i : chisla){
 if(i != 0){
current = (i>current) ? current : i;
 }
}
return 0;
}