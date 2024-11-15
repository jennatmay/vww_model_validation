/**
  ******************************************************************************
  * @file    vww_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-11-11T13:47:11-0600
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

#ifndef VWW_DATA_PARAMS_H
#define VWW_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_VWW_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_vww_data_weights_params[1]))
*/

#define AI_VWW_DATA_CONFIG               (NULL)


#define AI_VWW_DATA_ACTIVATIONS_SIZES \
  { 41152, }
#define AI_VWW_DATA_ACTIVATIONS_SIZE     (41152)
#define AI_VWW_DATA_ACTIVATIONS_COUNT    (1)
#define AI_VWW_DATA_ACTIVATION_1_SIZE    (41152)



#define AI_VWW_DATA_WEIGHTS_SIZES \
  { 40628, }
#define AI_VWW_DATA_WEIGHTS_SIZE         (40628)
#define AI_VWW_DATA_WEIGHTS_COUNT        (1)
#define AI_VWW_DATA_WEIGHT_1_SIZE        (40628)



#define AI_VWW_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_vww_activations_table[1])

extern ai_handle g_vww_activations_table[1 + 2];



#define AI_VWW_DATA_WEIGHTS_TABLE_GET() \
  (&g_vww_weights_table[1])

extern ai_handle g_vww_weights_table[1 + 2];


#endif    /* VWW_DATA_PARAMS_H */
