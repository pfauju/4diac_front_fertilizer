# WindowMask_W1 – Abdrehprobe (Calibration Running)

## Overview

`WindowMask_W1` represents the **runtime window** of the Abdrehprobe (calibration run) for the front tank.
It is displayed while the calibration is active and shows **live machine data**, **target values**, and **user interaction elements** (confirm / cancel / stop).

* **Mask type:** Window Mask
* **Resolution:** 480 × 320 px
* **Style:** ISOBUS VT–compliant, monochrome gray, dezent New-Holland-Blau
* **Purpose:** Live monitoring and interaction during calibration

---

## Layout Structure

The mask is structured as a **2 × 3 grid of containers** below a header.

```
┌───────────────────────────────┐
│ Header                        │
├───────────────┬───────────────┤
│ Engine RPM    │ Engine %      │
├───────────────┼───────────────┤
│ Target Qty    │ Actual Qty    │
├───────────────┼───────────────┤
│ Flow Factor   │ STOP          │
└───────────────┴───────────────┘
```

All containers are visually identical (same size, borders, spacing).

---

## Containers and Objects

### 1. Header

**Container:** `Container_W1_header`

| Object        | Name                     | Description                                  |
| ------------- | ------------------------ | -------------------------------------------- |
| Rectangle     | `Rectangle_W1_header`    | Background frame                             |
| Output String | `OutputString_W1_header` | Static title text (e.g. "Abdrehprobe läuft") |

---

### 2. Engine Speed – RPM

**Container:** `Container_W1_engine_speed_rpm`

| Object          | Name                                 | Description             |
| --------------- | ------------------------------------ | ----------------------- |
| Rectangle       | `Rectangle_W1_engine_speed_rpm`      | Container background    |
| Output Number   | `OutputNumber_W1_engine_speed_rpm`   | Engine speed in rpm     |
| Output String   | `OutputString_W1_engine_speed_rpm`   | Unit label ("u/min")    |
| Picture Graphic | `Electric_motor_W1_engine_speed_rpm` | Icon (motor)            |
| Number Variable | `NumberVariable_engine_speed_rpm`    | Source variable for rpm |

---

### 3. Engine Speed – Percent

**Container:** `Container_W1_engine_speed_percent`

| Object          | Name                                     | Description                 |
| --------------- | ---------------------------------------- | --------------------------- |
| Rectangle       | `Rectangle_W1_engine_speed_percent`      | Container background        |
| Output Number   | `OutputNumber_W1_engine_speed_percent`   | Engine speed in %           |
| Output String   | `OutputString_W1_engine_speed_percent`   | Unit label ("%")            |
| Picture Graphic | `Electric_motor_W1_engine_speed_percent` | Icon (motor)                |
| Number Variable | `NumberVariable_engine_speed_percent`    | Source variable for percent |

---

### 4. Target Quantity

**Container:** `Container_W1_target_quantity`

| Object          | Name                                | Description              |
| --------------- | ----------------------------------- | ------------------------ |
| Rectangle       | `Rectangle_W1_target_quantity`      | Container background     |
| Output Number   | `OutputNumber_W1_target_quantity`   | Target quantity (kg)     |
| Output String   | `OutputString_W1_target_quantity`   | Unit label ("kg")        |
| Picture Graphic | `weight_W1_target_quantity`         | Weight icon              |
| Number Variable | `NumberVariable_W1_target_quantity` | Target quantity variable |

---

### 5. Actual Quantity

**Container:** `Container_W1_actual_quantity`

| Object          | Name                                     | Description                      |
| --------------- | ---------------------------------------- | -------------------------------- |
| Rectangle       | `Rectangle_W1_actual_quantity`           | Container background             |
| Output String   | `OutputString_W1_actual_quantity_header` | Label ("Istmenge")               |
| Input Number    | `InputNumber_W1_actual_quantity`         | User input for measured quantity |
| Picture Graphic | `weight_W1_actual_quantity`              | Weight icon                      |
| Button          | `Button_W1_actual_quantity_yes`          | Accept input                     |
| Picture Graphic | `check_W1_actual_quantity_yes`           | Checkmark icon                   |
| Button          | `Button_W1_actual_quantity_no`           | Cancel / reset input             |
| Picture Graphic | `x_W1_actual_quantity_no`                | Cancel icon                      |
| Number Variable | `NumberVariable_flow_actual_quantity`    | Stored actual quantity           |

**Events:**

* `OnKeyRelease` on YES → store value
* `OnKeyRelease` on NO → reset input

---

### 6. Flow Factor

**Container:** `Container_W1_flow_factor`

| Object          | Name                              | Description            |
| --------------- | --------------------------------- | ---------------------- |
| Rectangle       | `Rectangle_W1_flow_factor`        | Container background   |
| Output Number   | `OutputNumber_W1_flow_factor`     | Calculated flow factor |
| Output String   | `OutputString_W1_flow_factor`     | Label                  |
| Picture Graphic | `fertilizer_bin_W1_flow_factor`   | Fertilizer icon        |
| Input Number    | `OutputNumber_W1_flow_factor_new` | New calculated value   |
| Number Variable | `NumberVariable_flow_factor_new`  | Calculated flow factor |

---

### 7. Stop Button

**Object:** `Button_W1_stop`

| Object        | Name                   | Description       |
| ------------- | ---------------------- | ----------------- |
| Button        | `Button_W1_stop`       | Abort calibration |
| Output String | `OutputString_W1_stop` | Label ("STOP")    |

**Event:**

* `OnKeyRelease` → Abort calibration process

---

## Variables Summary

| Variable Name                         | Purpose                  |
| ------------------------------------- | ------------------------ |
| `NumberVariable_engine_speed_rpm`     | Engine speed (rpm)       |
| `NumberVariable_engine_speed_percent` | Engine speed (%)         |
| `NumberVariable_W1_target_quantity`   | Target quantity          |
| `NumberVariable_flow_actual_quantity` | Actual measured quantity |
| `NumberVariable_flow_factor_new`      | Calculated flow factor   |

---

## Design Notes

* All containers use identical dimensions for visual consistency
* No softkeys are defined in this mask (handled separately)
* User interaction is limited to **confirm / cancel / stop** to prevent accidental changes
* Mask follows ISO 11783 VT usability guidelines

---

## Related Masks

* `DataMask_Abdrehprobe` – parameter setup
* `WindowMask_W1_Result` – calibration result (optional)
* `AlarmMask_*` – error handling

---

**Author:** Fronttank ISOBUS Project
**Purpose:** GitHub documentation for WindowMask_W1
