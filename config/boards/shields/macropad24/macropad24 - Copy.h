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
                         &kp A         &kp G                             &kp K_MUTE
                &kp B    &kp KP_NLCK   &kp KP_DIVIDE   &kp KP_ASTERISK   &kp KP_MINUS
                &kp C    &kp KP_N7     &kp KP_N8       &kp KP_N9
                &kp D    &kp KP_N4     &kp KP_N5       &kp KP_N6         &kp KP_PLUS
                &kp E    &kp KP_N1     &kp KP_N2       &kp KP_N3
                &kp F                  &kp KP_N0       &kp KP_DOT        &mo KP_ENTER
            >;
        };

        function_layer {
            label = "Function";8
            sensor-bindings = <&inc_dec_kp C_BRI_UP C_BRI_DN>;
            bindings = <
				              &trans     &trans                &trans
                &bt BT_SEL 0  &trans     &trans       &trans   &trans
                &bt BT_SEL 1  &trans     &trans       &trans
                &bt BT_CLR    &trans     &trans       &trans   &trans
                &trans        &trans     &trans       &trans
                &bootloader              &trans       &trans   &trans
            >;
        };
    };
};