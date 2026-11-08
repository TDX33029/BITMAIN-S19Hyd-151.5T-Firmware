// FUN_016a0700 @ 016a0700 size=844 calls_out=10 calls_in=1
// strings: 

void FUN_016a0700(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  uint local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  uint local_150;
  int iStack_14c;
  undefined4 *local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  
  local_188 = 0;
  local_18c = 4;
  local_190 = 0;
  local_17c = 0;
  local_180 = 4;
  local_184 = 0;
  FUN_016a8b64(&local_158,&local_190);
  iVar1 = iStack_14c;
  local_164 = local_154;
  local_160 = local_150;
  local_168 = local_158;
  local_16c = local_13c;
  local_170 = local_140;
  local_15c = iStack_14c;
  local_174 = local_144;
  local_178 = local_148;
  iVar2 = thunk_FUN_016de0ee();
  puVar10 = (uint *)(iVar2 + 0x2c0);
  if (*(char *)(iVar2 + 0x2d0) == '\0') {
    FUN_015f62e4(&local_50);
    *puVar10 = local_50;
    *(undefined4 *)(iVar2 + 0x2c4) = uStack_4c;
    *(undefined4 *)(iVar2 + 0x2c8) = uStack_48;
    *(uint *)(iVar2 + 0x2cc) = uStack_44;
    *(undefined1 *)(iVar2 + 0x2d0) = 1;
  }
  local_138 = *puVar10;
  iStack_134 = *(int *)(iVar2 + 0x2c4);
  uVar8 = *(undefined4 *)(iVar2 + 0x2c8);
  uVar5 = *(undefined4 *)(iVar2 + 0x2cc);
  iVar9 = 0;
  uVar6 = local_138 + 1;
  iVar4 = iStack_134 + (uint)(0xfffffffe < local_138);
  local_140 = 0;
  local_144 = 0;
  local_148 = &DAT_005674cc;
  local_13c = 0;
  *puVar10 = uVar6;
  *(int *)(iVar2 + 0x2c4) = iVar4;
  *puVar10 = local_138 + 2;
  *(uint *)(iVar2 + 0x2c4) = iStack_134 + (uint)(0xfffffffd < local_138);
  uStack_40 = 0;
  uStack_3c = (uint)uStack_3c._3_1_ << 0x18;
  local_150 = local_150 & 0xffffff00;
  local_154 = 0;
  local_158 = 0;
  uStack_4c = CONCAT13(0xcc,(undefined3)uStack_4c);
  uStack_48 = 0x5674;
  uStack_44 = 0;
  uStack_130 = uVar8;
  local_12c = uVar5;
  FUN_016dd606(param_1 + 0x20,0,0x7c);
  *(bool *)(param_1 + 0x40) = iVar1 != 0;
  uVar7 = param_2[0xd];
  uVar3 = (uint)(byte)uVar7;
  param_1[7] = local_15c;
  *param_1 = local_178;
  param_1[1] = local_174;
  param_1[2] = local_170;
  param_1[3] = local_16c;
  param_1[4] = local_168;
  param_1[5] = local_164;
  param_1[6] = local_160;
  param_1[8] = local_158;
  param_1[9] = local_154;
  param_1[10] = local_150;
  param_1[0xb] = iStack_14c;
  param_1[0xc] = local_148;
  param_1[0xd] = local_144;
  param_1[0xe] = local_140;
  param_1[0xf] = local_13c;
  param_1[0x10] = local_138;
  param_1[0x11] = iStack_134;
  param_1[0x12] = uStack_130;
  param_1[0x13] = local_12c;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_016dd1aa((int)param_1 + 0x59,&local_50,0x17);
  param_1[0x1c] = uVar6;
  param_1[0x1d] = iVar4;
  param_1[0x1e] = uVar8;
  param_1[0x1f] = uVar5;
  *(byte *)((int)param_1 + 0x101) = (byte)uVar7;
  if (iVar1 == 0) {
    uVar3 = param_1[3];
  }
  param_1[0x3f] = 0;
  if ((iVar1 == 0 && uVar3 == 0) && (uVar7 = *param_2, uVar7 != 6)) {
    FUN_016dd1aa(&local_158,param_1,0x108);
    if (param_2[4] == 0x80000000) {
      uVar6 = 0x80000000;
    }
    else {
      uVar6 = param_2[6];
      uVar3 = param_2[5];
      if (uVar6 == 0) {
        iVar9 = 1;
      }
      else {
        iVar9 = thunk_FUN_016d4a50(uVar6);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar6);
        }
      }
      FUN_016dd1aa(iVar9,uVar3,uVar6);
    }
    FUN_0169cca4(&local_168,param_2[2],param_2[3]);
    if (param_2[7] == 0x80000000) {
      uVar11 = 0x80000000;
    }
    else {
      uVar11 = param_2[9];
      uVar3 = param_2[8];
      if (uVar11 == 0) {
        param_2 = (uint *)&DAT_00000001;
      }
      else {
        param_2 = (uint *)thunk_FUN_016d4a50(uVar11);
        if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar11);
        }
      }
      FUN_016dd1aa(param_2,uVar3,uVar11);
    }
    uStack_4c = local_168;
    uStack_48 = local_164;
    uStack_44 = local_160;
    local_50 = uVar7;
    uStack_40 = uVar6;
    uStack_3c = iVar9;
    local_38 = uVar6;
    local_34 = uVar11;
    local_30 = param_2;
    local_2c = uVar11;
    FUN_016aa860(param_1,&local_158,&local_50);
  }
  FUN_0169ca60(4,0);
  return;
}

