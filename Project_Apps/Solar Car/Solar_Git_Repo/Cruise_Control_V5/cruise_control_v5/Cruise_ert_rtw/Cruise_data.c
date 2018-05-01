/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Cruise_data.c
 *
 * Code generated for Simulink model 'Cruise'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 8.12 (R2017a) 16-Feb-2017
 * C/C++ source code generated on : Wed Feb 21 20:09:25 2018
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Microchip->PIC18
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Cruise.h"

/* Constant parameters (auto storage) */
const ConstP rtConstP = {
  /* Expression: [NetDistancemiles;total_distmiles]
   * Referenced by: '<S5>/Prelookup'
   */
  { 0.0, 0.0621, 9.6876, 18.754199999999997, 39.060900000000004, 71.9118,
    95.7582, 112.5873, 124.44839999999999, 136.4958, 157.9824,
    166.17960000000002, 215.85960000000003, 253.61640000000003, 268.1478,
    276.1587, 499.7187, 628.2657, 644.59800000000007, 679.74660000000006,
    705.20760000000007, 808.29360000000008, 838.5363000000001, 995.6493,
    1007.8209, 1096.0029, 1135.6848, 1214.5518, 1329.4368, 1429.4178,
    1469.0375999999999, 1510.8929999999998, 1516.0472999999997,
    1782.4562999999998, 1808.8487999999998, 1833.5645999999997,
    1849.2758999999996, 1878.3386999999996, 1897.8380999999995,
    1952.4860999999994, 1987.7588999999994, 1999.4957999999995 },

  /* Expression: [energyTotal_noDrag';energySeg_noDrag';mult_vel_ToPower']
   * Referenced by: '<S5>/Direct Lookup Table (n-D)'
   */
  { 47117.325957419758, 1.4394652222222222, 23.179794238683129,
    46750.031893242805, 367.29406417695475, 38.1494549050843, 46540.590135407416,
    209.44175783539092, 23.100411381701335, 46121.880892514411,
    418.70924289300416, 20.620801663709244, 45361.051938107004,
    760.82895440740731, 23.160076077232453, 44799.511284543216, 561.540653563786,
    23.548014928412211, 44436.782464465025, 362.7288200781893,
    21.554642613092796, 44153.490697555557, 283.29176690946497,
    23.883683278391828, 43848.236502057611, 305.25419549794236,
    25.336470970684317, 43295.160959037035, 553.075543020576, 25.738950712433695,
    43145.624800732512, 149.53615830452671, 18.245307737872555,
    42056.274845176958, 1089.3499555555554, 21.928085349794241,
    41224.649948913582, 831.62489626337447, 22.026523225985489,
    40896.96117744856, 327.68877146502058, 22.550769907847069,
    40722.000616456789, 174.96056099176951, 21.84111619931732,
    35556.705651847733, 5165.2949646090537, 23.104781848994058,
    32561.673135674893, 2995.0325161728397, 23.29905260034592,
    32199.873617621397, 361.79951805349793, 22.153008676399256,
    31352.080746288062, 847.79287133333332, 24.119681655251643,
    30731.869140979423, 620.21160530864188, 24.358571579845432,
    28382.109958510286, 2349.7591824691358, 22.794395250136347,
    27650.051300637857, 732.05865787242806, 24.205512033023215,
    23861.578774012345, 3788.4725266255145, 24.112483192634883,
    23593.126718028805, 268.45205598353914, 22.056283803644916,
    21651.565526341565, 1941.5611916872426, 22.018355956935029,
    20698.475644403294, 953.08988193827156, 24.017749241677777,
    18916.877445925926, 1781.5981984773664, 22.590260889148119,
    16184.802998806583, 2732.074447119342, 23.780589446112785,
    13751.677571275717, 2433.1254275308638, 24.335184603685814,
    12829.121804765431, 922.555766510288, 23.285156939768054, 11801.093026880657,
    1028.0287778847737, 24.560608391031984, 11680.537166522632,
    120.55586035802467, 23.389250210719425, 5046.9906224485594,
    6633.5465440740736, 24.898827230999455, 4375.2281910699585,
    671.7624313786007, 25.451414074074084, 3879.2346128724275,
    495.99357819753072, 20.069741443844737, 3514.0416811975306,
    365.19293167489718, 23.243928056734831, 2663.3554962921803,
    850.68618490534982, 29.2669667000809, 2258.9662971728389, 404.38919911934158,
    20.740010163560594, 1191.7945147860082, 1067.171782386831,
    19.530293679854093, 410.54658132098774, 781.24793346502042,
    22.149354441981107, 0.0, 410.54658132098774, 34.972054641060829 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
