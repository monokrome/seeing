#ifndef SEEING_H
#define SEEING_H

#include <gdnative_api_struct.gen.h>

const godot_gdnative_core_api_struct *gdnative_api;
const godot_gdnative_ext_nativescript_api_struct *nativescript_api;


#define DEFINE_OBJECT(name, extends)                     \
    nativescript_api->godot_nativescript_register_class( \
	p_handle,                                        \
	"name", "extends",                               \
        create, destroy                                  \
    )


#define DEFINE_METHOD(owner, name, attributes)                               \
    godot_instance_method instance_## owner ##_## name = {NULL, NULL, NULL}; \
    ( instance_## owner ##_## name ).method = &( owner ##_## name );         \
    godot_method_attributes attributes_## owner ##_## name = { attributes }; \
    nativescript_api->godot_nativescript_register_method(                    \
	p_handle,                                                            \
	"owner",                                                             \
	"name",                                                              \
        attributes_## owner ##_## name ,                                     \
	instance_## owner ##_## name                                         \
    )

#endif
