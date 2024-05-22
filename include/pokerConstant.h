#if defined(_WIN32) || defined(__MSDOS__)
   #define SPADES   "\u2660"
   #define CLUBS    "\u2663"
   #define HEARTS   "\u2665"
   #define DIAMONDS "\u2666"
#else
   #define SPADES   "\xE2\x99\xA0"
   #define CLUBS    "\xE2\x99\xA3"
   #define HEARTS   "\xE2\x99\xA5"
   #define DIAMONDS "\xE2\x99\xA6"
#endif

#define DECK_SIZE 52