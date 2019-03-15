/*
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <AP_Common/AP_Common.h>
#include <AP_HAL/AP_HAL.h>
#include <AP_Param/AP_Param.h>
#include <AP_Math/AP_Math.h>


// Maximum number of range finder instances available on this platform
#define HUMIDITYSENSOR_MAX_INSTANCES 2

class HumiditySensor {
    
public:
    HumiditySensor();
    
    static const struct AP_Param::GroupInfo var_info[];
    
    float voltage;            // voltage in millivolts, if applicable, otherwise 0
    //AP_Int8 pin=14;
    float get_voltage();
    void init();
    
private:
    AP_HAL::AnalogSource* source;
    
    
};
