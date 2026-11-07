// FUN_00d59f78 @ 00d59f78 size=468 calls_out=4 calls_in=0
// strings: 

void FUN_00d59f78(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int local_158;
  int iStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_f0 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_88 [2];
  undefined1 auStack_80 [96];
  
  if (*param_2 != 0) {
    (**(code **)(param_2[1] + 0xc))(local_88);
    if ((local_88[0] & 7) == 3) {
      FUN_011e5e98(&local_e8,auStack_80);
LAB_00d5a030:
      local_150 = local_e8;
      uStack_14c = uStack_e4;
      uStack_148 = uStack_e0;
      uStack_144 = uStack_dc;
      uStack_140 = uStack_d8;
      local_13c = local_d4;
      uStack_138 = uStack_d0;
      uStack_134 = uStack_cc;
      uStack_130 = uStack_c8;
      uStack_12c = uStack_c4;
      local_128 = local_c0;
      uStack_124 = uStack_bc;
      uStack_120 = uStack_b8;
      uStack_11c = uStack_b4;
      uStack_118 = uStack_b0;
      uStack_114 = uStack_ac;
LAB_00d5a058:
      param_1[2] = local_150;
      param_1[3] = uStack_14c;
      param_1[4] = uStack_148;
      param_1[5] = uStack_144;
      param_1[6] = uStack_140;
      param_1[7] = local_13c;
      param_1[8] = uStack_138;
      param_1[9] = uStack_134;
      param_1[10] = uStack_130;
      param_1[0xb] = uStack_12c;
      uVar1 = 3;
      param_1[0xc] = local_128;
      param_1[0xd] = uStack_124;
      param_1[0xe] = uStack_120;
      param_1[0xf] = uStack_11c;
      param_1[0x10] = uStack_118;
      param_1[0x11] = uStack_114;
      goto LAB_00d5a084;
    }
    if (local_88[0] != 4) {
      if (local_88[0] != 5) {
        FUN_01bed4e2(local_f0,local_88,0x68);
        if ((local_f0[0] & 7) == 3) goto LAB_00d5a030;
        if (local_f0[0] == 4) goto LAB_00d5a004;
        if (local_f0[0] != 5) {
          FUN_01bed4e2(local_88,local_f0,0x68);
          uVar1 = FUN_01a65494(local_88);
          FUN_01a7467c(&local_158,uVar1,&DAT_01d2cc7c);
          if (local_158 == 3 && iStack_154 == 0) goto LAB_00d5a058;
          if (local_158 == 4 && iStack_154 == 0) goto LAB_00d5a004;
          if (local_158 != 5 || iStack_154 != 0) {
            FUN_01bed4e2(local_88,&local_158,0x68);
            uVar1 = FUN_01a65494(local_88);
            FUN_01a7467c(param_1,uVar1,&DAT_01d2cc7c);
            return;
          }
        }
      }
      uVar1 = 5;
      goto LAB_00d5a084;
    }
  }
LAB_00d5a004:
  uVar1 = 4;
LAB_00d5a084:
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

