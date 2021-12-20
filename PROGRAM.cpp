#include <iostream>

int main(void)
{
    int NumberOne = 0;
    int NumberTwo = 0;
    
    std::cout << "Please Enter NumberOne : ";
    std::cin >> NumberOne;
    
    std::cout << "Please Enter NumberTwo : ";
    std::cin >> NumberTwo;
    
    std::cout << "NumberOne Is : " << NumberOne << " . " << "NumberTwo Is : " << NumberTwo << "\n";
    
    std::cout << "NumberOne + NumberTwo = " << NumberOne + NumberTwo << "\n";
    std::cout << "NumberOne - NumberTwo = " << NumberOne - NumberTwo << "\n";
    std::cout << "NumberOne * NumberTwo = " << NumberOne * NumberTwo << "\n";
    std::cout << "NumberOne / NumberTwo = " << NumberOne / NumberTwo << "\n";  
    
    std::cout << "NumberOne % NumberTwo = " << NumberOne % NumberTwo << "\n";  
    std::cout << "NumberOne - (NumberOne / NumberTwo) * NumberTwo = " << NumberOne - (NumberOne / NumberTwo) * NumberTwo << "\n";

    return 0;
}
