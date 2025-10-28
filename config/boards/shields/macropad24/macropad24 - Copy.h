#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>

/ {
    keymap {
        compatible = "zmk,keymap";

        default_layer {
            label = "Default";
            sensor-bindings = <&inc_dec_kp K_VOL_UP K_VOL_DN>;
            bindings = <
                &kp A    &kp G         &kp K_MUTE
                &kp B    &kp KP_NLCK   &kp SLASH    &kp ASTRK   &kp MINUS
                &kp C    &kp N7        &kp N8       &kp N9
                &kp D    &kp N4        &kp N5       &kp N6      &kp PLUS
                &kp E    &kp N1        &kp N2       &kp N3
                &kp F    &kp LBKT      &kp RBKT     &kp DOT     &mo RET
            >;
        };

        function_layer {
            label = "Function";8
            sensor-bindings = <&inc_dec_kp C_BRI_UP C_BRI_DN>;
            bindings = <
                &bt BT_SEL 0    &bt BT_SEL 1    &bt BT_CLR
                &kp F1          &kp F2          &kp F3          &kp F4          &kp F5
                &kp F6          &kp F7          &kp F8          &kp F9
                &kp F10         &kp F11         &kp F12         &trans          &trans
                &trans          &trans          &trans          &trans
                &trans          &trans          &trans          &trans          &trans
            >;
        };
    };
};