#include "seeing.h"

void *universe_constructor(godot_object *p_instance, void *p_method_data);
void universe_destructor(godot_object *p_instance, void *p_method_data, void *p_user_data);

godot_variant universe_get_data(
	godot_object *p_instance, void *p_method_data, void *p_user_data,
	int p_num_args, godot_variant **p_args
);

