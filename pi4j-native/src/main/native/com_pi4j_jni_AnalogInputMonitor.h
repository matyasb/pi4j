/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_jni_AnalogInputMonitor.h
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
/* Header for class com_pi4j_jni_AnalogInputMonitor */

#ifndef _Included_com_pi4j_jni_AnalogInputMonitor
#define _Included_com_pi4j_jni_AnalogInputMonitor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_jni_AnalogInputMonitor
 * Method:    enablePinValueChangeCallback
 * Signature: (I)IID
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_AnalogInputMonitor_enablePinValueChangeCallback
  (JNIEnv *, jclass, jint, jint, jdouble);

/*
 * Class:     com_pi4j_jni_AnalogInputMonitor
 * Method:    disablePinValueChangeCallback
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_jni_AnalogInputMonitor_disablePinValueChangeCallback
  (JNIEnv *, jclass, jint);


/*
 * Class:     com_pi4j_jni_AnalogInputMonitor
 * Method:    AnalogInputMonitor_JNI_OnLoad
 */
jint AnalogInputMonitor_JNI_OnLoad(JavaVM *jvm);

/*
 * Class:     com_pi4j_jni_AnalogInputMonitor
 * Method:    AnalogInputMonitor_JNI_OnUnload
 */
void AnalogInputMonitor_JNI_OnUnload(JavaVM *jvm);

#ifdef __cplusplus
}
#endif
#endif
