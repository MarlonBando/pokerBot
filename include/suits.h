#if defined(_WIN32) || defined(__MSDOS__)
   #define SPADE   "\u2660"
   #define CLUB    "\u2663"
   #define HEART   "\u2665"
   #define DIAMOND "\u2666"
#else
   #define SPADE   "\xE2\x99\xA0"
   #define CLUB    "\xE2\x99\xA3"
   #define HEART   "\xE2\x99\xA5"
   #define DIAMOND "\xE2\x99\xA6"
#endif