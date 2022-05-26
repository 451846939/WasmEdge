//
// Created by hua shao on 2022/5/26.
//
#pragma once

#include "climbstairsenv.h"
#include "common/errcode.h"
#include "runtime/hostfunc.h"

namespace WasmEdge {
namespace Host {

template <typename T> class HostFuncClimbStairs : public Runtime::HostFunction<T> {
public:
  HostFuncClimbStairs(HostFuncClimbStairsEnvironment &HostEnv)
      : Runtime::HostFunction<T>(0), Env(HostEnv) {}

protected:
  HostFuncClimbStairsEnvironment &Env;
};

} // namespace Host
} // namespace WasmEdge