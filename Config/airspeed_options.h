// This file is part of MatrixPilot.
//
//    http://code.google.com/p/gentlenav/
//
// Copyright 2009-2011 MatrixPilot Team
// See the AUTHORS.TXT file for a list of authors of MatrixPilot.
//
// MatrixPilot is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// MatrixPilot is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with MatrixPilot.  If not, see <http://www.gnu.org/licenses/>.


#ifndef AIRSPEED_OPTIONS_H
#define AIRSPEED_OPTIONS_H


// Airspeeds in m/s
#define MINIMUM_GROUNDSPEED         2.0 
#define MINIMUM_AIRSPEED            6.0     /*7.0*/
#define MAXIMUM_AIRSPEED            15.0
#define CRUISE_AIRSPEED             9.0     /*12.0*/    // Gliding airspeed when aircraft is level

// Cruise airspeed may be below minimum airspeed for high drag aircraft.

// Gliding airspeed control
// Must use ALTITUDE_GAINS_VARIABLE=1 with this option.
#define GLIDE_AIRSPEED_CONTROL      1

// Pitch feedforward for gliding airspeed
// linearly interpolated from cruise airspeed to min and max airspeed
#define AIRSPEED_PITCH_MIN_ASPD     15.0     // Default off, start with 5.0
#define AIRSPEED_PITCH_MAX_ASPD     -5.0     // Default off, start with -10.0

// Maximum rate of pitch demand change in deg/s.  Used to make control smoother.
// Default 10.0, Higher for small aircraft. Too low may cause instability.
// Maximum value is 720deg/s.  
#define AIRSPEED_PITCH_ADJ_RATE     10.0

// Airspeed error integrator
#define AIRSPEED_PITCH_KI           0.005    /*0.04*/ // Integrataion rate.  High = unstable, low = slow response.
#define AIRSPEED_PITCH_KI_MAX       15.0    /*0.00*/ // Limit of integration control in degrees.  Start with 5.0.


#endif // AIRSPEED_OPTIONS_H
