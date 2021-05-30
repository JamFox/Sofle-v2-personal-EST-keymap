//Setting up what encoder rotation does. If your encoder can be pressed as a button, that function can be set in Via.

#ifdef ENCODER_ENABLE

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            if(shift_held) {
                tap_code(KC_MNXT);
            } else {
                tap_code(KC_RIGHT);
            }
        } else {
            if(shift_held) {
                tap_code(KC_MPRV);
            } else {
                tap_code(KC_LEFT);
            }
        }
    } else if (index == 1) {
        if (clockwise) {
            if(shift_held) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_DOWN);
            }
        } else {
            if(shift_held) {
                tap_code(KC_VOLD);
            } else {
                tap_code(KC_UP);
            }
        }
    }
}

#endif