// FUN_006fc544 @ 006fc544 size=628 calls_out=11 calls_in=2
// strings: 

void FUN_006fc544(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 local_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 *local_168;
  int local_160;
  int local_15c;
  int local_158;
  undefined4 local_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 *puStack_120;
  int *local_11c;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 auStack_108 [16];
  int local_f8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  undefined1 auStack_80 [16];
  int local_70;
  
  uVar3 = *param_2;
  iVar5 = param_2[4];
  local_19c = param_4;
  uVar11 = FUN_0070093c(param_3,uVar3,iVar5);
  uVar9 = param_2[1];
  uVar6 = param_2[2];
  uVar10 = param_2[3];
  uVar1 = FUN_006fb3b4(uVar3,iVar5);
  FUN_006fb414(&local_188,uVar3,uVar9,uVar6,uVar10,iVar5 + 1,uVar1);
  local_168 = &local_19c;
  local_160 = 9;
  local_11c = &local_160;
  local_140 = local_188;
  uStack_13c = uStack_184;
  uStack_138 = uStack_180;
  local_134 = uStack_17c;
  local_130 = local_178;
  local_12c = uStack_174;
  uStack_128 = uStack_170;
  local_16c = param_3;
  uStack_124 = param_3;
  puStack_120 = local_168;
  FUN_006f9674(auStack_108,&local_140);
  if (local_f8 == -0x7ffffffe) {
    FUN_006f6e98(local_140,local_134);
    iVar5 = 4;
    iVar4 = 0;
    iVar7 = 0;
  }
  else {
    iVar5 = FUN_01298504(0x170,4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x170);
    }
    FUN_01bed4e2(iVar5,auStack_108,0x5c);
    local_10c = 1;
    local_114 = 4;
    local_a8 = local_140;
    uStack_a4 = uStack_13c;
    uStack_a0 = uStack_138;
    local_9c = local_134;
    uStack_98 = local_130;
    iVar7 = 0x5c;
    local_94 = local_12c;
    uStack_90 = uStack_128;
    uStack_8c = uStack_124;
    puStack_88 = puStack_120;
    piStack_84 = local_11c;
    local_110 = iVar5;
    while (iVar4 = local_10c, FUN_006f9674(auStack_80,&local_a8), local_70 != -0x7ffffffe) {
      if (iVar4 == local_114) {
        FUN_006520b4(&local_114,iVar4,1,4,0x5c);
        iVar5 = local_110;
      }
      FUN_01bed4e2(iVar5 + iVar7,auStack_80,0x5c);
      local_10c = iVar4 + 1;
      iVar7 = iVar7 + 0x5c;
    }
    FUN_006f6e98(local_a8,local_9c);
    iVar7 = local_114;
  }
  iVar8 = local_160;
  if (local_160 == 9) {
    iVar8 = 9;
    param_1[1] = (int)uVar11;
    iVar2 = 8;
    param_1[3] = iVar7;
    param_1[4] = iVar5;
    param_1[5] = iVar4;
    local_154 = (int)((ulonglong)uVar11 >> 0x20);
  }
  else {
    local_198 = local_150;
    iStack_194 = iStack_14c;
    iStack_190 = iStack_148;
    iStack_18c = iStack_144;
    FUN_006f6128(iVar5,iVar4);
    FUN_0134aee0(iVar7,iVar5,4,0x5c);
    param_1[4] = local_198;
    param_1[5] = iStack_194;
    param_1[6] = iStack_190;
    param_1[7] = iStack_18c;
    param_1[1] = local_15c;
    iVar2 = 0xc;
    param_1[2] = local_158;
  }
  *(undefined4 *)((int)param_1 + iVar2) = local_154;
  *param_1 = iVar8;
  return;
}

