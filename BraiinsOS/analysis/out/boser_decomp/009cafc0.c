// FUN_009cafc0 @ 009cafc0 size=728 calls_out=5 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_009cafc0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *param_2;
  if (uVar1 == 3) {
    FUN_006666fc(&local_30,param_2[2],param_2[3]);
    FUN_006666fc(&local_d0,param_2[5],param_2[6]);
    FUN_006666fc(&local_a8,param_2[8],param_2[9]);
    param_1[1] = local_30;
    param_1[2] = uStack_2c;
    param_1[3] = uStack_28;
    param_1[4] = local_d0;
    param_1[5] = uStack_cc;
    param_1[6] = uStack_c8;
    param_1[7] = local_a8;
    param_1[8] = uStack_a4;
    param_1[9] = uStack_a0;
    *param_1 = 3;
  }
  else {
    FUN_006666fc(&local_100,param_2[0x21],param_2[0x22]);
    FUN_006666fc(&local_f0,param_2[0x24],param_2[0x25]);
    FUN_01960d00(&local_e0,param_2 + 0x29);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((char)param_2[0x12]) {
    case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_d0 = CONCAT31(local_d0._1_3_,6);
    FUN_006666fc(&local_b8,param_2[0x27],param_2[0x28]);
    if (uVar1 == 2) {
      local_88 = 2;
    }
    else {
      FUN_006666fc(&local_40,param_2[0xd],param_2[0xe]);
      if (param_2[0xf] == 0x80000000) {
        local_30 = 0x80000000;
      }
      else {
        FUN_006666fc(&local_30,param_2[0x10],param_2[0x11]);
      }
      bVar2 = (uVar1 & 1) != 0;
      if (bVar2) {
        FUN_009cb450((uint)&local_a8 | 4,param_2 + 1);
      }
      local_a8 = (uint)bVar2;
      if (param_2[4] == 0) {
        local_1b0 = 0;
      }
      else {
        FUN_00ab8cac(&local_1b0);
      }
      local_58 = local_40;
      uStack_54 = uStack_3c;
      uStack_50 = uStack_38;
      uStack_4c = local_30;
      uStack_48 = uStack_2c;
      uStack_44 = uStack_28;
      local_88 = local_a8;
      uStack_84 = uStack_a4;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_78 = local_1b0;
      uStack_74 = uStack_1ac;
      uStack_70 = uStack_1a8;
      uStack_6c = local_1a4;
      local_68 = local_1a0;
      uStack_64 = uStack_19c;
      uStack_60 = local_198;
      uStack_5c = uStack_194;
    }
    if (param_2[0x18] == 0) {
      local_a8 = 0;
    }
    else {
      FUN_00ab8cac(&local_a8,param_2 + 0x18);
    }
    local_130 = local_100;
    uStack_12c = uStack_fc;
    uStack_128 = uStack_f8;
    local_124 = local_f0;
    uStack_120 = uStack_ec;
    uStack_11c = uStack_e8;
    local_10c = local_e0;
    uStack_108 = uStack_dc;
    uStack_104 = uStack_d8;
    local_168 = local_d0;
    uStack_164 = uStack_cc;
    uStack_160 = uStack_c8;
    uStack_15c = uStack_c4;
    uStack_158 = uStack_c0;
    uStack_154 = uStack_bc;
    local_118 = local_b8;
    uStack_114 = uStack_b4;
    uStack_110 = uStack_b0;
    FUN_01bed4e2(&local_1b0,&local_88,0x48);
    local_150 = local_a8;
    uStack_14c = uStack_a4;
    uStack_148 = uStack_a0;
    uStack_144 = uStack_9c;
    local_140 = local_98;
    uStack_13c = uStack_94;
    uStack_138 = uStack_90;
    uStack_134 = uStack_8c;
    FUN_01bed4e2(param_1,&local_1b0,0xb0);
  }
  return;
}

