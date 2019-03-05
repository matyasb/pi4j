/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_Shift.h
 * 
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  https://pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2019 Pi4J
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_wiringpi_Shift */

#ifndef _Included_com_pi4j_wiringpi_Shift
#define _Included_com_pi4j_wiringpi_Shift
#ifdef __cplusplus
extern "C" {
#endif
#undef com_pi4j_wiringpi_Shift_LSBFIRST
#define com_pi4j_wiringpi_Shift_LSBFIRST 0L
#undef com_pi4j_wiringpi_Shift_MSBFIRST
#define com_pi4j_wiringpi_Shift_MSBFIRST 1L
/*
 * Class:     com_pi4j_wiringpi_Shift
 * Method:    shiftIn
 * Signature: (BBB)B
 */
JNIEXPORT jbyte JNICALL Java_com_pi4j_wiringpi_Shift_shiftIn
  (JNIEnv *, jclass, jbyte, jbyte, jbyte);

/*
 * Class:     com_pi4j_wiringpi_Shift
 * Method:    shiftOut
 * Signature: (BBBB)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Shift_shiftOut
  (JNIEnv *, jclass, jbyte, jbyte, jbyte, jbyte);

#ifdef __cplusplus
}
#endif
#endif
