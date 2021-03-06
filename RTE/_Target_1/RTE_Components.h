
/*
 * Auto generated Run-Time-Environment Configuration File
 *      *** Do not modify ! ***
 *
 * Project: 'Hello' 
 * Target:  'Target 1' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "SSE300MPS3.h"

/* ARM::CMSIS Driver:USART:1.0.0 */
#define RTE_Drivers_USART
/* Keil.ARM Compiler::Compiler:I/O:STDOUT:User:1.2.0 */
#define RTE_Compiler_IO_STDOUT          /* Compiler I/O: STDOUT */
          #define RTE_Compiler_IO_STDOUT_User     /* Compiler I/O: STDOUT User */
/* tensorflow::Data Exchange:Serialization:flatbuffers:tensorflow:1.12.0 */
#define RTE_DataExchange_Serialization_flatbuffers     /* flatbuffers */
/* tensorflow::Data Processing:Math:gemmlowp fixed-point:tensorflow:1.0.0 */
#define RTE_DataExchange_Math_gemmlowp     /* gemmlowp */
/* tensorflow::Data Processing:Math:kissfft:tensorflow:1.4.5 */
#define RTE_DataExchange_Math_kissfft     /* kissfft */
/* tensorflow::Data Processing:Math:ruy:tensorflow:1.12.0 */
#define RTE_DataProcessing_Math_ruy     /* ruy */
/* tensorflow::Machine Learning:TensorFlow:Kernel:CMSIS-NN:0.5.0 */
#define RTE_ML_TF_LITE     /* TF */


#endif /* RTE_COMPONENTS_H */
