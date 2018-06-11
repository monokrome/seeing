#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "universe.h"

typedef struct state {
    char content[256];
} state;

void *universe_constructor(godot_object *p_instance, void *p_method_data) {
    state *data = gdnative_api->godot_alloc(sizeof(state));
    strcpy(data->content, "Welcome to GoDot. Finally.");
    return data;
}

void universe_destructor(godot_object *p_instance, void *p_method_data, void *p_user_data) {
    gdnative_api->godot_free(p_user_data);
}
