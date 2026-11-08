// FUN_017394c0 @ 017394c0 size=524 calls_out=5 calls_in=0
// strings: 

undefined8
FUN_017394c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_14c;
  undefined4 local_148;
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
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [48];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_016dd606(&local_14c,0,0x90,0);
  FUN_016fe45c(auStack_bc,param_4);
  FUN_016fe45c(auStack_8c,param_4 + 0x44);
  FUN_016fe45c(auStack_5c,param_4 + 0x88);
  uVar1 = FUN_01731ac0();
  FUN_0173879c(uVar1,&local_14c,&local_11c,&local_ec,param_3,auStack_bc,auStack_8c,auStack_5c,
               param_5);
  param_2[0xb] = local_120;
  param_2[10] = local_124;
  param_2[9] = local_128;
  param_2[8] = local_12c;
  param_2[7] = local_130;
  param_2[6] = local_134;
  param_2[5] = local_138;
  *param_2 = local_14c;
  param_2[1] = local_148;
  param_2[2] = local_144;
  param_2[3] = local_140;
  param_2[4] = local_13c;
  param_2[0x15] = local_10c;
  param_2[0x25] = local_e0;
  param_2[0x17] = local_104;
  param_2[0x24] = local_e4;
  param_2[0x13] = local_114;
  param_2[0x23] = local_e8;
  param_2[0x1a] = local_f8;
  param_2[0x12] = local_118;
  param_2[0x22] = local_ec;
  param_2[0x16] = local_108;
  param_2[0x18] = local_100;
  param_2[0x19] = local_fc;
  param_2[0x1b] = local_f4;
  param_2[0x1c] = local_f0;
  param_2[0x11] = local_11c;
  param_2[0x14] = local_110;
  param_2[0x26] = local_dc;
  param_2[0x2c] = local_c4;
  param_2[0x2d] = local_c0;
  param_2[0x27] = local_d8;
  param_2[0x28] = local_d4;
  param_2[0x29] = local_d0;
  param_2[0x2a] = local_cc;
  param_2[0x2b] = local_c8;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

