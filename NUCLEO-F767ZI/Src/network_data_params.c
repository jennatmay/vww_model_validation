/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Oct 28 19:46:13 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"
#if defined ( __ICCARM__ )
#define AI_EXTERNAL_FLASH    _Pragma("location=\"ExternalFlashSection\"")
#define AI_INTERNAL_FLASH    _Pragma("location=\"InternalFlashSection\"")
#elif defined ( __CC_ARM ) || ( __GNUC__ )
#define AI_EXTERNAL_FLASH    __attribute__((section(".ExternalFlashSection")))
#define AI_INTERNAL_FLASH    __attribute__((section(".InternalFlashSection")))
#endif


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
AI_INTERNAL_FLASH
const ai_u64 s_network_weights_array_u64[1] = {
  0x3fff8e8ebf7d4092U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};
