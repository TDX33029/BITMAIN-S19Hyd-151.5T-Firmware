// FUN_00a95894 @ 00a95894 size=1184 calls_out=12 calls_in=2
// strings: BUG: Couldn't build generic_gauge with opts

int * FUN_00a95894(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auStack_218 [80];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  undefined1 auStack_1b8 [80];
  undefined4 *local_168;
  int *local_164;
  undefined4 *local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  int *local_154;
  uint local_150;
  uint uStack_14c;
  uint local_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 *local_114;
  undefined4 local_110;
  uint local_10c;
  uint local_108;
  undefined4 *local_100;
  int *local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 *local_f0;
  uint uStack_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 *local_70;
  int *piStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  uVar1 = FUN_00aa4b64(auStack_1b8,param_1,param_2,param_3,param_4);
  uVar12 = thunk_FUN_016de0ee(uVar1,0x2c0);
  puVar5 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_015f62e4(&local_100);
    *puVar5 = (uint)local_100;
    puVar5[1] = (uint)local_fc;
    puVar5[2] = local_f8;
    puVar5[3] = local_f4;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar10 = *puVar5;
  uVar11 = puVar5[1];
  uVar4 = puVar5[2];
  uVar8 = puVar5[3];
  *puVar5 = uVar10 + 1;
  puVar5[1] = uVar11 + (0xfffffffe < uVar10);
  FUN_016dd1aa(&local_100,auStack_1b8,0x60);
  FUN_012b56f4(auStack_1b8);
  local_100 = &DAT_005674cc;
  local_fc = (int *)0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = (undefined4 *)uVar10;
  uStack_ec = uVar11;
  local_e8 = uVar4;
  local_e4 = uVar8;
  FUN_016dd1aa(auStack_218,&local_100,0x60);
  if (param_6 == (undefined4 *)0x0) {
    piVar2 = (int *)&DAT_00000004;
    param_6 = (undefined4 *)0x0;
    local_fc = (int *)&DAT_00000004;
    local_100 = (undefined4 *)0x0;
  }
  else {
    piVar2 = (int *)thunk_FUN_016d4a50((int)param_6 * 0xc);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)param_6 * 0xc);
    }
    local_100 = param_6;
    iVar6 = param_5[1];
    uVar1 = *param_5;
    local_fc = piVar2;
    if (iVar6 < 0) {
      uVar1 = 0;
LAB_00a959b8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar1,iVar6);
    }
    if (iVar6 == 0) {
      iVar3 = 1;
      iVar9 = 0;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar6);
      if (iVar3 == 0) {
        uVar1 = 1;
        goto LAB_00a959b8;
      }
      iVar9 = iVar6;
    }
    FUN_016dd1aa(iVar3,uVar1,iVar6);
    *piVar2 = iVar9;
    piVar2[1] = iVar3;
    piVar2[2] = iVar6;
    if (param_6 != (undefined4 *)0x1) {
      iVar6 = param_5[3];
      if (iVar6 < 0) {
        uVar1 = 0;
        iVar6 = iVar3;
        goto LAB_00a959b8;
      }
      uVar1 = param_5[2];
      if (iVar6 == 0) {
        iVar3 = 1;
        iVar9 = 0;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(iVar6);
        iVar9 = iVar6;
        if (iVar3 == 0) {
          uVar1 = 1;
          goto LAB_00a959b8;
        }
      }
      FUN_016dd1aa(iVar3,uVar1,iVar6);
      piVar2[3] = iVar9;
      piVar2[4] = iVar3;
      piVar2[5] = iVar6;
    }
  }
  puVar7 = (undefined4 *)(local_1c4 + 4);
  for (iVar6 = local_1c0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (puVar7[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar7);
    }
    puVar7 = puVar7 + 3;
  }
  if (local_1c8 != 0) {
    thunk_FUN_016d3fb4(local_1c4);
  }
  FUN_016dd1aa(auStack_1b8,auStack_218,0x50);
  local_15c = local_1bc;
  local_168 = param_6;
  local_164 = piVar2;
  local_160 = param_6;
  FUN_012cd8c4(&local_100,auStack_1b8);
  uVar8 = local_f4;
  uVar4 = local_f8;
  piVar2 = local_fc;
  puVar7 = local_100;
  if (local_cc == -0x80000000) {
    FUN_0074c178(auStack_1b8);
    if (puVar7 != (undefined4 *)0x5) {
      local_100 = puVar7;
      local_fc = piVar2;
      local_f8 = uVar4;
      local_f4 = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: Couldn\'t build generic_gauge with opts",0x2b,&local_100,&DAT_0186dee4,
                   &DAT_0186de2c);
    }
    return piVar2;
  }
  local_148 = (uint)local_f0;
  local_144 = uStack_ec;
  uStack_140 = local_e8;
  uStack_13c = local_e4;
  local_138 = local_e0;
  uStack_134 = uStack_dc;
  local_130 = uStack_d8;
  uStack_12c = local_d4;
  uStack_128 = uStack_d0;
  local_150 = local_f8;
  uStack_14c = local_f4;
  local_120 = local_c8;
  uStack_11c = uStack_c4;
  local_154 = local_fc;
  local_158 = local_100;
  local_124 = local_cc;
  if ((char)puVar5[4] == '\0') {
    FUN_015f62e4(&local_100);
    *puVar5 = (uint)local_100;
    puVar5[1] = (uint)local_fc;
    puVar5[2] = local_f8;
    puVar5[3] = local_f4;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  uVar4 = *puVar5;
  *puVar5 = uVar4 + 1;
  puVar5[1] = puVar5[1] + (uint)(0xfffffffe < uVar4);
  local_70 = local_158;
  piStack_6c = local_154;
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
  iStack_3c = local_124;
  uStack_38 = local_120;
  uStack_34 = uStack_11c;
  local_114 = &DAT_005674cc;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  FUN_016dd1aa(&uStack_d0,auStack_1b8,0x60);
  local_f8 = 0;
  local_fc = (int *)0x1;
  local_100 = (undefined4 *)0x1;
  local_f4 = local_118;
  local_f0 = local_114;
  uStack_ec = local_110;
  local_e8 = local_10c;
  local_e4 = local_108;
  local_30 = 1;
  piVar2 = (int *)thunk_FUN_016d4a50(0xd8);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0xd8);
  }
  FUN_016dd1aa(piVar2,&local_100,0xd8);
  return piVar2;
}

