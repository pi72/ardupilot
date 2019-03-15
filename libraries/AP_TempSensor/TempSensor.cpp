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

#include "TempSensor.h"
#include <AP_BoardConfig/AP_BoardConfig.h>


extern const AP_HAL::HAL &hal;

// table of user settable parameters
const AP_Param::GroupInfo TempSensor::var_info[] = {
    
    AP_GROUPEND
};

TempSensor::TempSensor() {
    AP_Param::setup_object_defaults(this, var_info);
    //source->set_pin(pin);
}

void TempSensor::init(){
    source = hal.analogin->channel(13);
}

float TempSensor::get_voltage() {
    voltage = source->voltage_average();
    return voltage;
}
