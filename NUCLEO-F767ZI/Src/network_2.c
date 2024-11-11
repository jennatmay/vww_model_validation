/**
  ******************************************************************************
  * @file    network_2.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-11-11T13:35:33-0600
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network_2.h"
#include "network_2_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network_2
 
#undef AI_NETWORK_2_MODEL_SIGNATURE
#define AI_NETWORK_2_MODEL_SIGNATURE     "0x8033b904830c62911d871fdee80a8a00"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "2024-11-11T13:35:33-0600"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_2_N_BATCHES
#define AI_NETWORK_2_N_BATCHES         (1)

static ai_ptr g_network_2_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_2_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  input_1_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 27648, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  activation_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  activation_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 36864, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  activation_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 36864, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  activation_3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  activation_4_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  activation_5_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  activation_6_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  activation_7_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  activation_8_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_4_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  activation_9_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  activation_10_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_5_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  activation_11_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  activation_12_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_6_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  activation_13_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  activation_14_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_7_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  activation_15_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  activation_16_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_8_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  activation_17_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  activation_18_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#39 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_9_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#40 */
AI_ARRAY_OBJ_DECLARE(
  activation_19_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#41 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#42 */
AI_ARRAY_OBJ_DECLARE(
  activation_20_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#43 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_10_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#44 */
AI_ARRAY_OBJ_DECLARE(
  activation_21_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#45 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#46 */
AI_ARRAY_OBJ_DECLARE(
  activation_22_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4608, AI_STATIC)

/* Array#47 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_11_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#48 */
AI_ARRAY_OBJ_DECLARE(
  activation_23_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#49 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#50 */
AI_ARRAY_OBJ_DECLARE(
  activation_24_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#51 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_12_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#52 */
AI_ARRAY_OBJ_DECLARE(
  activation_25_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#53 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#54 */
AI_ARRAY_OBJ_DECLARE(
  activation_26_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#55 */
AI_ARRAY_OBJ_DECLARE(
  average_pooling2d_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)

/* Array#56 */
AI_ARRAY_OBJ_DECLARE(
  dense_dense_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2, AI_STATIC)

/* Array#57 */
AI_ARRAY_OBJ_DECLARE(
  dense_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 2, AI_STATIC)

/* Array#58 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 216, AI_STATIC)

/* Array#59 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#60 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 72, AI_STATIC)

/* Array#61 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#62 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#63 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16, AI_STATIC)

/* Array#64 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_1_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 144, AI_STATIC)

/* Array#65 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_1_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16, AI_STATIC)

/* Array#66 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#67 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#68 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_2_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 288, AI_STATIC)

/* Array#69 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_2_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#70 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1024, AI_STATIC)

/* Array#71 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#72 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_3_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 288, AI_STATIC)

/* Array#73 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_3_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#74 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2048, AI_STATIC)

/* Array#75 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#76 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_4_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 576, AI_STATIC)

/* Array#77 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_4_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#78 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4096, AI_STATIC)

/* Array#79 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#80 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_5_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 576, AI_STATIC)

/* Array#81 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_5_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#82 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8192, AI_STATIC)

/* Array#83 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#84 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_6_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#85 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_6_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#86 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)

/* Array#87 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#88 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_7_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#89 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_7_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#90 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)

/* Array#91 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#92 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_8_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#93 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_8_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#94 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)

/* Array#95 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#96 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_9_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#97 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_9_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#98 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)

/* Array#99 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#100 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_10_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#101 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_10_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#102 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)

/* Array#103 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#104 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_11_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1152, AI_STATIC)

/* Array#105 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_11_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#106 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32768, AI_STATIC)

/* Array#107 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)

/* Array#108 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_12_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2304, AI_STATIC)

/* Array#109 */
AI_ARRAY_OBJ_DECLARE(
  depthwise_conv2d_12_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)

/* Array#110 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 65536, AI_STATIC)

/* Array#111 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)

/* Array#112 */
AI_ARRAY_OBJ_DECLARE(
  dense_dense_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#113 */
AI_ARRAY_OBJ_DECLARE(
  dense_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2, AI_STATIC)

/* Array#114 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 27, AI_STATIC)

/* Array#115 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_1_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8, AI_STATIC)

/* Array#116 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_2_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16, AI_STATIC)

/* Array#117 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_3_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#118 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#119 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_5_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#120 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#121 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_7_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#122 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_8_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#123 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_9_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#124 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_10_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#125 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_11_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#126 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/* Array#127 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_13_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  input_1_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 96, 96), AI_STRIDE_INIT(4, 4, 4, 12, 1152),
  1, &input_1_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_output, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 4, 4, 32, 1536),
  1, &conv2d_output_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  activation_output, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 4, 4, 32, 1536),
  1, &activation_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_output, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 4, 4, 32, 1536),
  1, &depthwise_conv2d_output_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  activation_1_output, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 48, 48), AI_STRIDE_INIT(4, 4, 4, 32, 1536),
  1, &activation_1_output_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_output, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 48, 48), AI_STRIDE_INIT(4, 4, 4, 64, 3072),
  1, &conv2d_1_output_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  activation_2_output, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 48, 48), AI_STRIDE_INIT(4, 4, 4, 64, 3072),
  1, &activation_2_output_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_1_output, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 24, 24), AI_STRIDE_INIT(4, 4, 4, 64, 1536),
  1, &depthwise_conv2d_1_output_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  activation_3_output, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 24, 24), AI_STRIDE_INIT(4, 4, 4, 64, 1536),
  1, &activation_3_output_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 4, 4, 128, 3072),
  1, &conv2d_2_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  activation_4_output, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 4, 4, 128, 3072),
  1, &activation_4_output_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_2_output, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 4, 4, 128, 3072),
  1, &depthwise_conv2d_2_output_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  activation_5_output, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 4, 4, 128, 3072),
  1, &activation_5_output_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_output, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 4, 4, 128, 3072),
  1, &conv2d_3_output_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  activation_6_output, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 24, 24), AI_STRIDE_INIT(4, 4, 4, 128, 3072),
  1, &activation_6_output_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_3_output, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 12, 12), AI_STRIDE_INIT(4, 4, 4, 128, 1536),
  1, &depthwise_conv2d_3_output_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  activation_7_output, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 12, 12), AI_STRIDE_INIT(4, 4, 4, 128, 1536),
  1, &activation_7_output_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_output, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 4, 4, 256, 3072),
  1, &conv2d_4_output_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  activation_8_output, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 4, 4, 256, 3072),
  1, &activation_8_output_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_4_output, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 4, 4, 256, 3072),
  1, &depthwise_conv2d_4_output_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  activation_9_output, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 4, 4, 256, 3072),
  1, &activation_9_output_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_output, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 4, 4, 256, 3072),
  1, &conv2d_5_output_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  activation_10_output, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 12, 12), AI_STRIDE_INIT(4, 4, 4, 256, 3072),
  1, &activation_10_output_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_5_output, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 6, 6), AI_STRIDE_INIT(4, 4, 4, 256, 1536),
  1, &depthwise_conv2d_5_output_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  activation_11_output, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 6, 6), AI_STRIDE_INIT(4, 4, 4, 256, 1536),
  1, &activation_11_output_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  25, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &conv2d_6_output_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  activation_12_output, AI_STATIC,
  26, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_12_output_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_6_output, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &depthwise_conv2d_6_output_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  activation_13_output, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_13_output_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_output, AI_STATIC,
  29, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &conv2d_7_output_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  activation_14_output, AI_STATIC,
  30, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_14_output_array, NULL)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_7_output, AI_STATIC,
  31, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &depthwise_conv2d_7_output_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  activation_15_output, AI_STATIC,
  32, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_15_output_array, NULL)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_output, AI_STATIC,
  33, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &conv2d_8_output_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  activation_16_output, AI_STATIC,
  34, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_16_output_array, NULL)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_8_output, AI_STATIC,
  35, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &depthwise_conv2d_8_output_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  activation_17_output, AI_STATIC,
  36, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_17_output_array, NULL)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_output, AI_STATIC,
  37, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &conv2d_9_output_array, NULL)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  activation_18_output, AI_STATIC,
  38, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_18_output_array, NULL)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_9_output, AI_STATIC,
  39, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &depthwise_conv2d_9_output_array, NULL)

/* Tensor #40 */
AI_TENSOR_OBJ_DECLARE(
  activation_19_output, AI_STATIC,
  40, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_19_output_array, NULL)

/* Tensor #41 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_output, AI_STATIC,
  41, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &conv2d_10_output_array, NULL)

/* Tensor #42 */
AI_TENSOR_OBJ_DECLARE(
  activation_20_output, AI_STATIC,
  42, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_20_output_array, NULL)

/* Tensor #43 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_10_output, AI_STATIC,
  43, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &depthwise_conv2d_10_output_array, NULL)

/* Tensor #44 */
AI_TENSOR_OBJ_DECLARE(
  activation_21_output, AI_STATIC,
  44, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_21_output_array, NULL)

/* Tensor #45 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_output, AI_STATIC,
  45, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &conv2d_11_output_array, NULL)

/* Tensor #46 */
AI_TENSOR_OBJ_DECLARE(
  activation_22_output, AI_STATIC,
  46, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 6, 6), AI_STRIDE_INIT(4, 4, 4, 512, 3072),
  1, &activation_22_output_array, NULL)

/* Tensor #47 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_11_output, AI_STATIC,
  47, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 3, 3), AI_STRIDE_INIT(4, 4, 4, 512, 1536),
  1, &depthwise_conv2d_11_output_array, NULL)

/* Tensor #48 */
AI_TENSOR_OBJ_DECLARE(
  activation_23_output, AI_STATIC,
  48, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 3, 3), AI_STRIDE_INIT(4, 4, 4, 512, 1536),
  1, &activation_23_output_array, NULL)

/* Tensor #49 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  49, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 4, 4, 1024, 3072),
  1, &conv2d_12_output_array, NULL)

/* Tensor #50 */
AI_TENSOR_OBJ_DECLARE(
  activation_24_output, AI_STATIC,
  50, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 4, 4, 1024, 3072),
  1, &activation_24_output_array, NULL)

/* Tensor #51 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_12_output, AI_STATIC,
  51, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 4, 4, 1024, 3072),
  1, &depthwise_conv2d_12_output_array, NULL)

/* Tensor #52 */
AI_TENSOR_OBJ_DECLARE(
  activation_25_output, AI_STATIC,
  52, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 4, 4, 1024, 3072),
  1, &activation_25_output_array, NULL)

/* Tensor #53 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_output, AI_STATIC,
  53, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 4, 4, 1024, 3072),
  1, &conv2d_13_output_array, NULL)

/* Tensor #54 */
AI_TENSOR_OBJ_DECLARE(
  activation_26_output, AI_STATIC,
  54, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 3, 3), AI_STRIDE_INIT(4, 4, 4, 1024, 3072),
  1, &activation_26_output_array, NULL)

/* Tensor #55 */
AI_TENSOR_OBJ_DECLARE(
  average_pooling2d_output, AI_STATIC,
  55, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &average_pooling2d_output_array, NULL)

/* Tensor #56 */
AI_TENSOR_OBJ_DECLARE(
  dense_dense_output, AI_STATIC,
  56, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &dense_dense_output_array, NULL)

/* Tensor #57 */
AI_TENSOR_OBJ_DECLARE(
  dense_output, AI_STATIC,
  57, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &dense_output_array, NULL)

/* Tensor #58 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_weights, AI_STATIC,
  58, 0x0,
  AI_SHAPE_INIT(4, 3, 3, 3, 8), AI_STRIDE_INIT(4, 4, 12, 96, 288),
  1, &conv2d_weights_array, NULL)

/* Tensor #59 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_bias, AI_STATIC,
  59, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_bias_array, NULL)

/* Tensor #60 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_weights, AI_STATIC,
  60, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 8), AI_STRIDE_INIT(4, 1, 8, 8, 8),
  1, &depthwise_conv2d_weights_array, NULL)

/* Tensor #61 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_bias, AI_STATIC,
  61, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &depthwise_conv2d_bias_array, NULL)

/* Tensor #62 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_weights, AI_STATIC,
  62, 0x0,
  AI_SHAPE_INIT(4, 8, 1, 1, 16), AI_STRIDE_INIT(4, 4, 32, 512, 512),
  1, &conv2d_1_weights_array, NULL)

/* Tensor #63 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_bias, AI_STATIC,
  63, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_1_bias_array, NULL)

/* Tensor #64 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_1_weights, AI_STATIC,
  64, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 16), AI_STRIDE_INIT(4, 1, 16, 16, 16),
  1, &depthwise_conv2d_1_weights_array, NULL)

/* Tensor #65 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_1_bias, AI_STATIC,
  65, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &depthwise_conv2d_1_bias_array, NULL)

/* Tensor #66 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_weights, AI_STATIC,
  66, 0x0,
  AI_SHAPE_INIT(4, 16, 1, 1, 32), AI_STRIDE_INIT(4, 4, 64, 2048, 2048),
  1, &conv2d_2_weights_array, NULL)

/* Tensor #67 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_bias, AI_STATIC,
  67, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_2_bias_array, NULL)

/* Tensor #68 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_2_weights, AI_STATIC,
  68, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 32), AI_STRIDE_INIT(4, 1, 32, 32, 32),
  1, &depthwise_conv2d_2_weights_array, NULL)

/* Tensor #69 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_2_bias, AI_STATIC,
  69, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &depthwise_conv2d_2_bias_array, NULL)

/* Tensor #70 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_weights, AI_STATIC,
  70, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 32), AI_STRIDE_INIT(4, 4, 128, 4096, 4096),
  1, &conv2d_3_weights_array, NULL)

/* Tensor #71 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_bias, AI_STATIC,
  71, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_3_bias_array, NULL)

/* Tensor #72 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_3_weights, AI_STATIC,
  72, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 32), AI_STRIDE_INIT(4, 1, 32, 32, 32),
  1, &depthwise_conv2d_3_weights_array, NULL)

/* Tensor #73 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_3_bias, AI_STATIC,
  73, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &depthwise_conv2d_3_bias_array, NULL)

/* Tensor #74 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_weights, AI_STATIC,
  74, 0x0,
  AI_SHAPE_INIT(4, 32, 1, 1, 64), AI_STRIDE_INIT(4, 4, 128, 8192, 8192),
  1, &conv2d_4_weights_array, NULL)

/* Tensor #75 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_bias, AI_STATIC,
  75, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_4_bias_array, NULL)

/* Tensor #76 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_4_weights, AI_STATIC,
  76, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 64), AI_STRIDE_INIT(4, 1, 64, 64, 64),
  1, &depthwise_conv2d_4_weights_array, NULL)

/* Tensor #77 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_4_bias, AI_STATIC,
  77, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &depthwise_conv2d_4_bias_array, NULL)

/* Tensor #78 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_weights, AI_STATIC,
  78, 0x0,
  AI_SHAPE_INIT(4, 64, 1, 1, 64), AI_STRIDE_INIT(4, 4, 256, 16384, 16384),
  1, &conv2d_5_weights_array, NULL)

/* Tensor #79 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_bias, AI_STATIC,
  79, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_5_bias_array, NULL)

/* Tensor #80 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_5_weights, AI_STATIC,
  80, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 64), AI_STRIDE_INIT(4, 1, 64, 64, 64),
  1, &depthwise_conv2d_5_weights_array, NULL)

/* Tensor #81 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_5_bias, AI_STATIC,
  81, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &depthwise_conv2d_5_bias_array, NULL)

/* Tensor #82 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  82, 0x0,
  AI_SHAPE_INIT(4, 64, 1, 1, 128), AI_STRIDE_INIT(4, 4, 256, 32768, 32768),
  1, &conv2d_6_weights_array, NULL)

/* Tensor #83 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  83, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_6_bias_array, NULL)

/* Tensor #84 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_6_weights, AI_STATIC,
  84, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &depthwise_conv2d_6_weights_array, NULL)

/* Tensor #85 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_6_bias, AI_STATIC,
  85, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &depthwise_conv2d_6_bias_array, NULL)

/* Tensor #86 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_weights, AI_STATIC,
  86, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 4, 512, 65536, 65536),
  1, &conv2d_7_weights_array, NULL)

/* Tensor #87 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_bias, AI_STATIC,
  87, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_7_bias_array, NULL)

/* Tensor #88 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_7_weights, AI_STATIC,
  88, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &depthwise_conv2d_7_weights_array, NULL)

/* Tensor #89 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_7_bias, AI_STATIC,
  89, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &depthwise_conv2d_7_bias_array, NULL)

/* Tensor #90 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_weights, AI_STATIC,
  90, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 4, 512, 65536, 65536),
  1, &conv2d_8_weights_array, NULL)

/* Tensor #91 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_bias, AI_STATIC,
  91, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_8_bias_array, NULL)

/* Tensor #92 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_8_weights, AI_STATIC,
  92, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &depthwise_conv2d_8_weights_array, NULL)

/* Tensor #93 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_8_bias, AI_STATIC,
  93, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &depthwise_conv2d_8_bias_array, NULL)

/* Tensor #94 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_weights, AI_STATIC,
  94, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 4, 512, 65536, 65536),
  1, &conv2d_9_weights_array, NULL)

/* Tensor #95 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_bias, AI_STATIC,
  95, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_9_bias_array, NULL)

/* Tensor #96 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_9_weights, AI_STATIC,
  96, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &depthwise_conv2d_9_weights_array, NULL)

/* Tensor #97 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_9_bias, AI_STATIC,
  97, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &depthwise_conv2d_9_bias_array, NULL)

/* Tensor #98 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_weights, AI_STATIC,
  98, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 4, 512, 65536, 65536),
  1, &conv2d_10_weights_array, NULL)

/* Tensor #99 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_bias, AI_STATIC,
  99, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_10_bias_array, NULL)

/* Tensor #100 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_10_weights, AI_STATIC,
  100, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &depthwise_conv2d_10_weights_array, NULL)

/* Tensor #101 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_10_bias, AI_STATIC,
  101, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &depthwise_conv2d_10_bias_array, NULL)

/* Tensor #102 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_weights, AI_STATIC,
  102, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 128), AI_STRIDE_INIT(4, 4, 512, 65536, 65536),
  1, &conv2d_11_weights_array, NULL)

/* Tensor #103 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_bias, AI_STATIC,
  103, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_11_bias_array, NULL)

/* Tensor #104 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_11_weights, AI_STATIC,
  104, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 128), AI_STRIDE_INIT(4, 1, 128, 128, 128),
  1, &depthwise_conv2d_11_weights_array, NULL)

/* Tensor #105 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_11_bias, AI_STATIC,
  105, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &depthwise_conv2d_11_bias_array, NULL)

/* Tensor #106 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  106, 0x0,
  AI_SHAPE_INIT(4, 128, 1, 1, 256), AI_STRIDE_INIT(4, 4, 512, 131072, 131072),
  1, &conv2d_12_weights_array, NULL)

/* Tensor #107 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  107, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #108 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_12_weights, AI_STATIC,
  108, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 256), AI_STRIDE_INIT(4, 1, 256, 256, 256),
  1, &depthwise_conv2d_12_weights_array, NULL)

/* Tensor #109 */
AI_TENSOR_OBJ_DECLARE(
  depthwise_conv2d_12_bias, AI_STATIC,
  109, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &depthwise_conv2d_12_bias_array, NULL)

/* Tensor #110 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_weights, AI_STATIC,
  110, 0x0,
  AI_SHAPE_INIT(4, 256, 1, 1, 256), AI_STRIDE_INIT(4, 4, 1024, 262144, 262144),
  1, &conv2d_13_weights_array, NULL)

/* Tensor #111 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_bias, AI_STATIC,
  111, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &conv2d_13_bias_array, NULL)

/* Tensor #112 */
AI_TENSOR_OBJ_DECLARE(
  dense_dense_weights, AI_STATIC,
  112, 0x0,
  AI_SHAPE_INIT(4, 256, 2, 1, 1), AI_STRIDE_INIT(4, 4, 1024, 2048, 2048),
  1, &dense_dense_weights_array, NULL)

/* Tensor #113 */
AI_TENSOR_OBJ_DECLARE(
  dense_dense_bias, AI_STATIC,
  113, 0x0,
  AI_SHAPE_INIT(4, 1, 2, 1, 1), AI_STRIDE_INIT(4, 4, 4, 8, 8),
  1, &dense_dense_bias_array, NULL)

/* Tensor #114 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_scratch0, AI_STATIC,
  114, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 3), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_scratch0_array, NULL)

/* Tensor #115 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_1_scratch0, AI_STATIC,
  115, 0x0,
  AI_SHAPE_INIT(4, 1, 8, 1, 1), AI_STRIDE_INIT(4, 4, 4, 32, 32),
  1, &conv2d_1_scratch0_array, NULL)

/* Tensor #116 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_2_scratch0, AI_STATIC,
  116, 0x0,
  AI_SHAPE_INIT(4, 1, 16, 1, 1), AI_STRIDE_INIT(4, 4, 4, 64, 64),
  1, &conv2d_2_scratch0_array, NULL)

/* Tensor #117 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_3_scratch0, AI_STATIC,
  117, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_3_scratch0_array, NULL)

/* Tensor #118 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch0, AI_STATIC,
  118, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_4_scratch0_array, NULL)

/* Tensor #119 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_5_scratch0, AI_STATIC,
  119, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_5_scratch0_array, NULL)

/* Tensor #120 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_scratch0, AI_STATIC,
  120, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_6_scratch0_array, NULL)

/* Tensor #121 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_7_scratch0, AI_STATIC,
  121, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_7_scratch0_array, NULL)

/* Tensor #122 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_8_scratch0, AI_STATIC,
  122, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_8_scratch0_array, NULL)

/* Tensor #123 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_9_scratch0, AI_STATIC,
  123, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_9_scratch0_array, NULL)

/* Tensor #124 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_10_scratch0, AI_STATIC,
  124, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_10_scratch0_array, NULL)

/* Tensor #125 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_11_scratch0, AI_STATIC,
  125, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_11_scratch0_array, NULL)

/* Tensor #126 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_scratch0, AI_STATIC,
  126, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_12_scratch0_array, NULL)

/* Tensor #127 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_13_scratch0, AI_STATIC,
  127, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &conv2d_13_scratch0_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_layer, 84,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm,
  &dense_chain,
  NULL, &dense_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &average_pooling2d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_dense_weights, &dense_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_dense_layer, 84,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_dense_chain,
  NULL, &dense_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  average_pooling2d_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_26_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &average_pooling2d_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  average_pooling2d_layer, 82,
  POOL_TYPE, 0x0, NULL,
  pool, forward_ap,
  &average_pooling2d_chain,
  NULL, &dense_dense_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(3, 3), 
  .pool_stride = AI_SHAPE_2D_INIT(3, 3), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_26_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_26_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_26_layer, 81,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_26_chain,
  NULL, &average_pooling2d_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_25_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_13_weights, &conv2d_13_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_13_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_13_layer, 80,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_13_chain,
  NULL, &activation_26_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_25_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_25_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_25_layer, 78,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_25_chain,
  NULL, &conv2d_13_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_24_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_12_weights, &depthwise_conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_12_layer, 77,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_12_chain,
  NULL, &activation_25_layer, AI_STATIC, 
  .groups = 256, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_24_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_24_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_24_layer, 75,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_24_chain,
  NULL, &depthwise_conv2d_12_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_23_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_12_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 74,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_12_chain,
  NULL, &activation_24_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_23_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_23_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_23_layer, 72,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_23_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_22_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_11_weights, &depthwise_conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_11_layer, 71,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_11_chain,
  NULL, &activation_23_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_22_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_22_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_22_layer, 69,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_22_chain,
  NULL, &depthwise_conv2d_11_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_21_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_11_weights, &conv2d_11_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_11_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_11_layer, 68,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_11_chain,
  NULL, &activation_22_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_21_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_21_layer, 66,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_21_chain,
  NULL, &conv2d_11_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_10_weights, &depthwise_conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_10_layer, 65,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_10_chain,
  NULL, &activation_21_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_20_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_20_layer, 63,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_20_chain,
  NULL, &depthwise_conv2d_10_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_10_weights, &conv2d_10_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_10_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_10_layer, 62,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_10_chain,
  NULL, &activation_20_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_19_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_19_layer, 60,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_19_chain,
  NULL, &conv2d_10_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_18_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_9_weights, &depthwise_conv2d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_9_layer, 59,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_9_chain,
  NULL, &activation_19_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_18_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_18_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_18_layer, 57,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_18_chain,
  NULL, &depthwise_conv2d_9_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_9_weights, &conv2d_9_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_9_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_9_layer, 56,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_9_chain,
  NULL, &activation_18_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_17_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_17_layer, 54,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_17_chain,
  NULL, &conv2d_9_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_16_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_8_weights, &depthwise_conv2d_8_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_8_layer, 53,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_8_chain,
  NULL, &activation_17_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_16_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_16_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_16_layer, 51,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_16_chain,
  NULL, &depthwise_conv2d_8_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_8_weights, &conv2d_8_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_8_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_8_layer, 50,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_8_chain,
  NULL, &activation_16_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_15_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_15_layer, 48,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_15_chain,
  NULL, &conv2d_8_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_7_weights, &depthwise_conv2d_7_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_7_layer, 47,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_7_chain,
  NULL, &activation_15_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_14_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_14_layer, 45,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_14_chain,
  NULL, &depthwise_conv2d_7_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_13_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_7_weights, &conv2d_7_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_7_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_7_layer, 44,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_7_chain,
  NULL, &activation_14_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_13_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_13_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_13_layer, 42,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_13_chain,
  NULL, &conv2d_7_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_6_weights, &depthwise_conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_6_layer, 41,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_6_chain,
  NULL, &activation_13_layer, AI_STATIC, 
  .groups = 128, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_12_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_12_layer, 39,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_12_chain,
  NULL, &depthwise_conv2d_6_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_6_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 38,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_6_chain,
  NULL, &activation_12_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_11_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_11_layer, 36,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_11_chain,
  NULL, &conv2d_6_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_5_weights, &depthwise_conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_5_layer, 35,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_5_chain,
  NULL, &activation_11_layer, AI_STATIC, 
  .groups = 64, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_10_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_10_layer, 33,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_10_chain,
  NULL, &depthwise_conv2d_5_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_5_weights, &conv2d_5_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_5_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_5_layer, 32,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_5_chain,
  NULL, &activation_10_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_9_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_9_layer, 30,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_9_chain,
  NULL, &conv2d_5_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_4_weights, &depthwise_conv2d_4_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_4_layer, 29,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_4_chain,
  NULL, &activation_9_layer, AI_STATIC, 
  .groups = 64, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_8_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_8_layer, 27,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_8_chain,
  NULL, &depthwise_conv2d_4_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_4_weights, &conv2d_4_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_4_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_4_layer, 26,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_4_chain,
  NULL, &activation_8_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_7_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_7_layer, 24,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_7_chain,
  NULL, &conv2d_4_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_3_weights, &depthwise_conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_3_layer, 23,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_3_chain,
  NULL, &activation_7_layer, AI_STATIC, 
  .groups = 32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_6_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_6_layer, 21,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_6_chain,
  NULL, &depthwise_conv2d_3_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_3_weights, &conv2d_3_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_3_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_3_layer, 20,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_3_chain,
  NULL, &activation_6_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_5_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_5_layer, 18,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_5_chain,
  NULL, &conv2d_3_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_2_weights, &depthwise_conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_2_layer, 17,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_2_chain,
  NULL, &activation_5_layer, AI_STATIC, 
  .groups = 32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_4_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_4_layer, 15,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_4_chain,
  NULL, &depthwise_conv2d_2_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_2_weights, &conv2d_2_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_2_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_2_layer, 14,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_2_chain,
  NULL, &activation_4_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_3_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_3_layer, 12,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_3_chain,
  NULL, &conv2d_2_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_1_weights, &depthwise_conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_1_layer, 11,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_1_chain,
  NULL, &activation_3_layer, AI_STATIC, 
  .groups = 16, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_2_layer, 9,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_2_chain,
  NULL, &depthwise_conv2d_1_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_1_weights, &conv2d_1_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_1_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_1_layer, 8,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_1_chain,
  NULL, &activation_2_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_1_layer, 6,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_1_chain,
  NULL, &conv2d_1_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  depthwise_conv2d_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &depthwise_conv2d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &depthwise_conv2d_weights, &depthwise_conv2d_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  depthwise_conv2d_layer, 5,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_dw_if32of32wf32,
  &depthwise_conv2d_chain,
  NULL, &activation_1_layer, AI_STATIC, 
  .groups = 8, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  activation_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &activation_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  activation_layer, 3,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &activation_chain,
  NULL, &depthwise_conv2d_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_weights, &conv2d_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &conv2d_scratch0, NULL)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_layer, 2,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv2d_chain,
  NULL, &activation_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_SAME, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 843400, 1, 1),
    843400, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 153696, 1, 1),
    153696, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_2_IN_NUM, &input_1_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_2_OUT_NUM, &dense_output),
  &conv2d_layer, 0xbe40d6c9, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 843400, 1, 1),
      843400, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 153696, 1, 1),
      153696, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_2_IN_NUM, &input_1_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_2_OUT_NUM, &dense_output),
  &conv2d_layer, 0xbe40d6c9, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_2_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_network_2_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    input_1_output_array.data = AI_PTR(g_network_2_activations_map[0] + 8160);
    input_1_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 8160);
    conv2d_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 118752);
    conv2d_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 118752);
    conv2d_output_array.data = AI_PTR(g_network_2_activations_map[0] + 6208);
    conv2d_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 6208);
    activation_output_array.data = AI_PTR(g_network_2_activations_map[0] + 79936);
    activation_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 79936);
    depthwise_conv2d_output_array.data = AI_PTR(g_network_2_activations_map[0] + 6208);
    depthwise_conv2d_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 6208);
    activation_1_output_array.data = AI_PTR(g_network_2_activations_map[0] + 79936);
    activation_1_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 79936);
    conv2d_1_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 153664);
    conv2d_1_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 153664);
    conv2d_1_output_array.data = AI_PTR(g_network_2_activations_map[0] + 1600);
    conv2d_1_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 1600);
    activation_2_output_array.data = AI_PTR(g_network_2_activations_map[0] + 1600);
    activation_2_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 1600);
    depthwise_conv2d_1_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_1_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_3_output_array.data = AI_PTR(g_network_2_activations_map[0] + 36864);
    activation_3_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 36864);
    conv2d_2_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_2_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_2_output_array.data = AI_PTR(g_network_2_activations_map[0] + 73728);
    conv2d_2_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 73728);
    activation_4_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_4_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_2_output_array.data = AI_PTR(g_network_2_activations_map[0] + 73728);
    depthwise_conv2d_2_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 73728);
    activation_5_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_5_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_3_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 73728);
    conv2d_3_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 73728);
    conv2d_3_output_array.data = AI_PTR(g_network_2_activations_map[0] + 73856);
    conv2d_3_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 73856);
    activation_6_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_6_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_3_output_array.data = AI_PTR(g_network_2_activations_map[0] + 73728);
    depthwise_conv2d_3_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 73728);
    activation_7_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_7_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_4_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_4_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_4_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18560);
    conv2d_4_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18560);
    activation_8_output_array.data = AI_PTR(g_network_2_activations_map[0] + 55424);
    activation_8_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 55424);
    depthwise_conv2d_4_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_4_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_9_output_array.data = AI_PTR(g_network_2_activations_map[0] + 36864);
    activation_9_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 36864);
    conv2d_5_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_5_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_5_output_array.data = AI_PTR(g_network_2_activations_map[0] + 73728);
    conv2d_5_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 73728);
    activation_10_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_10_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_5_output_array.data = AI_PTR(g_network_2_activations_map[0] + 36864);
    depthwise_conv2d_5_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 36864);
    activation_11_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_11_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_6_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 9216);
    conv2d_6_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 9216);
    conv2d_6_output_array.data = AI_PTR(g_network_2_activations_map[0] + 9472);
    conv2d_6_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 9472);
    activation_12_output_array.data = AI_PTR(g_network_2_activations_map[0] + 27904);
    activation_12_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 27904);
    depthwise_conv2d_6_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_6_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_13_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    activation_13_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_7_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_7_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_7_output_array.data = AI_PTR(g_network_2_activations_map[0] + 36864);
    conv2d_7_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 36864);
    activation_14_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_14_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_7_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    depthwise_conv2d_7_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    activation_15_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_15_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_8_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_8_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_8_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18944);
    conv2d_8_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18944);
    activation_16_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_16_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_8_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    depthwise_conv2d_8_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    activation_17_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_17_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_9_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_9_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_9_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18944);
    conv2d_9_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18944);
    activation_18_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_18_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_9_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    depthwise_conv2d_9_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    activation_19_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_19_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_10_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_10_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_10_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18944);
    conv2d_10_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18944);
    activation_20_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_20_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_10_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    depthwise_conv2d_10_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    activation_21_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_21_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_11_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_11_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_11_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18944);
    conv2d_11_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18944);
    activation_22_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_22_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_11_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    depthwise_conv2d_11_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    activation_23_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_23_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_12_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 4608);
    conv2d_12_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 4608);
    conv2d_12_output_array.data = AI_PTR(g_network_2_activations_map[0] + 5120);
    conv2d_12_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 5120);
    activation_24_output_array.data = AI_PTR(g_network_2_activations_map[0] + 14336);
    activation_24_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 14336);
    depthwise_conv2d_12_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    depthwise_conv2d_12_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_25_output_array.data = AI_PTR(g_network_2_activations_map[0] + 9216);
    activation_25_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 9216);
    conv2d_13_scratch0_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_13_scratch0_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    conv2d_13_output_array.data = AI_PTR(g_network_2_activations_map[0] + 18432);
    conv2d_13_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 18432);
    activation_26_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    activation_26_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    average_pooling2d_output_array.data = AI_PTR(g_network_2_activations_map[0] + 9216);
    average_pooling2d_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 9216);
    dense_dense_output_array.data = AI_PTR(g_network_2_activations_map[0] + 0);
    dense_dense_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 0);
    dense_output_array.data = AI_PTR(g_network_2_activations_map[0] + 8);
    dense_output_array.data_start = AI_PTR(g_network_2_activations_map[0] + 8);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}




/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_2_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_network_2_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    conv2d_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 0);
    conv2d_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 0);
    conv2d_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 864);
    conv2d_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 864);
    depthwise_conv2d_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 896);
    depthwise_conv2d_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 896);
    depthwise_conv2d_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 1184);
    depthwise_conv2d_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 1184);
    conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 1216);
    conv2d_1_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 1216);
    conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_1_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 1728);
    conv2d_1_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 1728);
    depthwise_conv2d_1_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_1_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 1792);
    depthwise_conv2d_1_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 1792);
    depthwise_conv2d_1_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_1_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 2368);
    depthwise_conv2d_1_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 2368);
    conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 2432);
    conv2d_2_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 2432);
    conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_2_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 4480);
    conv2d_2_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 4480);
    depthwise_conv2d_2_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_2_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 4608);
    depthwise_conv2d_2_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 4608);
    depthwise_conv2d_2_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_2_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 5760);
    depthwise_conv2d_2_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 5760);
    conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 5888);
    conv2d_3_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 5888);
    conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_3_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 9984);
    conv2d_3_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 9984);
    depthwise_conv2d_3_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_3_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 10112);
    depthwise_conv2d_3_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 10112);
    depthwise_conv2d_3_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_3_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 11264);
    depthwise_conv2d_3_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 11264);
    conv2d_4_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 11392);
    conv2d_4_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 11392);
    conv2d_4_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 19584);
    conv2d_4_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 19584);
    depthwise_conv2d_4_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_4_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 19840);
    depthwise_conv2d_4_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 19840);
    depthwise_conv2d_4_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_4_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 22144);
    depthwise_conv2d_4_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 22144);
    conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 22400);
    conv2d_5_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 22400);
    conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_5_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 38784);
    conv2d_5_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 38784);
    depthwise_conv2d_5_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_5_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 39040);
    depthwise_conv2d_5_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 39040);
    depthwise_conv2d_5_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_5_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 41344);
    depthwise_conv2d_5_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 41344);
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 41600);
    conv2d_6_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 41600);
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 74368);
    conv2d_6_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 74368);
    depthwise_conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_6_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 74880);
    depthwise_conv2d_6_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 74880);
    depthwise_conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_6_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 79488);
    depthwise_conv2d_6_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 79488);
    conv2d_7_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 80000);
    conv2d_7_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 80000);
    conv2d_7_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_7_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 145536);
    conv2d_7_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 145536);
    depthwise_conv2d_7_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_7_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 146048);
    depthwise_conv2d_7_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 146048);
    depthwise_conv2d_7_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_7_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 150656);
    depthwise_conv2d_7_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 150656);
    conv2d_8_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 151168);
    conv2d_8_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 151168);
    conv2d_8_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_8_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 216704);
    conv2d_8_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 216704);
    depthwise_conv2d_8_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_8_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 217216);
    depthwise_conv2d_8_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 217216);
    depthwise_conv2d_8_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_8_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 221824);
    depthwise_conv2d_8_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 221824);
    conv2d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 222336);
    conv2d_9_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 222336);
    conv2d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_9_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 287872);
    conv2d_9_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 287872);
    depthwise_conv2d_9_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_9_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 288384);
    depthwise_conv2d_9_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 288384);
    depthwise_conv2d_9_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_9_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 292992);
    depthwise_conv2d_9_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 292992);
    conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 293504);
    conv2d_10_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 293504);
    conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_10_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 359040);
    conv2d_10_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 359040);
    depthwise_conv2d_10_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_10_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 359552);
    depthwise_conv2d_10_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 359552);
    depthwise_conv2d_10_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_10_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 364160);
    depthwise_conv2d_10_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 364160);
    conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 364672);
    conv2d_11_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 364672);
    conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_11_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 430208);
    conv2d_11_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 430208);
    depthwise_conv2d_11_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_11_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 430720);
    depthwise_conv2d_11_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 430720);
    depthwise_conv2d_11_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_11_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 435328);
    depthwise_conv2d_11_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 435328);
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 435840);
    conv2d_12_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 435840);
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 566912);
    conv2d_12_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 566912);
    depthwise_conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_12_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 567936);
    depthwise_conv2d_12_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 567936);
    depthwise_conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    depthwise_conv2d_12_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 577152);
    depthwise_conv2d_12_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 577152);
    conv2d_13_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 578176);
    conv2d_13_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 578176);
    conv2d_13_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_13_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 840320);
    conv2d_13_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 840320);
    dense_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_dense_weights_array.data = AI_PTR(g_network_2_weights_map[0] + 841344);
    dense_dense_weights_array.data_start = AI_PTR(g_network_2_weights_map[0] + 841344);
    dense_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_dense_bias_array.data = AI_PTR(g_network_2_weights_map[0] + 843392);
    dense_dense_bias_array.data_start = AI_PTR(g_network_2_weights_map[0] + 843392);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/



AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_2_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_2_MODEL_NAME,
      .model_signature   = AI_NETWORK_2_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 7726288,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0xbe40d6c9,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}



AI_API_ENTRY
ai_bool ai_network_2_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_2_MODEL_NAME,
      .model_signature   = AI_NETWORK_2_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 7726288,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0xbe40d6c9,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_error ai_network_2_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}


AI_API_ENTRY
ai_error ai_network_2_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    AI_CONTEXT_OBJ(&AI_NET_OBJ_INSTANCE),
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}


AI_API_ENTRY
ai_error ai_network_2_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
  ai_error err;
  ai_network_params params;

  err = ai_network_2_create(network, AI_NETWORK_2_DATA_CONFIG);
  if (err.type != AI_ERROR_NONE) {
    return err;
  }
  
  if (ai_network_2_data_params_get(&params) != true) {
    err = ai_network_2_get_error(*network);
    return err;
  }
#if defined(AI_NETWORK_2_DATA_ACTIVATIONS_COUNT)
  /* set the addresses of the activations buffers */
  for (ai_u16 idx=0; activations && idx<params.map_activations.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
  }
#endif
#if defined(AI_NETWORK_2_DATA_WEIGHTS_COUNT)
  /* set the addresses of the weight buffers */
  for (ai_u16 idx=0; weights && idx<params.map_weights.size; idx++) {
    AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
  }
#endif
  if (ai_network_2_init(*network, &params) != true) {
    err = ai_network_2_get_error(*network);
  }
  return err;
}


AI_API_ENTRY
ai_buffer* ai_network_2_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_buffer* ai_network_2_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    AI_NETWORK_OBJ(network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}


AI_API_ENTRY
ai_handle ai_network_2_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}


AI_API_ENTRY
ai_bool ai_network_2_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = AI_NETWORK_OBJ(ai_platform_network_init(network, params));
  ai_bool ok = true;

  if (!net_ctx) return false;
  ok &= network_2_configure_weights(net_ctx, params);
  ok &= network_2_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_2_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}


AI_API_ENTRY
ai_i32 ai_network_2_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_2_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

