/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/furka_000/Desktop/Fall 2014 Courses/EEE 495/Lab 2/FPGAtoPC/rs232_rx.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0348946540_3212880686_p_0(char *t0)
{
    char t13[16];
    char t18[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t19;
    unsigned int t20;
    int t21;
    int t22;
    int t23;

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5696);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t14 = (16 - 1);
    t15 = (16 - t14);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t3 + t17);
    t4 = (t18 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 15;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t19 = (0 - 15);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t20;
    t21 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t18);
    t22 = (t21 + 151);
    t23 = (16 + 1);
    t7 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t13, t22, t23);
    t8 = (t0 + 5824);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t7, 17U);
    xsi_driver_first_trans_fast(t8);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 9924);
    t8 = (t0 + 5824);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 17U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

}

static void work_a_0348946540_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (16 - 16);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5712);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0348946540_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    int t46;
    int t47;
    int t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2112U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 < 5);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1032U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB11;

LAB12:    t7 = (unsigned char)0;

LAB13:    if (t7 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 1);
    if (t2 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 2);
    if (t2 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 3);
    if (t2 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 4);
    if (t2 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 5);
    if (t2 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 6);
    if (t2 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 7);
    if (t2 != 0)
        goto LAB26;

LAB27:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 8);
    if (t2 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 9);
    if (t2 != 0)
        goto LAB30;

LAB31:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 10);
    if (t2 != 0)
        goto LAB32;

LAB33:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 11);
    if (t2 != 0)
        goto LAB34;

LAB35:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 5952);
    t14 = (t3 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 1;
    xsi_driver_first_trans_fast(t3);
    goto LAB9;

LAB11:    t3 = (t0 + 1992U);
    t11 = *((char **)t3);
    t12 = *((int *)t11);
    t13 = (t12 == 0);
    t7 = t13;
    goto LAB13;

LAB14:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB16:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB18:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB20:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB22:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB24:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB26:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB28:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 6016);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB30:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 6080);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB32:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t12 = *((int *)t4);
    t18 = (t12 + 1);
    t1 = (t0 + 6144);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t18;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t12 = (t5 + 1);
    t1 = (t0 + 5952);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB34:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 2632U);
    t8 = *((char **)t1);
    t12 = *((int *)t8);
    t18 = (t12 * 8);
    t19 = (t18 - 1);
    t1 = (t0 + 2632U);
    t11 = *((char **)t1);
    t20 = *((int *)t11);
    t21 = (t20 - 1);
    t22 = (t21 * 8);
    t23 = (t22 - t19);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t25 = (1U * t24);
    t6 = (t25 != 8U);
    if (t6 == 1)
        goto LAB36;

LAB37:    t1 = (t0 + 2632U);
    t14 = *((char **)t1);
    t26 = *((int *)t14);
    t27 = (t26 * 8);
    t28 = (t27 - 1);
    t29 = (31 - t28);
    t30 = (1U * t29);
    t31 = (0U + t30);
    t1 = (t0 + 6208);
    t15 = (t1 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t32 = *((char **)t17);
    t33 = (t0 + 2632U);
    t34 = *((char **)t33);
    t35 = *((int *)t34);
    t36 = (t35 * 8);
    t37 = (t36 - 1);
    t33 = (t0 + 2632U);
    t38 = *((char **)t33);
    t39 = *((int *)t38);
    t40 = (t39 - 1);
    t41 = (t40 * 8);
    t42 = (t41 - t37);
    t43 = (t42 * -1);
    t43 = (t43 + 1);
    t44 = (1U * t43);
    memcpy(t32, t4, t44);
    t33 = (t0 + 2632U);
    t45 = *((char **)t33);
    t46 = *((int *)t45);
    t47 = (t46 * 8);
    t48 = (t47 - 1);
    t33 = (t0 + 2632U);
    t49 = *((char **)t33);
    t50 = *((int *)t49);
    t51 = (t50 - 1);
    t52 = (t51 * 8);
    t53 = (t52 - t48);
    t54 = (t53 * -1);
    t54 = (t54 + 1);
    t55 = (1U * t54);
    xsi_driver_first_trans_delta(t1, t31, t55, 0LL);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5952);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB36:    xsi_size_not_matching(t25, 8U, 0);
    goto LAB37;

}

static void work_a_0348946540_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(129, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6272);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5744);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0348946540_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0348946540_3212880686_p_0,(void *)work_a_0348946540_3212880686_p_1,(void *)work_a_0348946540_3212880686_p_2,(void *)work_a_0348946540_3212880686_p_3};
	xsi_register_didat("work_a_0348946540_3212880686", "isim/TopModule_isim_beh.exe.sim/work/a_0348946540_3212880686.didat");
	xsi_register_executes(pe);
}
