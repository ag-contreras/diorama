#include "Arduino.h"

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#include <SPI.h>
#include <FreeStack.h>

// Add the SdFat Libraries
#include <SdFat.h>

// and the MP3 Shield Library
#include <vs1053_SdFat.h>

SdFat sd;
vs1053 MP3player;
// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver PCA1 = Adafruit_PWMServoDriver();

// Pins
const int buttonPin = 5; // the number of the pushbutton pin

#define PCA_PIN_LEDS_E1 8
#define PCA_PIN_LEDS_M1 9

#define PCA_PIN_LEDS_E2 10
#define PCA_PIN_LEDS_M2 11

#define PCA_PIN_SERVO_1 12
#define PCA_PIN_SERVO_2 13

#define NUMBER_OF_STEPS_PER_REV 512


// Button debounce
// constants won't change. They're used here to set pin numbers:

// Variables will change:
int run_state = false; // the current state of the output

int prev_play_state = false;
long start_play_time = 0;

int buttonState;           // the current reading from the input pin
int lastButtonState = LOW; // the previous reading from the input pin

int servo_current_position = 0;
int servo_current_position_2 = 0;

// the following variables are unsigned longs because the time, measured in
// milliseconds, will quickly become a bigger number than can be stored in an int.
unsigned long lastDebounceTime = 0; // the last time the output pin was toggled
unsigned long debounceDelay = 50;   // the debounce time; increase if the output flickers

/* State machine */


boolean light1_state;
boolean light2_state;

boolean focus1_state;
boolean focus2_state;
boolean focus3_state;
boolean focus4_state;

boolean manual_led_state;
boolean manual_led_state_2;

boolean stepper_state;
boolean stepper_running;
boolean stepper_direction;
boolean stepper_stop_flag ; 

boolean servo_state;
boolean servo_state_2;

boolean servo_angle_active;
boolean servo_angle_active_2;

int stepper_time_index;
int light1_time_index;
int light2_time_index;

int servo_move_index;
int servo_move_index_2;

int ramp_time_counter;
int ramp_time_counter_2;


int seconds_display ;  // millis to sec
int last_timer_print ; 