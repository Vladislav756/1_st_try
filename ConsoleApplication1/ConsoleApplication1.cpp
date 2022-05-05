#include <iostream>

int main()
{
    int num1, num2;
    int sum = 0, value = 0;
    //int diap1 = 0, diap2 = 0;
   /* std::cout << "Write 2 positive numbers";
    std::cin >> num1 >> num2;
    if (num1 >num2) 
    {
        while (num1 > num2)
        {
            num2++;
            std::cout << num2 << std::endl;
        }
    }
    else
    {
        while (num2 > num1)
        {
            num1++;
            std::cout << num1 << std::endl;
        }
    }
    */
    while (std::cin >> value)
        sum += value;
    std::cout << sum;
return 0;
}