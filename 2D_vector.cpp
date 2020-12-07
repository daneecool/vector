#include <iostream>
#include <vector>

template<typename DB>
void Print2DVector(std::vector<std::vector<DB>> const&);

int main()
{
   std::cout << "Creating 2D vector\nEnter row size: ";
   int row_size;
   std::cin >> row_size;

   std::cout << "Enter column size: ";
   int col_size;
   std::cin >> col_size;

   std::cout << "\n";
    
   // create a 2D int vector with known Dimensions
   std::vector<std::vector<int>> aVector(row_size, std::vector<int>(col_size));

   // initialize the vector with some values other than zero
   for (int row_loop = 0; row_loop < row_size; row_loop++)
   {      
      for (int col_loop = 0; col_loop < col_size; col_loop++)
      {
         aVector[row_loop][col_loop] = (row_loop + col_loop);
         row_loop.push_back(aVector);
      }
   }

   // Display the filled 2D vector
   Print2DVector(aVector);
}

template<typename DB>
void Print2DVector(std::vector<std::vector<DB>> const& aVec)
{
   int row_size = aVec.size();
   int col_size = aVec[0].size();

   for (int row_loop = 0; row_loop < row_size; row_loop++)
   {
      for (int col_loop = 0; col_loop < col_size; col_loop++)
      {
         // Display the filled 2D vector
         std::cout << aVec[row_loop][col_loop] << ' ';
      }
      std::cout << '\n';
   }
}
