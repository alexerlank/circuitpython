//This file contains the methods of MyClass.

#include "py/runtime.h"
#include "common-hal/mymodule/MyClass.h"
#include "shared-bindings/mymodule/MyClass.h"

void shared_module_mymodule_myclass_construct(mymodule_myclass_obj_t* self) {
self->deinited = 0;
}

//The deinit related methods handle disposal of instances 

bool shared_module_mymodule_myclass_deinited(mymodule_myclass_obj_t* self) {
return self->deinited;
}

void shared_module_mymodule_myclass_deinit(mymodule_myclass_obj_t* self) {
self->deinited = 1;
}

//The remaining functions implement the class methods and properties.
//Note that these function return native C types. 

const char * shared_module_mymodule_myclass_get_question(mymodule_myclass_obj_t* self) {
return "Tricky...";
}

mp_int_t shared_module_mymodule_myclass_get_answer(mymodule_myclass_obj_t* self) {
return 42;
}
