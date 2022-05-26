// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "host/host_function_climbstairs/climbstairsmodule.h"

#include "host/host_function_climbstairs/climbstairsfunc.h"

namespace WasmEdge {
namespace Host {

/// Register your functions in module.
HostFuncClimbStairsModule::HostFuncClimbStairsModule()
    : ImportObject("host_function_climbstairs") {
  addHostFunc("host_function_set_step_number",
              std::make_unique<HostFuncClimbStairsSetStepNumber>(Env));
  addHostFunc("host_function_start_climb_stairs",
              std::make_unique<HostFuncStartClimbStairs>(Env));
  addHostFunc("host_function_climb_stairs_print",
              std::make_unique<HostFuncClimbStairsPrint>(Env));
}

} // namespace Host
} // namespace WasmEdge
