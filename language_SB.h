/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Sharebot
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_SB_H
#define LANGUAGE_SB_H

#define DISPLAY_CHARSET_ISO10646_1

  #define WELCOME_MSG                         "***"
  #define MSG_SD_INSERTED                     "Card inserted"
  #define MSG_SD_REMOVED                      "Card removed"
  #define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
  #define MSG_MAIN                            "Main"
  #define MSG_AUTOSTART                       "Autostart"
  #define MSG_DISABLE_STEPPERS                "Disable steppers"
  #define MSG_AUTO_HOME                       "Auto home"
  #define MSG_AUTO_HOME_X                     "Home X"
  #define MSG_AUTO_HOME_Y                     "Home Y"
  #define MSG_AUTO_HOME_Z                     "Home Z"
  #define MSG_LEVEL_BED_HOMING                "Homing XYZ"
  #define MSG_LEVEL_BED_WAITING               "Click to Begin"
  #define MSG_LEVEL_BED_NEXT_POINT            "Next Point"
  #define MSG_LEVEL_BED_DONE                  "Leveling Done!"
  #define MSG_LEVEL_BED_CANCEL                "Cancel"
  #define MSG_SET_HOME_OFFSETS                "Set home offsets"
  #define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
  #define MSG_SET_ORIGIN                      "Set origin"
  #define MSG_PREHEAT_1                       "Preheat PLA"
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " All"
  #define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Bed"
  #define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " conf"
  #define MSG_PREHEAT_2                       "Preheat ABS"
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " All"
  #define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Bed"
  #define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " conf"
  #define MSG_COOLDOWN                        "Cooldown"
  #define MSG_SWITCH_PS_ON                    "Switch power on"
  #define MSG_SWITCH_PS_OFF                   "Switch power off"
  #define MSG_EXTRUDE                         "Extrude"
  #define MSG_RETRACT                         "Retract"
  #define MSG_MOVE_AXIS                       "Move axis"
  #define MSG_LEVEL_BED                       "Level bed"
  #define MSG_MOVE_X                          "Move X"
  #define MSG_MOVE_Y                          "Move Y"
  #define MSG_MOVE_Z                          "Move Z"
  #define MSG_MOVE_E                          "Extruder"
  #define MSG_MOVE_01MM                       "Move 0.1mm"
  #define MSG_MOVE_1MM                        "Move 1mm"
  #define MSG_MOVE_10MM                       "Move 10mm"
#if ENABLED(DOGLCD)
  #define MSG_SPEED                           "Speed"
#else
  #define MSG_SPEED                           "Speed"
#endif
  #define MSG_BED_Z                           "Bed Z"
  #define MSG_NOZZLE                          "Nozzle"
  #define MSG_BED                             "Bed"
#if ENABLED(DOGLCD)
  #define MSG_FAN_SPEED                       "Fan speed"
#else
  #define MSG_FAN_SPEED                       "Fan speed"
#endif
  #define MSG_FLOW                            "Flow"
  #define MSG_CONTROL                         "Control"
  #define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
  #define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
  #define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
  #define MSG_AUTOTEMP                        "Autotemp"
  #define MSG_ON                              "On "
  #define MSG_OFF                             "Off"
  #define MSG_PID_P                           "PID-P"
  #define MSG_PID_I                           "PID-I"
  #define MSG_PID_D                           "PID-D"
  #define MSG_PID_C                           "PID-C"
  #define MSG_SELECT                          "Select"
  #define MSG_ACC                             "Accel"
  #define MSG_VX_JERK                         "Vx-jerk"
  #define MSG_VY_JERK                         "Vy-jerk"
  #define MSG_VZ_JERK                         "Vz-jerk"
  #define MSG_VE_JERK                         "Ve-jerk"
  #define MSG_VMAX                            "Vmax "
  #define MSG_VMIN                            "Vmin"
  #define MSG_VTRAV_MIN                       "VTrav min"
  #define MSG_AMAX                            "Amax "
  #define MSG_A_RETRACT                       "A-retract"
  #define MSG_A_TRAVEL                        "A-travel"
  #define MSG_XSTEPS                          "Xsteps/mm"
  #define MSG_YSTEPS                          "Ysteps/mm"
  #define MSG_ZSTEPS                          "Zsteps/mm"
  #define MSG_ESTEPS                          "Esteps/mm"
  #define MSG_TEMPERATURE                     "Temperature"
  #define MSG_MOTION                          "Motion"
  #define MSG_VOLUMETRIC                      "Filament"
  #define MSG_VOLUMETRIC_ENABLED              "E in mm3"
  #define MSG_FILAMENT_DIAM                   "Fil. Dia."
  #define MSG_CONTRAST                        "LCD contrast"
  #define MSG_STORE_EPROM                     "Store memory"
  #define MSG_LOAD_EPROM                      "Load memory"
  #define MSG_RESTORE_FAILSAFE                "Restore failsafe"
  #define MSG_REFRESH                         "Refresh"
  #define MSG_WATCH                           "Info screen"
  #define MSG_PREPARE                         "Prepare"
  #define MSG_TUNE                            "Tune"
  #define MSG_PAUSE_PRINT                     "Pause print"
  #define MSG_RESUME_PRINT                    "Resume print"
  #define MSG_STOP_PRINT                      "Stop print"
  #define MSG_CARD_MENU                       "Print from SD"
  #define MSG_NO_CARD                         "No SD card"
  #define MSG_DWELL                           "Sleep..."
  #define MSG_USERWAIT                        "Wait for user..."
  #define MSG_RESUMING                        "Resuming print"
  #define MSG_PRINT_ABORTED                   "Print aborted"
  #define MSG_NO_MOVE                         "No move."
  #define MSG_KILLED                          "KILLED. "
  #define MSG_STOPPED                         "STOPPED. "
  #define MSG_CONTROL_RETRACT                 "Retract mm"
  #define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
  #define MSG_CONTROL_RETRACTF                "Retract  V"
  #define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
  #define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
  #define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
  #define MSG_AUTORETRACT                     "AutoRetr."
  #define MSG_FILAMENTCHANGE                  "Change filament"
  #define MSG_INIT_SDCARD                     "Init. SD card"
  #define MSG_CNG_SDCARD                      "Change SD card"
  #define MSG_ZPROBE_OUT                      "Z probe out. bed"
  #define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
  #define MSG_BLTOUCH_RESET                   "Reset BLTouch"
  #define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
  #define MSG_FIRST                           "first"
  #define MSG_ZPROBE_ZOFFSET                  "Z Offset"
  #define MSG_BABYSTEP_X                      "Babystep X"
  #define MSG_BABYSTEP_Y                      "Babystep Y"
  #define MSG_BABYSTEP_Z                      "Babystep Z"
  #define MSG_ENDSTOP_ABORT                   "Endstop abort"
  #define MSG_HEATING_FAILED_LCD              "Heating failed"
  #define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
  #define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
  #define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
  #define MSG_ERR_MINTEMP                     "Err: MINTEMP"
  #define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
  #define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
  #define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
  #define MSG_HALTED                          "PRINTER HALTED"
  #define MSG_PLEASE_RESET                    "Please reset"
  #define MSG_SHORT_DAY                       "d" // One character only
  #define MSG_SHORT_HOUR                      "h" // One character only
  #define MSG_SHORT_MINUTE                    "m" // One character only
  #define MSG_HEATING                         "Heating..."
  #define MSG_HEATING_COMPLETE                "***"
  #define MSG_BED_HEATING                     "Bed Heating."
  #define MSG_BED_DONE                        "***"
  #define MSG_DELTA_CALIBRATE                 "Delta Calibration"
  #define MSG_DELTA_CALIBRATE_X               "Calibrate X"
  #define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
  #define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
  #define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"
  #define MSG_INFO_MENU                       "About Printer"
  #define MSG_INFO_PRINTER_MENU               "Printer Info"
  #define MSG_INFO_STATS_MENU                 "Printer Stats"
  #define MSG_INFO_BOARD_MENU                 "Board Info"
  #define MSG_INFO_THERMISTOR_MENU            "Thermistors"
  #define MSG_INFO_EXTRUDERS                  "Extruders"
  #define MSG_INFO_BAUDRATE                   "Baud"
  #define MSG_INFO_PROTOCOL                   "Protocol"
  #define MSG_LIGHTS_ON                       "Case light on"
  #define MSG_LIGHTS_OFF                      "Case light off"

#if LCD_WIDTH >= 20
      #define MSG_INFO_PRINT_COUNT              "Print Count"
        #define MSG_INFO_COMPLETED_PRINTS         "Completed"
        #define MSG_INFO_PRINT_TIME               "Total print time"
  #if ENABLED(DOGLCD)
        #define MSG_INFO_PRINT_LONGEST            "Longest job time"
  #else
        #define MSG_INFO_PRINT_LONGEST            "Longest job time"
  #endif
        #define MSG_INFO_PRINT_FILAMENT           "Extruded total"
  #else
      #define MSG_INFO_PRINT_COUNT              "Prints"
        #define MSG_INFO_COMPLETED_PRINTS         "Completed"
        #define MSG_INFO_PRINT_TIME               "Total"
  #if ENABLED(DOGLCD)
        #define MSG_INFO_PRINT_LONGEST            "Longest"
  #else
        #define MSG_INFO_PRINT_LONGEST            "Longest"
  #endif
  #define MSG_INFO_PRINT_FILAMENT           "Extruded"
#endif        
  #define MSG_INFO_MIN_TEMP                   "Min Temp"
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
  #define MSG_INFO_PSU                        "Power Supply"

  #define MSG_DRIVE_STRENGTH                  "Drive Strength"
  #define MSG_DAC_PERCENT                     "Driver %"
  #define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"
  #define MSG_FILAMENT_CHANGE_HEADER          "CHANGE FILAMENT"
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "CHANGE OPTIONS:"
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
      #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
    #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
    #define MSG_FILAMENT_CHANGE_INIT_3          "change"
        #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
        #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
        #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
        #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
        #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
  #else // LCD_HEIGHT < 4
      #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
        #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
        #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
        #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
        #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
        #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_SB_H
  
