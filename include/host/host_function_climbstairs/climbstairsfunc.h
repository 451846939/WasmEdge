//
// Created by hua shao on 2022/5/26.
//

#pragma once

#include "climbstairsbase.h"
#include "common/defines.h"

namespace WasmEdge {
namespace Host {

class HostFuncClimbStairsSetStepNumber
    : public HostFuncClimbStairs<HostFuncClimbStairsSetStepNumber> {
public:
  HostFuncClimbStairsSetStepNumber(HostFuncClimbStairsEnvironment &HostEnv)
      : HostFuncClimbStairs(HostEnv) {}
  Expect<void> body(Runtime::Instance::MemoryInstance *MemInst, int StepNumber);
};
class HostFuncClimbStairsPrint : public HostFuncClimbStairs<HostFuncClimbStairsPrint> {
public:
  HostFuncClimbStairsPrint(HostFuncClimbStairsEnvironment &HostEnv)
      : HostFuncClimbStairs(HostEnv) {}
  Expect<void> body(Runtime::Instance::MemoryInstance *MemInst);
};

class HostFuncStartClimbStairs : public HostFuncClimbStairs<HostFuncStartClimbStairs> {
public:
  HostFuncStartClimbStairs(HostFuncClimbStairsEnvironment &HostEnv)
      : HostFuncClimbStairs(HostEnv) {}
  Expect<int> body(Runtime::Instance::MemoryInstance *MemInst);
};
} // namespace Host
} // namespace WasmEdge
