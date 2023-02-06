#include <Arduino.h>
#include <Handy.h>
#include <Lidarx.h>
#define LIDAR_MOTOR_PIN 13
#define LIDAR_MOTOR_SPEED 120
Handy handy;
Lidarx lidar;
void setup()
{
	lidar.begin(LIDAR_MOTOR_PIN, LIDAR_MOTOR_SPEED, Serial2);
	handy.setup();
}

void loop()
{
	handy.listen();
	lidar.Scan();
}