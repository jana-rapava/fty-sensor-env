/*  =========================================================================
    fty-sensor-env - Grab temperature and humidity data from sensors attached to the box

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#ifndef FTY_SENSOR_ENV_H_H_INCLUDED
#define FTY_SENSOR_ENV_H_H_INCLUDED

//  Include the project library file
#include "fty_sensor_env_library.h"

//  Add your own public definitions here, if you need them
//#define PORTS_OFFSET                9   // T&H ports range 9-12
#define PORTS_OFFSET                1 // consider ports 1-8 and 9-12
#define POLLING_INTERVAL            5000
#define TIME_TO_LIVE                300

#define DISABLED        0
// temperature and humidity have negative values not to clash with GPI port range
#define TEMPERATURE     (char)-1
#define HUMIDITY        (char)-2
#define TEMPERATURE_STR "temperature"
#define HUMIDITY_STR    "humidity"
#define STATUSGPI_STR   "status.GPI"
#define TH              "TH"
#define VALID           1 // valid T&H sensor, monitored
#define INACTIVE        2 // valid T&H sensor, not monitored (inactive), but still monitor attached GPI sensors
#define DELETED         3 // to keep memory sanity in case of memory failure
#define INVALID         0 // invalid T&H sensor (not known asset), so won't monitor neither T&H nor GPI
                          // (as they all require attachment to rack) that is only configured via T&H sensor

extern volatile char s_interrupted;

#endif
