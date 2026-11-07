// FUN_009b5dd0 @ 009b5dd0 size=896 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009b5dd0(uint *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_r5;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 uVar11;
  int local_1c0;
  uint local_1bc;
  undefined1 auStack_1b8 [80];
  uint local_168;
  uint local_164;
  uint local_160;
  undefined4 local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 *local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  if (0xaaaaaaa < param_4) {
    uVar1 = 0;
LAB_009b5df4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,unaff_r5);
  }
  if (param_4 == 0) {
    param_4 = 0;
    local_1bc = 4;
    local_fc = 4;
    local_100 = 0;
  }
  else {
    unaff_r5 = param_4 * 0xc;
    local_1bc = thunk_FUN_016d4a50(unaff_r5);
    if (local_1bc == 0) {
      uVar1 = 4;
      goto LAB_009b5df4;
    }
    piVar9 = (int *)(local_1bc + 8);
    uVar7 = 0;
    local_100 = param_4;
    local_fc = local_1bc;
    do {
      uVar1 = 0;
      puVar3 = (undefined4 *)(param_3 + uVar7 * 8);
      uVar5 = *puVar3;
      iVar4 = puVar3[1];
      if (iVar4 < 0) {
LAB_009b5ebc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar1,unaff_r5);
      }
      if (iVar4 == 0) {
        unaff_r5 = 1;
        local_1c0 = 0;
      }
      else {
        unaff_r5 = thunk_FUN_016d4a50(iVar4);
        if (unaff_r5 == 0) {
          uVar1 = 1;
          unaff_r5 = iVar4;
          goto LAB_009b5ebc;
        }
        local_1c0 = iVar4;
      }
      FUN_016dd1aa(unaff_r5,uVar5,iVar4);
      uVar7 = uVar7 + 1;
      *piVar9 = iVar4;
      piVar9[-1] = unaff_r5;
      piVar9[-2] = local_1c0;
      piVar9 = piVar9 + 3;
    } while (param_4 != uVar7);
  }
  iVar6 = *(int *)(param_2 + 0x50);
  iVar4 = *(int *)(param_2 + 0x54);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  puVar3 = (undefined4 *)(iVar4 + 4);
  for (iVar8 = *(int *)(param_2 + 0x58); iVar8 != 0; iVar8 = iVar8 + -1) {
    if (puVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar3);
    }
    puVar3 = puVar3 + 3;
  }
  if (iVar6 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  FUN_016dd1aa(auStack_1b8,param_2,0x50);
  local_164 = local_1bc;
  local_168 = param_4;
  local_160 = param_4;
  local_15c = uVar1;
  FUN_012cd8c4(&local_100,auStack_1b8);
  uStack_14c = local_f4;
  local_150 = local_f8;
  uVar2 = local_fc;
  uVar7 = local_100;
  if (local_cc == -0x80000000) {
    FUN_009b61cc(auStack_1b8);
    if (uVar7 != 5) {
      *param_1 = uVar7;
      param_1[1] = uVar2;
      param_1[2] = local_f8;
      param_1[3] = local_f4;
      return;
    }
  }
  else {
    local_148 = local_f0;
    local_144 = uStack_ec;
    uStack_140 = uStack_e8;
    uStack_13c = uStack_e4;
    local_138 = local_e0;
    uStack_134 = uStack_dc;
    local_130 = local_d8;
    uStack_12c = local_d4;
    uStack_128 = uStack_d0;
    uVar11 = thunk_FUN_016de0ee();
    local_124 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar4 = (int)uVar11;
    puVar10 = (uint *)(iVar4 + 0x2c0);
    local_120 = local_c8;
    uStack_11c = uStack_c4;
    local_154 = uVar2;
    local_158 = uVar7;
    if (*(char *)(iVar4 + 0x2d0) == '\0') {
      FUN_015f62e4(&local_100);
      *puVar10 = local_100;
      *(uint *)(iVar4 + 0x2c4) = local_fc;
      *(uint *)(iVar4 + 0x2c8) = local_f8;
      *(uint *)(iVar4 + 0x2cc) = local_f4;
      *(undefined1 *)(iVar4 + 0x2d0) = 1;
    }
    uVar7 = *puVar10;
    *puVar10 = uVar7 + 1;
    *(uint *)(iVar4 + 0x2c4) = *(int *)(iVar4 + 0x2c4) + (uint)(0xfffffffe < uVar7);
    local_110 = 0;
    local_10c = 0;
    local_114 = &DAT_005674cc;
    local_108 = 0;
    local_70 = local_158;
    uStack_6c = local_154;
    uStack_68 = local_150;
    uStack_64 = uStack_14c;
    uStack_60 = local_148;
    local_5c = local_144;
    uStack_58 = uStack_140;
    uStack_54 = uStack_13c;
    uStack_50 = local_138;
    uStack_4c = uStack_134;
    local_48 = local_130;
    uStack_44 = uStack_12c;
    uStack_40 = uStack_128;
    uStack_3c = local_124;
    uStack_38 = local_120;
    uStack_34 = uStack_11c;
    FUN_016dd1aa(&uStack_d0,auStack_1b8,0x60);
    local_f8 = 0;
    local_fc = 1;
    local_100 = 1;
    local_f4 = local_118;
    local_f0 = local_114;
    uStack_ec = local_110;
    uStack_e8 = local_10c;
    uStack_e4 = local_108;
    local_30 = 1;
    uVar2 = thunk_FUN_016d4a50(0xd8);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xd8);
    }
    FUN_016dd1aa(uVar2,&local_100,0xd8);
  }
  *param_1 = 5;
  param_1[1] = uVar2;
  return;
}

