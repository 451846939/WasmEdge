// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "host/host_function_climbstairs/climbstairsfunc.h"

namespace WasmEdge {
namespace Host {

Expect<void> HostFuncClimbStairsSetStepNumber::body(
    [[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst, int StepNumber) {
  Env.StepNumber = StepNumber;
  return {};
}

Expect<int>
HostFuncStartClimbStairs::body(Runtime::Instance::MemoryInstance *MemInst) {
  // Check memory instance from module.
  if (MemInst == nullptr) {
    return Unexpect(ErrCode::ExecutionFailed);
  }

  int p = 0, q = 0, r = 1;
  for (auto i = 1; i <= Env.StepNumber; ++i) {
    p = q;
    q = r;
    r = p + q;
  }
  return r;
}


Expect<void> HostFuncClimbStairsPrint::body([
    [maybe_unused]] Runtime::Instance::MemoryInstance *MemInst) {
  std::cout << "StepNumber: " << Env.StepNumber << std::endl;

  return {};
}

} // namespace Host
} // namespace WasmEdge
