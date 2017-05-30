LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := getproperties
LOCAL_SOURCE_FILES := getproperties.c

include $(BUILD_SHARED_LIBRARY)