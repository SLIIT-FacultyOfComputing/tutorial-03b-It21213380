#include <iostream>
#include <iomanip>

int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
  
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 std::cout << "No" << "\t" << std::setw(10) << "Name" << "\t\t" << "Marks" << std::endl;
  
for (int r = 0; r < 5; r++) {
     std::cout <<  std::setw(2) << r+1 << std::setw(12)
        << names[r]
          << "\t\t" << std::setiosflags(std::ios::fixed) << std::setprecision(2) << marks[r] << std::endl;
 }

return 0;
  
}
