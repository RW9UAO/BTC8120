
#include "btc8120.h"

void matrix_init_kb(void) {
    matrix_init_user();
    led_init_ports();
};


void led_init_ports(void) {
    setPinOutput(A9);
    setPinOutput(A10);
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(A10, ! led_state.num_lock);
        writePin(A9, ! led_state.caps_lock);
        //writePin(??, led_state.scroll_lock);
    }
    return res;
}


