INTROSPECTION_KEYMAP_C = momohata.c
# INTROSPECTION_KEYMAP_C = momohata_combos.c
# SRC += momohata.c
SRC += features/layer_lock.c

CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
LTO_ENABLE = no
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
# RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.
AUDIO_ENABLE = no           # Audio output

KEY_OVERRIDE_ENABLE = yes
COMBO_ENABLE = yes

# VIA_ENABLE = no
# VIAL_ENABLE = no
# SPLIT_KEYBOARD = yes
TAP_DANCE_ENABLE = yes

