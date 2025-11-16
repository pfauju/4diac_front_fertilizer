// ISO-Designer ISO 11783   Version 5.7.1.6514 Bucher Automation AG
// Do not change!

#define WorkingSet_0_Offset                                     1
#define Macro_select_wheel_speed_Offset                        21
#define Macro_select_radar_speed_Offset                        58
#define Macro_change2_main_Offset                              95
#define Macro_change2_calibration_run_Offset                  108
#define Macro_change2_debug_Offset                            121
#define Macro_stop_button_Offset                              134
#define Macro_start_button_Offset                             163
#define Macro_change2_settings_Offset                         192
#define DataMask_M3_Offset                                    205
#define DataMask_M4_Offset                                    243
#define DataMask_M1_Offset                                    257
#define DataMask_M2_Offset                                    271
#define Container_Wheel_based_machine_speed_Offset            285
#define Container_Ground_based_machine_speed_Offset           313
#define Container_radar_speed_Offset                          341
#define Container_wheel_speed_Offset                          363
#define SoftKeyMask_S1_Offset                                 385
#define SoftKeyMask_S2_Offset                                 411
#define SoftKeyMask_S3_Offset                                 437
#define SoftKeyMask_S4_Offset                                 463
#define SoftKey_stop_Offset                                   489
#define SoftKey_100_percent_Offset                            504
#define SoftKey_plus_percent_Offset                           517
#define SoftKey_start_Offset                                  530
#define SoftKey_minus_percent_Offset                          545
#define SoftKey_main_Offset                                   558
#define SoftKey_debug_Offset                                  573
#define SoftKey_calibration_run_Offset                        588
#define SoftKey_settings_Offset                               603
#define Button_select_wheel_speed_Offset                      618
#define Button_select_radar_speed_Offset                      643
#define OutputString_km_h_Offset                              664
#define OutputString_settings_header_Offset                   685
#define OutputString_wheel_speed_Offset                       715
#define OutputString_radar_speed_Offset                       754
#define OutputString_debug_Offset                             792
#define OutputString_nordsten_Offset                          814
#define OutputString_abdrehprobe_Offset                       839
#define OutputString_x_wheel_speed_Offset                     867
#define OutputString_x_radar_speed_Offset                     884
#define OutputString_start_Offset                             902
#define OutputString_stop_Offset                              924
#define OutputNumber_Wheel_based_machine_speed_km_h_Offset    945
#define OutputNumber_Ground_based_machine_speed_km_h_Offset    974
#define Line_13000_Offset                                    1003
#define Tractor_wheel_slip_Offset                            1014
#define _100_percent_20001_Offset                            1543
#define debug_20002_Offset                                   2834
#define Tractor_ground_speed_Offset                          4125
#define plus_percent_20004_Offset                            4654
#define minus_percent_20005_Offset                           5945
#define fertilzier_bin_20006_Offset                          7236
#define measuring_cup_20007_Offset                           8527
#define settings_20008_Offset                                9818
#define NumberVariable_Wheel_based_machine_speed_Offset     11109
#define NumberVariable_Ground_based_machine_speed_Offset    11116
#define NumberVariable_bool_start_stop_Offset               11123
#define FontAttributes_OutputNumber_Offset                  11130
#define FontAttributes_OutputString_Offset                  11138
#define FontAttributes_Header_Offset                        11146
#define FontAttributes_23003_Offset                         11154
#define FontAttributes_23005_Offset                         11162
#define FontAttributes_23006_Offset                         11170
#define FontAttributes_23007_Offset                         11178
#define FontAttributes_23008_Offset                         11186
#define FontAttributes_check_Offset                         11194
#define FontAttributes_string_start_stop_button_Offset      11202
#define LineAttributes_24000_Offset                         11210
#define Generated_Pointer_To_Null_Offset                    11218
#define AuxFunction2_31000_Offset                           11223

#define ISO_OP_MEMORY_CLASS

#define ISO_OP_DefaultPool_Size  11229
extern const unsigned char ISO_OP_MEMORY_CLASS isoOP_DefaultPool[];

#define ISO_OP_DefaultPool_ObjectNumber     71
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_DefaultPool_Offset[];
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_DefaultPool_Offset_Id[];
#define ISO_OP_DefaultPool_Scale_Offset      1

#define ID_NULL  0xFFFF

#define TYPEID_WORKSET        0
#define TYPEID_DATAMASK       1
#define TYPEID_ALARMMASK      2
#define TYPEID_CONTAINER      3
#define TYPEID_SKEYMASK       4
#define TYPEID_SOFTKEY        5
#define TYPEID_BUTTON         6
#define TYPEID_INBOOL         7
#define TYPEID_INSTR          8
#define TYPEID_INNUM          9
#define TYPEID_INLIST        10
#define TYPEID_OUTSTR        11
#define TYPEID_OUTNUM        12
#define TYPEID_OUTLINE       13
#define TYPEID_OUTRECT       14
#define TYPEID_OUTELLIPSE    15
#define TYPEID_OUTPOLY       16
#define TYPEID_OUTMETER      17
#define TYPEID_OUTLINBAR     18
#define TYPEID_OUTARCBAR     19
#define TYPEID_OUTPICT       20
#define TYPEID_VARNUM        21
#define TYPEID_VARSTR        22
#define TYPEID_FONTATTR      23
#define TYPEID_LINEATTR      24
#define TYPEID_FILLATTR      25
#define TYPEID_INPATTR       26
#define TYPEID_OBJPTR        27
#define TYPEID_MACRO         28
#define TYPEID_AUXFUNC       29
#define TYPEID_AUXINP        30
#define TYPEID_AUXFUNC2      31
#define TYPEID_AUXINP2       32
#define TYPEID_AUXPTR        33
#define TYPEID_WINMASK       34
#define TYPEID_KEYGROUP      35
#define TYPEID_GRPHCTXT      36
#define TYPEID_OUTLIST       37
#define TYPEID_EXTINPATTR    38
#define TYPEID_COLORMAP      39
#define TYPEID_OBJLBLREF     40
#define TYPEID_EXTOBJDEF     41
#define TYPEID_EXTREFNAME    42
#define TYPEID_EXTOBJPTR     43
#define TYPEID_ANIMATION     44
#define TYPEID_COLORPAL      45
#define TYPEID_GRAPHDATA     46
#define TYPEID_WSSPECIAL     47
#define TYPEID_SCALEGRAPH    48

#define EV_REFRESH            0
#define EV_ACT                1
#define EV_DEACT              2
#define EV_SHOW               3
#define EV_HIDE               4
#define EV_ENABLE             5
#define EV_DISABLE            6
#define EV_CHGACTMASK         7
#define EV_CHGSKEYMASK        8
#define EV_CHGATTR            9
#define EV_CHGBKCOLOR        10
#define EV_CHGFONTATTR       11
#define EV_CHGLINEATTR       12
#define EV_CHGFILLATTR       13
#define EV_CHGCHILDLOC       14
#define EV_CHGSIZE           15
#define EV_CHGVAL            16
#define EV_CHGPRIOR          17
#define EV_CHGENDPNT         18
#define EV_SELINPUT          19
#define EV_DESELINPUT        20
#define EV_ESC               21
#define EV_ENTERVAL          22
#define EV_ENTERCHGVAL       23
#define EV_KEYPRESS          24
#define EV_KEYRELEASE        25
#define EV_CHGCHILDPOS       26

#define CMD_HIDE_SHOW               160
#define CMD_ENABLE_DISABLE          161
#define CMD_SELECT_INPUT_OBJECT     162
#define CMD_CONTROL_AUDIO_DEVICE    163
#define CMD_SET_AUDIO_VOLUME        164
#define CMD_CHANGE_CHILD_LOCATION   165
#define CMD_CHANGE_SIZE             166
#define CMD_CHANGE_BACKGROUND_COLOR 167
#define CMD_CHANGE_NUMERIC_VALUE    168
#define CMD_CHANGE_END_POINT        169
#define CMD_CHANGE_FONT_ATTRIBUTES  170
#define CMD_CHANGE_LINE_ATTRIBUTES  171
#define CMD_CHANGE_FILL_ATTRIBUTES  172
#define CMD_CHANGE_ACTIVE_MASK      173
#define CMD_CHANGE_SOFT_KEY_MASK    174
#define CMD_CHANGE_ATTRIBUTE        175
#define CMD_CHANGE_PRIORITY         176
#define CMD_CHANGE_LIST_ITEM        177
#define CMD_CHANGE_STRING_VALUE     179
#define CMD_CHANGE_CHILD_POSITION   180
#define CMD_SET_OBJECT_LABEL        181
#define CMD_CHANGE_POLYGON_POINT    182
#define CMD_CHANGE_POLYGON_SCALE    183
#define CMD_GRAPHICS_CONTEXT        184
#define CMD_GET_ATTRIBUTE           185
#define CMD_SELECT_COLOURMAP_OR_PALETTE 186
#define CMD_EXECUTE_EXTENDED_MACRO  188
#define CMD_LOCK_UNLOCK_MASK        189
#define CMD_EXECUTE_MACRO           190

#define COLOR_BLACK       0
#define COLOR_WHITE       1
#define COLOR_GREEN       2
#define COLOR_TEAL        3
#define COLOR_MAROON      4
#define COLOR_PURPLE      5
#define COLOR_OLIVE       6
#define COLOR_SILVER      7
#define COLOR_GREY        8
#define COLOR_BLUE        9
#define COLOR_LIME       10
#define COLOR_CYAN       11
#define COLOR_RED        12
#define COLOR_MAGENTA    13
#define COLOR_YELLOW     14
#define COLOR_NAVY       15

#define FLOAT_1      0x00, 0x00, 0x80, 0x3F
#define FLOAT_10     0x00, 0x00, 0x20, 0x41
#define FLOAT_100    0x00, 0x00, 0xC8, 0x42
#define FLOAT_1000   0x00, 0x00, 0x7A, 0x44
#define FLOAT_0_1    0xCD, 0xCC, 0xCC, 0x3D
#define FLOAT_0_01   0x0A, 0xD7, 0x23, 0x3C
#define FLOAT_0_001  0x6F, 0x12, 0x83, 0x3A
