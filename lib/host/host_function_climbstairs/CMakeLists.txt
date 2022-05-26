# SPDX-License-Identifier: Apache-2.0
# SPDX-FileCopyrightText: 2019-2022 Second State INC

wasmedge_add_library(wasmedgeHostModuleHostFuncClimbstairs
        climbstairsfunc.cpp
        climbstairsmodule.cpp
)

target_link_libraries(wasmedgeHostModuleHostFuncClimbstairs
  PUBLIC
  wasmedgeCommon
  wasmedgeSystem
)
