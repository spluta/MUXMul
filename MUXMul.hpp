#pragma once

#include "SC_PlugIn.hpp"

namespace MUXMul10 {
class MUXMul10 : public SCUnit {
public:
  MUXMul10();
  // Destructor
  ~MUXMul10();

private:
  
  void next_a(int nSamples);
  void next_k(int nSamples);

  enum InputParams { Which, NumInputParams };
  enum Outputs { Out1, Out2, Out3, Out4, Out5, NumOutputParams };

  const int numMux = 10;
  float which0 = {in0(Which)};
};
}

namespace MUXMul100 {
class MUXMul100 : public SCUnit {
public:
  MUXMul100();
  // Destructor
  ~MUXMul100();

private:
  
  void next_a(int nSamples);
  void next_k(int nSamples);

  enum InputParams { Which, NumInputParams };
  enum Outputs { Out1, Out2, Out3, Out4, Out5, NumOutputParams };

  const int numMux = 100;
  float which0 = {in0(Which)};
};
}