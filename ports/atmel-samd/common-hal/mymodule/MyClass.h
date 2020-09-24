//In this file we define the structure that holds the instance variables of our class.

#ifndef MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_MYMODULE_MYCLASS_H
#define MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_MYMODULE_MYCLASS_H

#include "py/obj.h"

typedef struct {
mp_obj_base_t base;
bool deinited;
} mymodule_myclass_obj_t;


#endif // MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_MYMODULE_MYCLASS_H
