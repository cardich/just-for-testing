#include <iostream>

struct Range
{
	int start, end;
};

int main()
{
  Range r[2] = {{1, 10},
                {0, 20}};
  std::cout << r[0].start << " - " << r[0].end << std::endl; 
  std::cout << r[1].start << " - " << r[1].end << std::endl; 
  return 0;
}
