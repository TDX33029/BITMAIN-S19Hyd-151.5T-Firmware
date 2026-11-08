// FUN_00a2c7cc @ 00a2c7cc size=1360 calls_out=23 calls_in=1
// strings: Failed to serialize schema | Failed to serialize schema | BUG: SettingsManager lock poisoned

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a2c7cc(int *param_1,int param_2)

{
  bool bVar1;
  uint **ppuVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint **ppuVar6;
  int iVar7;
  uint *puVar8;
  uint **ppuVar9;
  uint ***pppuVar10;
  int *unaff_r11;
  int local_264;
  uint **local_254;
  undefined1 auStack_250 [64];
  undefined4 local_210;
  undefined1 auStack_208 [20];
  uint **local_1f4;
  int local_1f0;
  uint **local_1d4;
  uint **local_1d0;
  uint **local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint **local_180;
  uint **local_17c;
  uint **local_170;
  uint **local_16c;
  uint **local_168;
  uint **ppuStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint **local_120;
  uint **local_11c;
  uint **local_118;
  uint **local_114;
  uint **ppuStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_c8;
  int local_c4;
  uint ***local_c0;
  int *piStack_bc;
  uint *local_b8;
  uint **local_b4;
  uint **local_b0;
  uint **local_ac;
  uint **local_a8;
  uint **local_a4;
  uint **local_a0;
  char ***local_98;
  uint **local_94;
  uint **local_90;
  uint **local_8c;
  uint **local_88;
  uint **local_84;
  uint **local_80;
  uint *local_78;
  uint *puStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *local_64;
  uint *puStack_60;
  uint *puStack_5c;
  uint *puStack_58;
  uint *puStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e18c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e18c);
  }
  piVar4 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_250,param_2,0x48);
  FUN_00a2b4fc(local_210);
  iVar5 = *piVar4;
  puVar8 = (uint *)(iVar5 + 8);
  uVar3 = *(uint *)(iVar5 + 8);
  if (uVar3 < 0x3ffffffe) {
    if (*puVar8 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_00a2c83c;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar8);
    if (!bVar1) goto LAB_00a2c83c;
    *puVar8 = uVar3 + 1;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00a2c83c:
    FUN_0197a5c8(puVar8);
  }
  if (*(char *)(iVar5 + 0x10) != '\0') {
    local_120 = (uint **)(iVar5 + 0x14);
    local_11c = (uint **)puVar8;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: SettingsManager lock poisoned",0x22,&local_120,&DAT_01c0e40c,&DAT_01c0e17c);
  }
  FUN_00b0b898(auStack_208,*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c));
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar8;
    bVar1 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar1);
  *puVar8 = uVar3 - 1;
  if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar8);
  }
  local_8c = &local_b8;
  local_94 = local_1f4 + local_1f0 * 0x36;
  local_b8 = (uint *)0x0;
  local_98 = (char ***)local_1f4;
  local_90 = (uint **)0x0;
  pppuVar10 = (uint ***)&local_98;
  FUN_00b14c88(&local_78,pppuVar10);
  if (local_78 == (uint *)0x80000000) {
    local_a0 = (uint **)0x0;
    local_a4 = (uint **)&DAT_00000008;
    local_a8 = (uint **)0x0;
LAB_00a2c9f8:
    local_ac = (uint **)0x0;
    local_b4 = (uint **)0x0;
    FUN_01488188(&local_a8);
  }
  else {
    ppuVar6 = (uint **)thunk_FUN_01be5118(0xa0);
    if (ppuVar6 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0xa0);
    }
    unaff_r11 = &local_50;
    *ppuVar6 = local_78;
    ppuVar6[1] = puStack_74;
    ppuVar6[2] = puStack_70;
    ppuVar6[3] = puStack_6c;
    ppuVar6[4] = puStack_68;
    ppuVar6[5] = local_64;
    ppuVar6[6] = puStack_60;
    ppuVar6[7] = puStack_5c;
    ppuVar6[8] = puStack_58;
    ppuVar6[9] = puStack_54;
    local_88 = (uint **)0x4;
    local_80 = (uint **)0x1;
    pppuVar10 = (uint ***)&DAT_00000028;
    local_120 = (uint **)local_98;
    local_11c = local_94;
    local_118 = local_90;
    local_114 = local_8c;
    local_84 = ppuVar6;
    while (ppuVar2 = local_80, FUN_00b14c88(unaff_r11,&local_120), ppuVar9 = local_84,
          local_50 != -0x80000000) {
      if (ppuVar2 == local_88) {
        FUN_0132b898(&local_88,ppuVar2,1,8,0x28);
        ppuVar6 = local_84;
      }
      piVar4 = (int *)((int)ppuVar6 + (int)pppuVar10);
      local_80 = (uint **)((int)ppuVar2 + 1);
      pppuVar10 = pppuVar10 + 10;
      *piVar4 = local_50;
      piVar4[1] = iStack_4c;
      piVar4[2] = iStack_48;
      piVar4[3] = iStack_44;
      piVar4[4] = iStack_40;
      piVar4[5] = local_3c;
      piVar4[6] = iStack_38;
      piVar4[7] = iStack_34;
      piVar4[8] = iStack_30;
      piVar4[9] = iStack_2c;
    }
    local_a8 = local_88;
    local_a4 = local_84;
    local_a0 = local_80;
    if (local_80 == (uint **)0x0) goto LAB_00a2c9f8;
    if (local_80 != (uint **)0x1) {
      if (local_80 < (uint **)0x15) {
        iVar7 = 0x28;
        iVar5 = (int)local_80 * 0x28;
        do {
          FUN_0093fd04(ppuVar9,(undefined1 *)((int)ppuVar9 + iVar7));
          iVar7 = iVar7 + 0x28;
        } while (iVar5 != iVar7);
      }
      else {
        FUN_00a52150(local_84);
      }
    }
    FUN_01494038(&local_b4,&local_a8);
  }
  puVar8 = local_b8;
  if (local_b8 == (uint *)0x0) {
    local_17c = local_ac;
    local_180 = local_b0;
    local_1d4 = local_b4;
  }
  else {
    FUN_0196afa8(&local_b4);
    local_b0 = (uint **)&DAT_0000001a;
    local_b4 = (uint **)0x3e61c4;
    local_8c = (uint **)FUN_00667a08;
    local_94 = (uint **)&DAT_0132b6a0;
    local_b8 = puVar8;
    local_98 = (char ***)&local_b4;
    local_90 = &local_b8;
    FUN_00664898(&local_88,&DAT_00587911,&local_98);
    local_98 = (char ***)local_88;
    local_94 = local_84;
    local_90 = local_80;
    FUN_01a70fd4(&local_120,0xd,&local_98);
    (**(code **)*local_b8)();
    ppuVar2 = local_118;
    ppuVar9 = local_11c;
    ppuVar6 = local_120;
    local_180 = local_114;
    local_17c = ppuStack_110;
    local_254 = local_118;
    FUN_01bed4e2(&local_1c8,&uStack_10c,0x44);
    local_16c = local_17c;
    local_170 = local_180;
    if (ppuVar6 != (uint **)0x3 || ppuVar9 != (uint **)0x0) {
      local_264 = local_c4;
      FUN_01bed4e2(&local_168,&local_1c8,0x44);
      FUN_01270b08(auStack_208);
      FUN_00f9604c(auStack_250);
      iVar5 = local_c8;
      pppuVar10 = local_c0;
      unaff_r11 = piStack_bc;
      goto LAB_00a2cc1c;
    }
    local_1d4 = ppuVar2;
  }
  local_1cc = local_17c;
  local_1d0 = local_180;
  FUN_00ab523c(&local_120,&local_1d4);
  piVar4 = (int *)((uint)&local_1c8 | 4);
  *piVar4 = (int)local_120;
  piVar4[1] = (int)local_11c;
  piVar4[2] = (int)local_118;
  local_1c8 = 1;
  FUN_0160aaa4(&local_120,0);
  local_134 = local_1c8;
  uStack_130 = uStack_1c4;
  uStack_12c = uStack_1c0;
  uStack_128 = uStack_1bc;
  local_254 = local_120;
  local_170 = local_11c;
  local_16c = local_118;
  local_168 = local_114;
  ppuStack_164 = ppuStack_110;
  uStack_160 = uStack_10c;
  uStack_15c = uStack_108;
  local_158 = local_104;
  uStack_154 = uStack_100;
  uStack_150 = uStack_fc;
  uStack_14c = uStack_f8;
  local_148 = local_f4;
  uStack_144 = uStack_f0;
  uStack_140 = uStack_ec;
  uStack_13c = uStack_e8;
  uStack_138 = uStack_e4;
  FUN_0196afa8(&local_1d4);
  FUN_01270b08(auStack_208);
  FUN_00f9604c(auStack_250);
  ppuVar6 = (uint **)0x3;
  ppuVar9 = (uint **)0x0;
  iVar5 = 0;
LAB_00a2cc1c:
  param_1[3] = (int)local_170;
  param_1[4] = (int)local_16c;
  param_1[2] = (int)local_254;
  *param_1 = (int)ppuVar6;
  param_1[1] = (int)ppuVar9;
  FUN_01bed4e2(param_1 + 5,&local_168,0x44);
  param_1[0x16] = iVar5;
  param_1[0x17] = local_264;
  param_1[0x18] = (int)pppuVar10;
  param_1[0x19] = (int)unaff_r11;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

