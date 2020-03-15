#include <iostream>

// MATLAB Engine
#include "MatlabEngine.hpp"
#include "MatlabDataArray.hpp"


using namespace std;

int main()
{

  std::cout << "My first demo on invoking MATLAB in C++" << std::endl;

  std::unique_ptr<matlab::engine::MATLABEngine> matlabPtr = matlab::engine::startMATLAB();
  matlab::data::ArrayFactory factory;

  std::vector<matlab::data::Array> args
    ({
      factory.createArray<double>({1, 10}, {4, 8, 6, -1, -2, -3, -1, 3, 4, 5}),
      // factory.createScalar<int32_t>(3),
      // factory.createCharArray("Endpoints"),
      // factory.createCharArray("discard")
    });

  matlabPtr -> feval(u"plot", args);

  system("read -p \"Press any key to continue.\"");

  // // matlab::data::TypedArray<double> result = matlabPtr -> feval(u"movsum", args);


  // for (auto& elem : result){
  //   std::cout << "Result: " << elem << std::endl;
  // }

  return 0;

}

