/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#undef DEBOUNCE
#define DEBOUNCE 20

#undef TAPPING_TERM
#define TAPPING_TERM 330

#define PERMISSIVE_HOLD

#undef IGNORE_MOD_TAP_INTERRUPT

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 60

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 750
