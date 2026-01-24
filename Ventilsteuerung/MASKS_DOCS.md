# Front Tank ISOBUS UI – Mask Documentation

## Mask Overview & Workflow

| Mask | Type | SoftKey | Purpose |
|------|------|---------|---------|
| DataMask_M1 | Data Mask | S1 | Main overview (normal operation) |
| DataMask_M2 | Data Mask | S2 | Calibration setup (Abdrehprobe) |
| WindowMask_W1 | Window Mask | S2 | Calibration running |
| DataMask_M3 | Data Mask | S3 | Speed source selection |
| DataMask_M4 | Data Mask | S4 | Debug / service |

Operator flow:

M1 (Overview)  
→ M2 (Calibration setup)  
→ W1 (Calibration running)  
→ M3 (Speed source selection)  
→ M4 (Debug / service)

---

# DataMask_M1 – Main Overview (Front Tank)

## Purpose

Primary operator screen for daily field operation.
Provides a real-time overview of all relevant operating values.
No parameter input required.

SoftKey Mask: S1  
Resolution: 480 × 480

---

## Displayed Information

- Machine speed
- Application rate (kg/ha)
- Application rate (%)
- Electric motor speed
- Tank weight
- Fill level / tank status

---

## Containers

### Speed

Container_M1_speed  
Displays the currently selected machine speed (wheel-based or ground-based).

### Application Rate (kg/ha)

Container_M1_kg_ha  
Shows fertilizer application rate per area.

### Application Rate (%)

Container_M1_percent  
Shows application rate relative to target value.

### Weight

Container_M1_weight  
Displays fertilizer weight in the front tank.  
Includes reset function.

### Fill Level

Container_M1_filllevel  
Shows tank status (empty / filled) using text and icon.

### Electric Motor Speed

Container_M1_electric_motor  
Displays metering motor speed in rpm.

---

# DataMask_M2 – Calibration Setup (Abdrehprobe)

## Purpose

Setup mask for configuring all parameters required before starting a calibration run.

SoftKey Mask: S2  
Resolution: 480 × 480

---

## Functions

- Set target quantity
- Set or edit flow factor
- Select calibration reference area
- Start calibration run

---

## Containers

### Target Quantity

Container_M2_target_quantity  
Numeric input for desired fertilizer quantity.

### Flow Factor

Container_M2_flow_factor  
Manual input or correction of the flow factor.

### Calibration Area

Container_M2_calibration_area  

Selectable reference areas:
- 1 a
- 5 a
- 10 a

Only one area can be active at a time (radio-button logic).

### Start Calibration

Button_M2_start  
Validates inputs and switches to WindowMask_W1.

---

# WindowMask_W1 – Calibration Running

## Purpose

Runtime window shown during an active calibration run.
Displays live values and allows user interaction.

SoftKey Mask: S2  
Resolution: 480 × 320

---

## Displayed Information

- Engine speed (rpm)
- Engine speed (%)
- Target quantity
- Actual measured quantity
- Calculated flow factor
- Stop button

---

## Functions

### Actual Quantity Input

Operator enters the measured quantity.
Confirm with OK or reset input.

### Flow Factor

New flow factor is calculated and displayed after confirmation.

### Stop

Immediately aborts the calibration process.

---

# DataMask_M3 – Speed Source Selection

## Purpose

Configuration of the machine speed source used for all speed-dependent calculations.

SoftKey Mask: S3  
Resolution: 480 × 480

---

## Speed Sources

### Ground-Based Speed (Radar)

Container_M3_radar_speed  
Slip-independent speed reference.

### Wheel-Based Speed

Container_M3_wheel_speed  
Speed derived from wheel sensors, slip-dependent.

Only one speed source can be active at a time.

---

# DataMask_M4 – Debug / Service

## Purpose

Service and development mask for diagnostics and internal states.

SoftKey Mask: S4  
Resolution: 480 × 480

---

## Current State

- Header only
- No active controls yet

---

## Planned Features

- Display of internal variables
- Calibration state
- Error and status flags
- Manual override of values

Not part of normal operator workflow.

---

# Global Variable Summary

## Speed & Engine

- NumberVariable_selected_speed  
  Active machine speed used by the system

- NumberVariable_bool_selected_speed  
  Boolean selector for active speed source (wheel / ground)

- NumberVariable_Ground_based_machine_speed  
  Ground-based machine speed (radar)

- NumberVariable_Wheel_based_machine_speed  
  Wheel-based machine speed

- NumberVariable_engine_speed_rpm  
  Electric metering motor speed (rpm)

- NumberVariable_engine_speed_percent  
  Electric metering motor speed (%)

---

## Application & Calibration

- NumberVariable_target_quantity  
  Target fertilizer quantity for calibration

- NumberVariable_W1_actual_quantity  
  Measured quantity entered during calibration run

- NumberVariable_flow_factor  
  Current active flow factor

- NumberVariable_flow_factor_new  
  Newly calculated flow factor after calibration

- NumberVariable_application_rate  
  Application rate (kg/ha)

- NumberVariable_application_rate_percent  
  Application rate relative to target (%)

---

## Tank & Material

- NumberVariable_weight  
  Current fertilizer weight in front tank

---

# Button Summary

## DataMask_M1##

- Button_M1_reset
  Reset weight 

## Calibration Area Selection (DataMask_M2)

- Button_M2_calibration_area_1a  
  Select calibration area of 1 are

- Button_M2_calibration_area_5a  
  Select calibration area of 5 are

- Button_M2_calibration_area_10a  
  Select calibration area of 10 are

---

## Target Quantity Input (DataMask_M2)

- Button_M2_target_quantity_yes  
  Confirm target quantity input

- Button_M2_target_quantity_no  
  Cancel / reset target quantity input

---

## Flow Factor Input (DataMask_M2)

- Button_M2_flow_factor_yes  
  Confirm flow factor input

- Button_M2_flow_factor_no  
  Cancel / reset flow factor input

---

## Calibration Control

- Button_M2_start  
  Start calibration procedure (switch to WindowMask_W1)

- Button_W1_stop  
  Abort calibration run immediately

---

## Actual Quantity Input (WindowMask_W1)

- Button_W1_actual_quantity_yes  
  Confirm measured calibration quantity

- Button_W1_actual_quantity_no  
  Cancel / reset measured quantity input

---

## Speed Source Selection (DataMask_M3)

- Button_M3_radar_speed_select  
  Select ground-based (radar) speed as active source

- Button_M3_wheel_speed_select  
  Select wheel-based speed as active source

---

## General / Operation

- Button_M1_reset  
  Reset front tank weight value
---

## Notes

- Consistent object naming across all masks
- WindowMask_W1 belongs logically to calibration (DataMask_M2)
- Navigation is handled via SoftKey masks
