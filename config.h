#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

// Configure the global tapping term (default: 200ms)
#undef TAPPING_TERM
#define TAPPING_TERM 300

#define PERMISSIVE_HOLD
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 160 // key repetition in seconds
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
// #define HOLD_ON_OTHER_KEY_PRESS
