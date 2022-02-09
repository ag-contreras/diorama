// #ifndef ARDUINO_H
// #define ARDUINO_H
// #endif
// #ifndef GLOBALS_H
// #define GLOBALS_H
// #endif

// #ifndef SERVO_CONTROL_H
// #define SERVO_CONTROL_H
// #endif

#ifndef CONFIG_H
#define CONFIG_H

#define DIORAMA_NUMBER 6

// Individual Settings for each Diorama
#if   DIORAMA_NUMBER == 1 // El establo

int max_playtime = 125; // 1:35 (60+35)

// steppers
int stepper_cycle_count = 1;
int stepper_start_array[] = {61};
int stepper_stop_array[] = {94};

int steps_cw;
int steps_ccw;

// LED lights
int ramp_time_divisor = 5; 
int ramp_pwm_step = 10;  

//  Mamá
int light1_cycle_lenght = 1;
long light1_start_array[] = {5};
long light1_stop_array[] = {118};

// Buey
int light2_cycle_lenght = 1;
long light2_start_array[] = {32};
long light2_stop_array[] = {115};

// Ovejaperro
int light3_cycle_lenght = 1;
int light3_start_array[] = {18};
int light3_stop_array[] = {110};

// Ocas
int light4_cycle_lenght = 1;
int light4_start_array[] = {60};
int light4_stop_array[] = {115};

// Light 5 is backlight
int light5_cycle_lenght = 1;
int light5_start_array[] = {0};
int light5_stop_array[] = {120};


// Servos
// Perroveja
int servo_move_count_1 = 1;
int servo_start_array_1[] = {19};
int servo_stop_array_1[] = {39};

// Buey
int servo_move_count_2 = 1;
int servo_start_array_2[] = {33};
int servo_stop_array_2[] = {45};

//  
int servo_move_count_3 = 0;
int servo_start_array_3[] = {0};
int servo_stop_array_3[] = {0};

// 
int servo_move_count_4 = 0;
int servo_start_array_4[] = {0};
int servo_stop_array_4[] = {0};

/* Servo Control */
int servo_move_type_1 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_2 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_3 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_4 = 1; // 0 : initial, final; 1: move continuous.

int servo_angles[] = {0};

int servo_default_angle_1 = 1500;
int servo_default_angle_2 = 1300;
int servo_default_angle_3 = 1300;
int servo_default_angle_4 = 1300;

int min_servo_position_1 = 1300;
int max_servo_position_1 = 1500;

int min_servo_position_2 = 1300;
int max_servo_position_2 = 1500;

int min_servo_position_3 = 1300;
int max_servo_position_3 = 1500;

int min_servo_position_4 = 1300;
int max_servo_position_4 = 1500;

unsigned int pos0_pwm = 100;   // pwm at 0°
unsigned int pos180_pwm = 450; // pwm 180°

unsigned long last_servo_update_1;
unsigned long last_servo_update_2;
unsigned long last_servo_update_3;
unsigned long last_servo_update_4;

unsigned long servo_update_period_1 = 5;
unsigned long servo_update_period_2 = 5;
unsigned long servo_update_period_3 = 5;
unsigned long servo_update_period_4 = 5;

int servo_step = 1;
int servo_step_2 = 1;
int servo_step_3 = 1;
int servo_step_4 = 1;

#elif DIORAMA_NUMBER == 2 // Se va la lancha


long max_playtime = 120; // 1:50 = 60+50

// steppers
int stepper_cycle_count = 0;
long stepper_start_array[] = {0};
long stepper_stop_array[] = {0};

int steps_cw;
int steps_ccw;

// LED lights

int ramp_time_divisor = 5; 
int ramp_pwm_step = 10;  

//  Pescador
int light1_cycle_lenght = 1;
long light1_start_array[] = {5};
long light1_stop_array[] = {114};

// Barco
int light2_cycle_lenght = 1;
long light2_start_array[] = {29};
long light2_stop_array[] = {103};

// Peces
int light3_cycle_lenght = 1;
int light3_start_array[] = {49};
int light3_stop_array[] = {100};

// Faro
int light4_cycle_lenght = 1;
int light4_start_array[] = {3};
int light4_stop_array[] = {106};

// Light 5 is backlight
int light5_cycle_lenght = 1;
int light5_start_array[] = {0};
int light5_stop_array[] = {118};

// Servos
// Peces
int servo_move_count_1 = 1;
int servo_start_array_1[] = {49};
int servo_stop_array_1[] = {75};

// Remos pescador
int servo_move_count_2 = 1;
int servo_start_array_2[] = {10};
int servo_stop_array_2[] = {114};

// 
int servo_move_count_3 = 0;
int servo_start_array_3[] = {0};
int servo_stop_array_3[] = {0};

// 
int servo_move_count_4 = 0;
int servo_start_array_4[] = {0};
int servo_stop_array_4[] = {0};

/* Servo Control */
int servo_move_type_1 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_2 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_3 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_4 = 1; // 0 : initial, final; 1: move continuous.

int servo_angles[] = {0};

int servo_default_angle_1 = 1500;
int servo_default_angle_2 = 1300;
int servo_default_angle_3 = 1300;
int servo_default_angle_4 = 1300;

int min_servo_position_1 = 1300;
int max_servo_position_1 = 1500;

int min_servo_position_2 = 1300;
int max_servo_position_2 = 1500;

int min_servo_position_3 = 1300;
int max_servo_position_3 = 1500;

int min_servo_position_4 = 1300;
int max_servo_position_4 = 1500;

unsigned int pos0_pwm = 100;   // pwm at 0°
unsigned int pos180_pwm = 450; // pwm 180°

unsigned long last_servo_update_1;
unsigned long last_servo_update_2;
unsigned long last_servo_update_3;
unsigned long last_servo_update_4;

unsigned long servo_update_period_1 = 5;
unsigned long servo_update_period_2 = 5;
unsigned long servo_update_period_3 = 5;
unsigned long servo_update_period_4 = 5;

int servo_step = 1;
int servo_step_2 = 1;
int servo_step_3 = 1;
int servo_step_4 = 1;

#elif DIORAMA_NUMBER == 3 // Arrurru 

long max_playtime = 100; // 

// steppers
int stepper_cycle_count = 0;
long stepper_start_array[] = {0};
long stepper_stop_array[] = {0};

int steps_cw;
int steps_ccw;

// LED lights

// LED lights

int ramp_time_divisor = 5; 
int ramp_pwm_step = 10;  

// Caballitos y Luna 
int light1_cycle_lenght = 1;
long light1_start_array[] = {8};
long light1_stop_array[] = {90};

// Pez caracol
int light2_cycle_lenght = 1;
long light2_start_array[] = {29};
long light2_stop_array[] = {78};

// Arbol
int light3_cycle_lenght = 1;
int light3_start_array[] = {12};
int light3_stop_array[] = {84};

// Mamá
int light4_cycle_lenght = 1;
int light4_start_array[] = {3};
int light4_stop_array[] = {95};

// Light 5 is backlight
int light5_cycle_lenght = 1;
int light5_start_array[] = {0};
int light5_stop_array[] = {98};

/* Servo Control */
// Mamá
int servo_move_count_1 = 1;
long servo_start_array_1[] = {5};
long servo_stop_array_1[] = {95};

int servo_move_count_2 = 0;
long servo_start_array_2[] = {0};
long servo_stop_array_2[] = {0};

// 
int servo_move_count_3 = 0;
int servo_start_array_3[] = {0};
int servo_stop_array_3[] = {0};

// 
int servo_move_count_4 = 0;
int servo_start_array_4[] = {0};
int servo_stop_array_4[] = {0};

/* Servo Control */
int servo_move_type_1 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_2 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_3 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_4 = 1; // 0 : initial, final; 1: move continuous.

int servo_angles[] = {0};

int servo_default_angle_1 = 1500;
int servo_default_angle_2 = 1300;
int servo_default_angle_3 = 1300;
int servo_default_angle_4 = 1300;

int min_servo_position_1 = 1300;
int max_servo_position_1 = 1500;

int min_servo_position_2 = 1300;
int max_servo_position_2 = 1500;

int min_servo_position_3 = 1300;
int max_servo_position_3 = 1500;

int min_servo_position_4 = 1300;
int max_servo_position_4 = 1500;

unsigned int pos0_pwm = 100;   // pwm at 0°
unsigned int pos180_pwm = 480; // pwm 180°

unsigned long last_servo_update_1;
unsigned long last_servo_update_2;
unsigned long last_servo_update_3;
unsigned long last_servo_update_4;

unsigned long servo_update_period_1 = 5;
unsigned long servo_update_period_2 = 5;
unsigned long servo_update_period_3 = 5;
unsigned long servo_update_period_4 = 5;

int servo_step = 1;
int servo_step_2 = 1;
int servo_step_3 = 1;
int servo_step_4 = 1;

#elif DIORAMA_NUMBER == 4 // Cucu


long max_playtime = 90; // 

// steppers
int stepper_cycle_count = 1;
long stepper_start_array[] = {20};
long stepper_stop_array[] =  {40};

int steps_cw;
int steps_ccw;

// LED lights
int ramp_time_divisor = 5; 
int ramp_pwm_step = 10;  

//  
int light1_cycle_lenght = 1;
long light1_start_array[] = {5};
long light1_stop_array[] = {118};

// 
int light2_cycle_lenght = 1;
long light2_start_array[] = {32};
long light2_stop_array[] = {115};

// 
int light3_cycle_lenght = 1;
int light3_start_array[] = {18};
int light3_stop_array[] = {110};

// 
int light4_cycle_lenght = 1;
int light4_start_array[] = {60};
int light4_stop_array[] = {115};

// Light 5 is backlight
int light5_cycle_lenght = 1;
int light5_start_array[] = {0};
int light5_stop_array[] = {120};


// Servos
// 
int servo_move_count_1 = 1;
int servo_start_array_1[] = {19};
int servo_stop_array_1[] = {39};

// 
int servo_move_count_2 = 1;
int servo_start_array_2[] = {33};
int servo_stop_array_2[] = {45};

//  
int servo_move_count_3 = 0;
int servo_start_array_3[] = {0};
int servo_stop_array_3[] = {0};

// 
int servo_move_count_4 = 0;
int servo_start_array_4[] = {0};
int servo_stop_array_4[] = {0};

/* Servo Control */
int servo_move_type_1 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_2 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_3 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_4 = 1; // 0 : initial, final; 1: move continuous.

int servo_angles[] = {0};

int servo_default_angle_1 = 1500;
int servo_default_angle_2 = 1300;
int servo_default_angle_3 = 1300;
int servo_default_angle_4 = 1300;

int min_servo_position_1 = 1300;
int max_servo_position_1 = 1500;

int min_servo_position_2 = 1300;
int max_servo_position_2 = 1500;

int min_servo_position_3 = 1300;
int max_servo_position_3 = 1500;

int min_servo_position_4 = 1300;
int max_servo_position_4 = 1500;

unsigned int pos0_pwm = 100;   // pwm at 0°
unsigned int pos180_pwm = 450; // pwm 180°

unsigned long last_servo_update_1;
unsigned long last_servo_update_2;
unsigned long last_servo_update_3;
unsigned long last_servo_update_4;

unsigned long servo_update_period_1 = 5;
unsigned long servo_update_period_2 = 5;
unsigned long servo_update_period_3 = 5;
unsigned long servo_update_period_4 = 5;

int servo_step = 1;
int servo_step_2 = 1;
int servo_step_3 = 1;
int servo_step_4 = 1;

#elif DIORAMA_NUMBER == 5 // Pajarito 

// in seconds
int max_playtime = 100; 

// steppers
// Peces
int stepper_cycle_count = 1;
int stepper_start_array[] = {20};
int stepper_stop_array[] =  {40};

int steps_cw;
int steps_ccw;

// LED lights

int ramp_time_divisor = 5; 
int ramp_pwm_step = 10; 

// Peces 
int light1_cycle_lenght = 2;
int light1_start_array[] = {17, 45};
int light1_stop_array[] = {30, 59};

// Llamas
int light2_cycle_lenght = 2;
int light2_start_array[] = {5, 33};
int light2_stop_array[] = {15, 44};

// Madre
int light3_cycle_lenght = 1;
int light3_start_array[] = {16};
int light3_stop_array[] = {99};

// Pajarito
int light4_cycle_lenght = 1;
int light4_start_array[] = {4};
int light4_stop_array[] = {15};

// Light 5 is backlight
int light5_cycle_lenght = 1;
int light5_start_array[] = {0};
int light5_stop_array[] = {99};


// Servos
// Mama
int servo_move_count_1 = 3;
int servo_start_array_1[] = {17, 45, 75};
int servo_stop_array_1[] = {30, 59, 95};

// Pajarito
int servo_move_count_2 = 3;
int servo_start_array_2[] = {5,33 , 62};
int servo_stop_array_2[] = {15,44 , 73 };

// Llamas Izq
int servo_move_count_3 = 2;
int servo_start_array_3[] = {5, 33};
int servo_stop_array_3[] = {15, 44};

// Llamas Der
int servo_move_count_4 = 2;
int servo_start_array_4[] = {5 , 33};
int servo_stop_array_4[] = {15, 44};

/* Servo Control */
int servo_move_type_1 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_2 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_3 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_4 = 1; // 0 : initial, final; 1: move continuous.



int servo_angles[] = {0};

int servo_default_angle_1 = 1300;
int servo_default_angle_2 = 1300;
int servo_default_angle_3 = 1300;
int servo_default_angle_4 = 1300;


int min_servo_position_1 = 1300;
int max_servo_position_1 = 1500;

int min_servo_position_2 = 1300;
int max_servo_position_2 = 1500;

int min_servo_position_3 = 1300;
int max_servo_position_3 = 1500;

int min_servo_position_4 = 1300;
int max_servo_position_4 = 1500;

unsigned int pos0_pwm = 100;   // pwm at 0°
unsigned int pos180_pwm = 450; // pwm 180°

unsigned long last_servo_update_1;
unsigned long last_servo_update_2;
unsigned long last_servo_update_3;
unsigned long last_servo_update_4;

unsigned long servo_update_period_1 = 5;
unsigned long servo_update_period_2 = 5;
unsigned long servo_update_period_3 = 5;
unsigned long servo_update_period_4 = 5;

int servo_step = 1;
int servo_step_2 = 1;
int servo_step_3 = 1;
int servo_step_4 = 1;

#elif DIORAMA_NUMBER == 6 // Mira niñita 

long max_playtime = 150; // 120+30

// steppers
int stepper_cycle_count = 0;
long stepper_start_array[] = {};
long stepper_stop_array[] = {};

int steps_cw;
int steps_ccw;

// LED lights
int ramp_time_divisor = 5; 
int ramp_pwm_step = 10;  

//  perro
int light1_cycle_lenght = 1;
long light1_start_array[] = {65};
long light1_stop_array[] = {118};

// papa y niña
int light2_cycle_lenght = 1;
long light2_start_array[] = {11};
long light2_stop_array[] = {145};

// Peces voladores
int light3_cycle_lenght = 1;
int light3_start_array[] = {44};
int light3_stop_array[] = {135};

// Luna
int light4_cycle_lenght = 1;
int light4_start_array[] = {25};
int light4_stop_array[] = {130};

// Light 5 is backlight
int light5_cycle_lenght = 1;
int light5_start_array[] = {0};
int light5_stop_array[] = {145};


// Servos
// Perro
int servo_move_count_1 = 1;
int servo_start_array_1[] = {65};
int servo_stop_array_1[] = {77};

// 
int servo_move_count_2 = 0;
int servo_start_array_2[] = {0};
int servo_stop_array_2[] = {0};

//  
int servo_move_count_3 = 0;
int servo_start_array_3[] = {0};
int servo_stop_array_3[] = {0};

// 
int servo_move_count_4 = 0;
int servo_start_array_4[] = {0};
int servo_stop_array_4[] = {0};

/* Servo Control */
int servo_move_type_1 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_2 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_3 = 1; // 0 : initial, final; 1: move continuous.
int servo_move_type_4 = 1; // 0 : initial, final; 1: move continuous.

int servo_angles[] = {0};

int servo_default_angle_1 = 1500;
int servo_default_angle_2 = 1300;
int servo_default_angle_3 = 1300;
int servo_default_angle_4 = 1300;

int min_servo_position_1 = 1000;
int max_servo_position_1 = 1800;

int min_servo_position_2 = 1300;
int max_servo_position_2 = 1500;

int min_servo_position_3 = 1300;
int max_servo_position_3 = 1500;

int min_servo_position_4 = 1000;
int max_servo_position_4 = 1800;

unsigned int pos0_pwm = 100;   // pwm at 0°
unsigned int pos180_pwm = 450; // pwm 180°

unsigned long last_servo_update_1;
unsigned long last_servo_update_2;
unsigned long last_servo_update_3;
unsigned long last_servo_update_4;

unsigned long servo_update_period_1 = 5;
unsigned long servo_update_period_2 = 5;
unsigned long servo_update_period_3 = 5;
unsigned long servo_update_period_4 = 5;

int servo_step = 1;
int servo_step_2 = 1;
int servo_step_3 = 1;
int servo_step_4 = 1;

#endif

#endif