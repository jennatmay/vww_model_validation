/**
  ******************************************************************************
  * @file    vww_int8_keras_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-11-11T15:35:36-0600
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

#ifndef VWW_INT8_KERAS_DATA_PARAMS_H
#define VWW_INT8_KERAS_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_VWW_INT8_KERAS_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_vww_int8_keras_data_weights_params[1]))
*/

#define AI_VWW_INT8_KERAS_DATA_CONFIG               (NULL)


#define AI_VWW_INT8_KERAS_DATA_ACTIVATIONS_SIZES \
  { 153696, }
#define AI_VWW_INT8_KERAS_DATA_ACTIVATIONS_SIZE     (153696)
#define AI_VWW_INT8_KERAS_DATA_ACTIVATIONS_COUNT    (1)
#define AI_VWW_INT8_KERAS_DATA_ACTIVATION_1_SIZE    (153696)



#define AI_VWW_INT8_KERAS_DATA_WEIGHTS_SIZES \
  { 843400, }
#define AI_VWW_INT8_KERAS_DATA_WEIGHTS_SIZE         (843400)
#define AI_VWW_INT8_KERAS_DATA_WEIGHTS_COUNT        (1)
#define AI_VWW_INT8_KERAS_DATA_WEIGHT_1_SIZE        (843400)



#define AI_VWW_INT8_KERAS_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_vww_int8_keras_activations_table[1])

extern ai_handle g_vww_int8_keras_activations_table[1 + 2];



#define AI_VWW_INT8_KERAS_DATA_WEIGHTS_TABLE_GET() \
  (&g_vww_int8_keras_weights_table[1])

extern ai_handle g_vww_int8_keras_weights_table[1 + 2];


#endif    /* VWW_INT8_KERAS_DATA_PARAMS_H */
