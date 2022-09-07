#include <iostream>      //For I/O Functions
#include <windows.h>   //For Beep & Sleep functions
#include<stdlib.h>  //For System Pause
using namespace std;

int main()
{
    std::cout << "Ass Destroyer!\n";
    for (int i = 0; i < 50; i++)
        Beep(400 + i * 50, i * 40 - i); Sleep(100);
}