#include <iostream>

int main(){
    std::cout << "Digite o valor x1:";
    double x1;std::cin >> x1;
    std::cout << "Digite o valor x2:";
    double x2;std::cin >> x2;

    int result = int(x1) + int(x2);
    std::cout << "A adicao inteira dos valores eh: " << result << std::endl;
}
