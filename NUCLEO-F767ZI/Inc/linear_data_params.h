/**
  ******************************************************************************
  * @file    linear_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-11-11T00:20:07-0600
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

#ifndef LINEAR_DATA_PARAMS_H
#define LINEAR_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_LINEAR_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_linear_data_weights_params[1]))
*/

#define AI_LINEAR_DATA_CONFIG               (NULL)


#define AI_LINEAR_DATA_ACTIVATIONS_SIZES \
  { 8, }
#define AI_LINEAR_DATA_ACTIVATIONS_SIZE     (8)
#define AI_LINEAR_DATA_ACTIVATIONS_COUNT    (1)
#define AI_LINEAR_DATA_ACTIVATION_1_SIZE    (8)



#define AI_LINEAR_DATA_WEIGHTS_SIZES \
  { 8, }
#define AI_LINEAR_DATA_WEIGHTS_SIZE         (8)
#define AI_LINEAR_DATA_WEIGHTS_COUNT        (1)
#define AI_LINEAR_DATA_WEIGHT_1_SIZE        (8)



#define AI_LINEAR_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_linear_activations_table[1])

extern ai_handle g_linear_activations_table[1 + 2];



#define AI_LINEAR_DATA_WEIGHTS_TABLE_GET() \
  (&g_linear_weights_table[1])

extern ai_handle g_linear_weights_table[1 + 2];


#endif    /* LINEAR_DATA_PARAMS_H */
