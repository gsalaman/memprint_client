#include "SoftwareSerial.h"
#include "memprint.h"
#include "FastLED.h"

CRGB leds[16];

void test_ints( void )
{
  int arr[]={5, 10, 15, 20, 0, -1, -5};

  memprint_ints(arr, 7);
  memprint_bytes(arr, 14);
  memprint_chars(arr, 14);

}

void test_string( void )
{
  char str2[]="Hello World";

  memprint_chars(str2);
  
}

void test_CRGB( void )
{
  fill_gradient_RGB(leds, 16, CRGB::Red, CRGB::Blue);
  memprint_CRGB(leds, 16);
}

void setup() 
{
  Serial.begin(9600);
  Serial.println("Start!");

  //test_ints();
  //test_string();
  test_CRGB();
  
}

void loop() {
  // put your main code here, to run repeatedly:
}
