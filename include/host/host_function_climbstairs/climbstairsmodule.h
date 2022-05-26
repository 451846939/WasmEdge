// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "climbstairsenv.h"
#include "runtime/importobj.h"

#include <cstdint>

namespace WasmEdge {
namespace Host {

class HostFuncClimbStairsModule : public Runtime::ImportObject {
public:
  HostFuncClimbStairsModule();

  HostFuncClimbStairsEnvironment &getEnv() { return Env; }

private:
  HostFuncClimbStairsEnvironment Env;
};

} // namespace Host
} // namespace WasmEdge
