//*********************************************************************
//* Constants for the OLED Menu in the STROBE system.				  *
//*																	  *
//* Written by Zachary Lang                                           *
//* January 12, 2015                                               	  *
//*********************************************************************


// Menus //

// Welcome Screen
far rom char welcome_screen1_l1[21] = "       STROBE       ";
far rom char welcome_screen1_l2[21] = "        v1.0        ";
far rom char welcome_screen1_l3[21] = "                    ";
far rom char welcome_screen1_l4[21] = "  by: Zachary Lang  ";

// Welcome Screen definitions.
#define		welcome_screen1		0


// Select Menu 1
far rom char select_menu1_l1[21] = "    Motion Sensing  ";
far rom char select_menu1_l2[21] = "    Manual          ";
far rom char select_menu1_l3[21] = "    STROBE          ";
far rom char select_menu1_l4[21] = "              Next  ";

// Select Menu 1 definitions.
#define		select_menu1a	10		// Motion Sensing.
#define		select_menu1b	11		// Manual.
#define		select_menu1c	12		// STROBE.
#define		select_menu1d	13		// Next.


// Select Menu 2
far rom char select_menu2_l1[21] = "    Options         ";
far rom char select_menu2_l2[21] = "                    ";
far rom char select_menu2_l3[21] = "                    ";
far rom char select_menu2_l4[21] = "              Next  ";

// Select Menu 2 definitions.
#define		select_menu2a	14		// Options.
#define		select_menu2b	15		// Next.


// Motion Sensing Menu 1
far rom char motion_menu1a_off_l1[21] = "    Start           ";
far rom char motion_menu1a_off_l2[21] = "    Options         ";
far rom char motion_menu1a_off_l3[21] = "                    ";
far rom char motion_menu1a_off_l4[21] = "  Status:    OFF    ";

far rom char motion_menu1a_on_l1[21] = "    Stop            ";
far rom char motion_menu1a_on_l2[21] = "    Options         ";
far rom char motion_menu1a_on_l3[21] = "                    ";
far rom char motion_menu1a_on_l4[21] = "  Status:     ON    ";

// Motion Sensing Menu 1 definitions.
#define		motion_menu1a_off	20		// Start
#define		motion_menu1a_on	21		// Stop
#define		motion_menu1b		22		// Options


// Motion Sensing Menu 2
far rom char motion_menu2_l1[21] = " Timeout Delay: 0.1s";
far rom char motion_menu2_l2[21] = "    |          |    ";
far rom char motion_menu2_l3[21] = "    Light Spread    ";
far rom char motion_menu2_l4[21] = "    |          |    ";

// Motion Sensing Menu 2 definitions.
#define		motion_menu2a	23

// Manual Menu 1
far rom char manual_menu1_l1[21] = "   Zone     All     ";
far rom char manual_menu1_l2[21] = "   Red  |          |";
far rom char manual_menu1_l3[21] = "   Green|          |";
far rom char manual_menu1_l4[21] = "   Blue |          |";

#define		manual_menu1		30		// Initial
#define		manual_menu1a		31		// Zone
#define		manual_menu1a_zone	32		// Zone Select
#define		manual_menu1b		33		// Red
#define		manual_menu1b_red	34		// Red Select
#define		manual_menu1c		35		// Green
#define		manual_menu1c_green	36		// Green Select
#define		manual_menu1d		37		// Blue
#define		manual_menu1d_blue	38		// Blue Select


#define		manual_new1		40
far rom char manual_new1_l1[21] = "      STAGE 1       ";
far rom char manual_new1_l2[21] = " > Change Color     ";
far rom char manual_new1_l3[21] = "   Change Delay     ";
far rom char manual_new1_l4[21] = "             Next   ";

#define		manual_new2		41
far rom char manual_new2_l1[21] = "      STAGE 2       ";
far rom char manual_new2_l2[21] = " > Change Color     ";
far rom char manual_new2_l3[21] = "   Change Delay     ";
far rom char manual_new2_l4[21] = "   Back      Next   ";

#define		manual_new_color	42
far rom char manual_new_color_l1[21] = " > Red              ";
far rom char manual_new_color_l2[21] = "   Green            ";
far rom char manual_new_color_l3[21] = "   Blue             ";
far rom char manual_new_color_l4[21] = "   Save             ";

#define		manual_load1	60
far rom char manual_load1_l1[21] = " > Profile 1        ";
far rom char manual_load1_l2[21] = "   Profile 2        ";
far rom char manual_load1_l3[21] = "   Profile 3        ";
far rom char manual_load1_l4[21] = "   Profile 4        ";

#define		manual_load2	61
far rom char manual_load2_l1[21] = "   Profile 1        ";
far rom char manual_load2_l2[21] = " > Profile 2        ";
far rom char manual_load2_l3[21] = "   Profile 3        ";
far rom char manual_load2_l4[21] = "   Profile 4        ";

#define		manual_load3	62
far rom char manual_load3_l1[21] = "   Profile 1        ";
far rom char manual_load3_l2[21] = "   Profile 2        ";
far rom char manual_load3_l3[21] = " > Profile 3        ";
far rom char manual_load3_l4[21] = "   Profile 4        ";

#define		manual_load4	63
far rom char manual_load4_l1[21] = "   Profile 1        ";
far rom char manual_load4_l2[21] = "   Profile 2        ";
far rom char manual_load4_l3[21] = "   Profile 3        ";
far rom char manual_load4_l4[21] = " > Profile 4        ";

#define		strobe_menu1a	80

// Progress Bars-    |          |    -
//               12345678901234567890
far rom char progress_bar_0[21] = {0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_2[21] = {0x20,0x20,0x20,0x20,0x7C,0x02,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_4[21] = {0x20,0x20,0x20,0x20,0x7C,0x03,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_6[21] = {0x20,0x20,0x20,0x20,0x7C,0x04,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_8[21] = {0x20,0x20,0x20,0x20,0x7C,0x05,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_10[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_12[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x02,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_14[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x03,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_16[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x04,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_18[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x05,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_20[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_22[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x02,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_24[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x03,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_26[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x04,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_28[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x05,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_30[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_32[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x02,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_34[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x03,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_36[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x04,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_38[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x05,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_40[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x20,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_42[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x02,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_44[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x03,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_46[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x04,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_48[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x05,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_50[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x20,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_52[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x02,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_54[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x03,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_56[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x04,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_58[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x05,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_60[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x20,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_62[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x02,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_64[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_66[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x04,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_68[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x05,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_70[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x20,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_72[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x02,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_74[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_76[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x04,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_78[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x05,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_80[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x20,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_82[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x02,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_84[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_86[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x04,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_88[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x05,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_90[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x20,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_92[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x02,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_94[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_96[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x04,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_98[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x05,0x7C,0x20,0x20,0x20,0x20,'\0'};
far rom char progress_bar_100[21] = {0x20,0x20,0x20,0x20,0x7C,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x7C,0x20,0x20,0x20,0x20,'\0'};



