#ifndef AVAILABILITY2_H
#define AVAILABILITY2_H
#include <Availability.h>

#ifndef __IPHONE_2_1
 #define __IPHONE_2_1 20100
 #define __AVAILABILITY_INTERNAL__IPHONE_2_1 __AVAILABILITY_INTERNAL_UNAVAILABLE
 #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_NA __AVAILABILITY_INTERNAL__IPHONE_2_1
 #if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #else
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_2_1 __AVAILABILITY_INTERNAL_DEPRECATED
 #endif
#endif
#ifndef __IPHONE_2_2
 #define __IPHONE_2_2 20200
 #define __AVAILABILITY_INTERNAL__IPHONE_2_2 __AVAILABILITY_INTERNAL_UNAVAILABLE
 #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_NA __AVAILABILITY_INTERNAL__IPHONE_2_2
 #if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_2
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_2
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_2
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_2
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #else
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_2_2 __AVAILABILITY_INTERNAL_DEPRECATED
 #endif
#endif
#ifndef __IPHONE_3_0
 #define __IPHONE_3_0 30000
 #define __AVAILABILITY_INTERNAL__IPHONE_3_0 __AVAILABILITY_INTERNAL_UNAVAILABLE
 #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_NA __AVAILABILITY_INTERNAL__IPHONE_3_0
 #if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_2
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #else
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_0 __AVAILABILITY_INTERNAL_DEPRECATED
 #endif
#endif
#ifndef __IPHONE_3_1
 #define __IPHONE_3_1 30100
 #define __AVAILABILITY_INTERNAL__IPHONE_3_1 __AVAILABILITY_INTERNAL_UNAVAILABLE
 #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_NA __AVAILABILITY_INTERNAL__IPHONE_3_1
 #if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_2
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #else
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_3_1 __AVAILABILITY_INTERNAL_DEPRECATED
 #endif
#endif
#ifndef __IPHONE_4_0
 #define __IPHONE_4_0 40000
 #define __AVAILABILITY_INTERNAL__IPHONE_4_0 __AVAILABILITY_INTERNAL_UNAVAILABLE
 #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_NA __AVAILABILITY_INTERNAL__IPHONE_4_0
 #if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_2_2
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_3_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_3_1
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #elif __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_WEAK_IMPORT
 #else
  #define __AVAILABILITY_INTERNAL__IPHONE_2_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_1_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_2_2_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_3_1_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_DEPRECATED
  #define __AVAILABILITY_INTERNAL__IPHONE_4_0_DEP__IPHONE_4_0 __AVAILABILITY_INTERNAL_DEPRECATED
 #endif
#endif

#endif
