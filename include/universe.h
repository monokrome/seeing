#ifndef UNIVERSE_H
#define UNIVERSE_H

#include "seeing.h"

void *universe_constructor(godot_object *p_instance, void *p_method_data);
void universe_destructor(godot_object *p_instance, void *p_method_data, void *p_user_data);

#endif
