#ifndef     __MOTORS_H
#define     __MOTORS_H

#include <math.h>

// define all of the motor pins below
#define LEFT_PWM_PIN    9
#define LEFT_IN1_PIN    4
#define LEFT_IN2_PIN    5
#define RIGHT_PWM_PIN   10
#define RIGHT_IN1_PIN   6
#define RIGHT_IN2_PIN   7

// define encoder pins for measure car's speed
#define LEFT_ENCODER_PIN    19
#define RIGHT_ENCODER_PIN   18
// define derection pins to measure car's direction
#define LEFT_DIRECTION_PIN  17
#define RIGHT_DIRECTION_PIN 16

// limit speed & intergral max value
#define SPEED_LIMIT_MIN     -60
#define SPEED_LIMIT_MAX      60

// PWM frequency selector
#define HZ_31250        1
#define HZ_3906         2
#define HZ_488          3
#define HZ_122          4
#define HZ_30           5

// control period
#define SPEED_CTRL_PERIOD        10// count the times of loop;the time of a loop is 10ms,but the time of samplespeed is 100ms
#define DIRECTION_CTRL_PERIOD    10
#define SAMPLE_SPEED_PERIOD      10

// args for speed sample
volatile float rpm_left = 0; // car's speed (rotations per minute)
volatile float rpm_right = 0;
volatile long count_left  = 0; // counter for left encoder
volatile long count_right = 0;

// args for speed and direction control output
volatile float speed_ctrl_total_output = 0;
volatile float direction_ctrl_total_output = 0;
volatile float speed_ctrl_output = 0;
volatile float direction_ctrl_output = 0;
extern volatile int set_car_speed;

#endif





