#pragma once
#ifndef IMU_h_
#define IMU_h_

#include <Arduino.h>
#include "config.h"

#ifdef MPU6050_68
  #define MPU_6050_ADDR 0x68
#endif

#ifdef MPU6050_69
  #define MPU_6050_ADDR 0x69
#endif

axis_float_t imu_rates();
axis_float_t imu_angles();
axis_float_t imu_gyro_angles();
axis_float_t imu_accel_filtered();
axis_float_t imu_accelG();
float accel_roll();
float accel_pitch();
float benchmark();
void initIMU();
void readIMU();
void processGyro();
void processAcc();
void imuCombine();


#endif

