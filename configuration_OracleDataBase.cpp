#include <cmath>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <boost/format.hpp>
#include "Alfred/print.h"
#include "Parser/utility.h"
#include "Fred/Mapi/mapi.h"
#include "Fred/Mapi/iterativemapi.h"
#include "Mapi/config.h"
#include "Database/databaseinterface.h"
using namespace std;

// Defining the rows and columns of vector of vectors
#define ROW 61
#define COL 6

config::config()
{

}

string config::processOutputMessage(string output)
{
  //bool DatabaseInterface::isConnected()
}

string config::processInputMessage(string input)
{
  // Initializing the vector of vectors
  vector<vector<int> > vec;

  // Elements to insert in column
  int num = 0;

  // Inserting elements into vector
  for (int i = 0; i < ROW; i++) {
    // Vector to store column elements
    vector<int> v1;

    for (int j = 0; j < COL; j++) {
      v1.push_back(num);
      num += 1;
    }

    // Pushing back above 1D vector to create the 2D vector
    vec.push_back(v1);
  }

  // Displaying the 2D vector
  if (bool connectivity = DatabaseInterface::isConnected() == 1) {
    noRpcRequest=true;
    cout<<"Connected: "<< connectivity <<endl<<'\n';
    for (int i = 0; i < vec.size(); i++) {
      for (int j = 0; j < vec[i].size(); j++)
	     cout << vec[i][j] << " ";
       cout << endl;
      }
  }
}
