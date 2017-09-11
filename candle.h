//** adapted from https://learn.adafruit.com/led-candles-simple-easy-cheap/overview

// The onboard red LED's pin
#define REDLED_PIN              1
// The data-in pin of the NeoPixel
#define WICK_PIN                17
// Any unconnected pin, to try to generate a random seed
#define UNCONNECTED_PIN         2

// The LED can be in only one of these states at any given time
#define BRIGHT                  0
#define UP                      1
#define DOWN                    2
#define DIM                     3
#define BRIGHT_HOLD             4
#define DIM_HOLD                5

// Percent chance the LED will suddenly fall to minimum brightness
#define INDEX_BOTTOM_PERCENT    10
// Absolute minimum red value (green value is a function of red's value)
#define INDEX_BOTTOM            64
// Minimum red value during "normal" flickering (not a dramatic change)
#define INDEX_MIN               100
// Maximum red value
#define INDEX_MAX               255

// Decreasing brightness will take place over a number of milliseconds in this range
#define DOWN_MIN_MSECS          20
#define DOWN_MAX_MSECS          250
// Increasing brightness will take place over a number of milliseconds in this range
#define UP_MIN_MSECS            20
#define UP_MAX_MSECS            250
// Percent chance the color will hold unchanged after brightening
#define BRIGHT_HOLD_PERCENT     20
// When holding after brightening, hold for a number of milliseconds in this range
#define BRIGHT_HOLD_MIN_MSECS   0
#define BRIGHT_HOLD_MAX_MSECS   100
// Percent chance the color will hold unchanged after dimming
#define DIM_HOLD_PERCENT        5
// When holding after dimming, hold for a number of milliseconds in this range
#define DIM_HOLD_MIN_MSECS      0
#define DIM_HOLD_MAX_MSECS      50

#define MINVAL(A,B)             (((A) < (B)) ? (A) : (B))
#define MAXVAL(A,B)             (((A) > (B)) ? (A) : (B))

//Adafruit_NeoPixel *wick;
byte state;
unsigned long flicker_msecs;
unsigned long flicker_start;
byte index_start;
byte index_end;



/*void setup()
  {
  // There is no good source of entropy to seed the random number generator,
  // so we'll just read the analog value of an unconnected pin.  This won't be
  // very random either, but there's really nothing else we can do.
  //
  // True randomness isn't strictly necessary, we just don't want a whole
  // string of these things to do exactly the same thing at the same time if
  // they're all powered on simultaneously.
  randomSeed(analogRead(UNCONNECTED_PIN));

  // Turn off the onboard red LED
  pinMode(REDLED_PIN, OUTPUT);
  digitalWrite(REDLED_PIN, LOW);

  wick = new Adafruit_NeoPixel(1, WICK_PIN, NEO_RGB + NEO_KHZ800);
  wick->begin();
  wick->show();

  set_color(255);
  index_start = 255;
  index_end = 255;
  state = BRIGHT;

  return;
  }*/

