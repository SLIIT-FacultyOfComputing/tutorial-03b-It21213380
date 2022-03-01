#include <iostream>

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    std::cout << "Enter Box 1 Height : ";
    std::cin >> box1Height;
    std::cout << "Enter Box 1 Width : ";
    std::cin >> box1Width;
    std::cout << "Enter Box 1 Length : ";
    std::cin >> box1Length;
    
    std::cout << "Enter Box 2 Height : ";
    std::cin >> box2Height;
    std::cout << "Enter Box 2 Width : ";
    std::cin >> box2Width;
    std::cout << "Enter Box 2 Length : ";
    std::cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);
             
    std::cout << "Volume of Boxes is " << totalVolume << std::endl;
    
    return 0;
}

// Implement the Volume() function here
int volume(int height, int width, int length)
{
   int vol = 0;

   vol = height * width * length;

   return vol;
}

