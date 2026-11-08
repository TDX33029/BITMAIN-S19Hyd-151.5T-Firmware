// FUN_006ff2fc @ 006ff2fc size=528 calls_out=10 calls_in=2
// strings: 

void FUN_006ff2fc(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int *local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined1 auStack_70 [76];
  
  uVar2 = *param_2;
  iVar4 = param_2[4];
  uVar1 = FUN_006fb3b4(uVar2,iVar4);
  FUN_006fb414(&local_198,uVar2,param_2[1],param_2[2],param_2[3],iVar4 + 1,uVar1);
  local_178 = 9;
  local_158 = local_198;
  uStack_154 = uStack_194;
  uStack_150 = uStack_190;
  local_14c = uStack_18c;
  local_148 = local_188;
  uStack_144 = uStack_184;
  uStack_140 = uStack_180;
  local_138 = &local_178;
  local_17c = param_3;
  uStack_13c = param_3;
  FUN_006f6ecc(auStack_128,&local_158);
  if (local_100 == &DAT_80000008) {
    FUN_006f6e98(local_158,local_14c);
    iVar4 = 8;
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    FUN_01bed4e2(auStack_70,auStack_128,0x48);
    iVar4 = FUN_01298504(0x120,8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0x120);
    }
    FUN_01bed4e2(iVar4,auStack_128,0x48);
    local_12c = 1;
    local_134 = 4;
    local_e0 = local_158;
    uStack_dc = uStack_154;
    uStack_d8 = uStack_150;
    local_d4 = local_14c;
    iVar5 = 0x48;
    local_d0 = local_148;
    uStack_cc = uStack_144;
    uStack_c8 = uStack_140;
    uStack_c4 = uStack_13c;
    piStack_c0 = local_138;
    local_130 = iVar4;
    while (iVar3 = local_12c, FUN_006f6ecc(auStack_b8,&local_e0), local_90 != &DAT_80000008) {
      FUN_01bed4e2(auStack_70,auStack_b8,0x48);
      if (iVar3 == local_134) {
        FUN_006520b4(&local_134,iVar3,1,8,0x48);
        iVar4 = local_130;
      }
      FUN_01bed4e2(iVar4 + iVar5,auStack_b8,0x48);
      local_12c = iVar3 + 1;
      iVar5 = iVar5 + 0x48;
    }
    FUN_006f6e98(local_e0,local_d4);
    iVar5 = local_134;
  }
  if (local_178 == 9) {
    param_1[2] = iVar4;
    *param_1 = 9;
    param_1[1] = iVar5;
    param_1[3] = iVar3;
  }
  else {
    *param_1 = local_178;
    param_1[1] = iStack_174;
    param_1[2] = iStack_170;
    param_1[3] = iStack_16c;
    param_1[4] = local_168;
    param_1[5] = iStack_164;
    param_1[6] = iStack_160;
    param_1[7] = iStack_15c;
    FUN_006f6178(iVar4,iVar3);
    FUN_0134aee0(iVar5,iVar4,8,0x48);
  }
  return;
}

