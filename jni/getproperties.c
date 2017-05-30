#include <jni.h>
#include <string.h>

jstring Java_com_development_doron_androidproperties_PropertiesDisplayPage_getProperties(JNIEnv* env, jobject obj){
    return (*env)->NewStringUTF(env, "Hello World");
}