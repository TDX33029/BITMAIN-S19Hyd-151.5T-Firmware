// FUN_01732208 @ 01732208 size=520 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01732208(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 auStack_b4 [48];
  undefined1 auStack_84 [48];
  undefined1 auStack_54 [48];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_016dd606(&local_144,0,0x90);
  FUN_016fe45c(auStack_b4,param_3);
  FUN_016fe45c(auStack_84,param_3 + 0x44);
  FUN_016fe45c(auStack_54,param_3 + 0x88);
  uVar1 = FUN_01731ac0();
  FUN_0172d888(uVar1,&local_144,&local_114,&local_e4,auStack_b4,auStack_84,auStack_54,param_4);
  param_2[0xb] = local_118;
  param_2[10] = local_11c;
  param_2[9] = local_120;
  param_2[8] = local_124;
  param_2[7] = local_128;
  param_2[6] = local_12c;
  param_2[5] = local_130;
  *param_2 = local_144;
  param_2[1] = local_140;
  param_2[2] = local_13c;
  param_2[3] = local_138;
  param_2[4] = local_134;
  param_2[0x15] = local_104;
  param_2[0x25] = local_d8;
  param_2[0x17] = local_fc;
  param_2[0x24] = local_dc;
  param_2[0x13] = local_10c;
  param_2[0x23] = local_e0;
  param_2[0x1a] = local_f0;
  param_2[0x12] = local_110;
  param_2[0x22] = local_e4;
  param_2[0x16] = local_100;
  param_2[0x18] = local_f8;
  param_2[0x19] = local_f4;
  param_2[0x1b] = local_ec;
  param_2[0x1c] = local_e8;
  param_2[0x11] = local_114;
  param_2[0x14] = local_108;
  param_2[0x26] = local_d4;
  param_2[0x2c] = local_bc;
  param_2[0x2d] = local_b8;
  param_2[0x27] = local_d0;
  param_2[0x28] = local_cc;
  param_2[0x29] = local_c8;
  param_2[0x2a] = local_c4;
  param_2[0x2b] = local_c0;
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

