// MUXMul.cpp
// Sam Pluta

#include "SC_PlugIn.hpp"
#include "SC_PlugIn.h"
#include "MUXMul.hpp"

static InterfaceTable *ft;

namespace MUXMul10
{
  MUXMul10::MUXMul10()
  {

    if (inRate(0) == 2)
      mCalcFunc = make_calc_function<MUXMul10, &MUXMul10::next_a>();
    else
      mCalcFunc = make_calc_function<MUXMul10, &MUXMul10::next_k>();

    next_a(1);
  }

  MUXMul10::~MUXMul10() {}

  void MUXMul10::next_a(int nSamples)
  {
    const float *which = in(Which);

    float *outbuf[numMux];

    for(int i2 = 0; i2<numMux; i2++)
      outbuf[i2] = out(i2);

    for (int i = 0; i < nSamples; ++i)
    {
      for(int i2 = 0; i2<numMux; i2++)
        {
          outbuf[i2][i] = 0.f;
          if(which[i]>=0 && which[i]<=numMux)
            outbuf[(int)which[i]][i] = 1.f;
        }
    }
  }

  void MUXMul10::next_k(int nSamples)
  {
    const float which = in0(Which);

    float *outbuf[numMux];

    for(int i2 = 0; i2<numMux; i2++)
      outbuf[i2] = out(i2);

    for (int i = 0; i < nSamples; ++i)
    {
      for(int i2 = 0; i2<numMux; i2++)
        outbuf[i2][i] = 0.f;
      if(which>=0&&which<=numMux)
        outbuf[(int)which][i] = 1.f;
    }
  }
} 


namespace MUXMul100
{
  MUXMul100::MUXMul100()
  {

    if (inRate(0) == 2)
      mCalcFunc = make_calc_function<MUXMul100, &MUXMul100::next_a>();
    else
      mCalcFunc = make_calc_function<MUXMul100, &MUXMul100::next_k>();

    next_a(1);
  }

  MUXMul100::~MUXMul100() {}

  void MUXMul100::next_a(int nSamples)
  {
    const float *which = in(Which);

    float *outbuf[numMux];

    for(int i2 = 0; i2<numMux; i2++)
      outbuf[i2] = out(i2);

    for (int i = 0; i < nSamples; ++i)
    {
      for(int i2 = 0; i2<numMux; i2++)
        {
          outbuf[i2][i] = 0.f;
          if(which[i]>=0 && which[i]<=numMux)
            outbuf[(int)which[i]][i] = 1.f;
        }
    }
  }

  void MUXMul100::next_k(int nSamples)
  {
    const float which = in0(Which);

    float *outbuf[numMux];

    for(int i2 = 0; i2<numMux; i2++)
      outbuf[i2] = out(i2);

    for (int i = 0; i < nSamples; ++i)
    {
      for(int i2 = 0; i2<numMux; i2++)
        outbuf[i2][i] = 0.f;
      if(which>=0&&which<=numMux)
        outbuf[(int)which][i] = 1.f;
    }
  }
} 


PluginLoad(MUXMul)
{
  ft = inTable;

  registerUnit<MUXMul10::MUXMul10>(ft, "MUXMul10", false);
  registerUnit<MUXMul100::MUXMul100>(ft, "MUXMul100", false);
}
