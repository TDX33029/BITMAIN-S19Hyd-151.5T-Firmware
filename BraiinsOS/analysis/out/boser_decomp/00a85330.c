// FUN_00a85330 @ 00a85330 size=736 calls_out=8 calls_in=1
// strings: 

void FUN_00a85330(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 local_238;
  int local_234;
  undefined1 local_230;
  int local_22c;
  int local_228;
  uint local_218;
  int local_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined2 local_1fe;
  undefined1 local_1fc;
  undefined1 auStack_1fb [31];
  undefined1 local_1dc;
  undefined1 auStack_1db [51];
  undefined1 auStack_1a8 [24];
  int local_190;
  uint *local_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int local_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int local_134;
  undefined1 local_130;
  undefined1 local_12f;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int local_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int local_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar3 = *param_2;
  if (iVar3 == 1 && param_2[1] == 0) {
    FUN_00a86e84(param_1,param_2 + 2,param_3);
    return;
  }
  if (iVar3 == 0) {
    local_218 = param_2[2];
    *param_2 = 2;
    param_2[1] = 0;
    if (local_218 < 2) {
      FUN_01bed4e2((uint)&local_218 | 4,param_2 + 3,0xec);
      FUN_00a7d68c(&local_40,&local_134,auStack_1a8,local_130);
      uVar5 = local_218;
      if ((char)local_40 == '\x03') {
        FUN_00a86418(&local_218);
        uVar5 = 5;
        iVar3 = 0;
        puVar6 = &local_218;
        uVar4 = 2;
        uVar1 = 0;
        uVar2 = 2;
      }
      else {
        local_f8 = local_40;
        iStack_f4 = iStack_3c;
        iStack_f0 = iStack_38;
        local_ec = local_34;
        iStack_e8 = iStack_30;
        iStack_e4 = iStack_2c;
        iStack_e0 = iStack_28;
        local_228 = local_138;
        local_128 = local_164;
        iStack_124 = iStack_160;
        iStack_120 = iStack_15c;
        iStack_11c = iStack_158;
        iStack_118 = iStack_154;
        local_114 = local_150;
        iStack_110 = iStack_14c;
        iStack_10c = iStack_148;
        iStack_108 = iStack_144;
        iStack_104 = iStack_140;
        iStack_100 = iStack_13c;
        local_22c = local_134;
        local_58 = local_210;
        iStack_54 = iStack_20c;
        iStack_50 = iStack_208;
        iStack_4c = iStack_204;
        local_48 = local_200;
        FUN_01bed4e2(auStack_78,auStack_1fb,0x1f);
        FUN_01bed4e2(auStack_b0,auStack_1db,0x33);
        local_234 = local_190;
        local_d8 = local_188;
        iStack_d4 = iStack_184;
        iStack_d0 = iStack_180;
        iStack_cc = iStack_17c;
        local_c8 = local_178;
        iStack_c4 = iStack_174;
        iStack_c0 = iStack_170;
        iStack_bc = iStack_16c;
        iStack_b8 = iStack_168;
        FUN_0178e1c4(auStack_1a8);
        iVar3 = local_214;
        puVar6 = local_18c;
        uVar4 = local_1ff;
        local_230 = local_12f;
        uVar1 = local_1fc;
        local_238 = local_1fe;
        uVar2 = local_1dc;
      }
      FUN_00a857d0(param_2);
      *param_2 = 1;
      param_2[1] = 0;
      param_2[2] = uVar5;
      param_2[3] = iVar3;
      param_2[4] = local_58;
      param_2[5] = iStack_54;
      param_2[6] = iStack_50;
      param_2[7] = iStack_4c;
      *(undefined1 *)(param_2 + 8) = local_48;
      *(undefined1 *)(param_2 + 9) = uVar1;
      *(undefined2 *)((int)param_2 + 0x22) = local_238;
      *(undefined1 *)((int)param_2 + 0x21) = uVar4;
      FUN_01bed4e2((int)param_2 + 0x25,auStack_78,0x1f);
      *(undefined1 *)(param_2 + 0x11) = uVar2;
      FUN_01bed4e2((int)param_2 + 0x45,auStack_b0,0x33);
      param_2[0x1e] = local_234;
      param_2[0x1f] = (int)puVar6;
      param_2[0x20] = local_d8;
      param_2[0x21] = iStack_d4;
      param_2[0x22] = iStack_d0;
      param_2[0x23] = iStack_cc;
      param_2[0x24] = local_c8;
      param_2[0x25] = iStack_c4;
      param_2[0x26] = iStack_c0;
      param_2[0x27] = iStack_bc;
      param_2[0x28] = iStack_b8;
      param_2[0x29] = local_f8;
      param_2[0x2a] = iStack_f4;
      param_2[0x2b] = iStack_f0;
      param_2[0x2c] = local_ec;
      param_2[0x2d] = iStack_e8;
      param_2[0x2e] = iStack_e4;
      param_2[0x2f] = iStack_e0;
      *(undefined1 *)(param_2 + 0x31) = local_230;
      param_2[0x30] = local_22c;
      param_2[0x32] = local_128;
      param_2[0x33] = iStack_124;
      param_2[0x34] = iStack_120;
      param_2[0x35] = iStack_11c;
      param_2[0x36] = iStack_118;
      param_2[0x37] = local_114;
      param_2[0x38] = iStack_110;
      param_2[0x39] = iStack_10c;
      param_2[0x3a] = iStack_108;
      param_2[0x3b] = iStack_104;
      param_2[0x3c] = iStack_100;
      param_2[0x3d] = local_228;
      FUN_00a86e84(param_1,param_2 + 2,param_3);
      return;
    }
  }
  else {
    if (iVar3 == 1) {
      FUN_009d6a28(param_2 + 2);
    }
    *param_2 = 2;
    param_2[1] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_0050c6f8,0x75,&DAT_01d1dfdc);
}

