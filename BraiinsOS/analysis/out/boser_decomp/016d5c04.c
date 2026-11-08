// FUN_016d5c04 @ 016d5c04 size=1352 calls_out=16 calls_in=1
// strings: 

void FUN_016d5c04(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined8 uVar11;
  int local_22c;
  undefined1 auStack_228 [44];
  int *local_1fc [4];
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined8 local_1b8;
  int local_1b0;
  int iStack_1ac;
  int local_1a8;
  int local_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int local_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  byte local_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined1 auStack_128 [72];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  int *piStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined1 auStack_7c [24];
  undefined4 local_64 [7];
  int local_48;
  int *local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_22c = FUN_016d4a28(param_2);
  if (local_22c != 0x29) {
    FUN_016f4e14(&local_22c,&DAT_0056e70c,&DAT_01d0a138);
LAB_016d6150:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16d6150);
    (*pcVar1)();
  }
  iVar7 = *param_2;
  if (*(int *)(iVar7 + 0x10) != 0) {
    FUN_01306fc8(&DAT_01d0a128);
    goto LAB_016d6150;
  }
  iVar2 = *(int *)(iVar7 + 0x1c);
  *(undefined4 *)(iVar7 + 0x10) = 0xffffffff;
  if (iVar2 == 0) {
LAB_016d5c7c:
    FUN_016d4f3c(&local_1e0,param_2);
    local_c0 = 0x16;
    FUN_016d4540(&local_1b8,param_2[1],param_2[2],&local_1e0,&local_c0);
    *param_1 = (int)local_1b8;
    param_1[1] = (int)local_1b8._4_4_;
    param_1[2] = local_1b0;
    param_1[3] = iStack_1ac;
    param_1[4] = local_1a8;
    param_1[5] = local_1a4;
    param_1[6] = iStack_1a0;
    param_1[7] = iStack_19c;
    param_1[8] = iStack_198;
    param_1[9] = iStack_194;
    param_1[10] = local_190;
    param_1[0xb] = iStack_18c;
    param_1[0xc] = iStack_188;
    param_1[0xd] = iStack_184;
    param_1[0xe] = iStack_180;
    param_1[0xf] = iStack_17c;
LAB_016d5cd0:
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    FUN_016bedfc(param_3);
    return;
  }
  iVar6 = iVar2 + -1;
  piVar4 = (int *)(*(int *)(iVar7 + 0x18) + iVar6 * 0x70);
  iVar8 = *piVar4;
  *(int *)(iVar7 + 0x1c) = iVar6;
  if (iVar8 == -0x80000000) {
    local_1e0 = piVar4[1];
    local_1dc = piVar4[2];
    local_1d8 = piVar4[3];
    iStack_1d4 = piVar4[4];
    local_1d0 = piVar4[5];
    iStack_1cc = piVar4[6];
    iStack_1c8 = piVar4[7];
    iStack_1c4 = piVar4[8];
    iStack_1c0 = piVar4[9];
    if (iVar6 == 0) {
      local_1b8._0_4_ = -0x7fffffff;
    }
    else {
      *(int *)(iVar7 + 0x1c) = iVar2 + -2;
      iVar2 = *(int *)(iVar7 + 0x18) + (iVar2 + -2) * 0x70;
      FUN_01bed4e2(&local_1b8,iVar2,0x70);
      if (-0x7fffffff < (int)local_1b8) {
        local_148 = *(int *)(iVar2 + 4);
        iStack_144 = *(int *)(iVar2 + 8);
        iStack_140 = *(int *)(iVar2 + 0xc);
        iStack_13c = *(int *)(iVar2 + 0x10);
        local_138 = *(int *)(iVar2 + 0x14);
        iStack_134 = *(int *)(iVar2 + 0x18);
        iStack_130 = *(int *)(iVar2 + 0x1c);
        iStack_12c = *(int *)(iVar2 + 0x20);
        FUN_01bed4e2(auStack_128,iVar2 + 0x24,0x48);
        puVar3 = (undefined4 *)((uint)&local_1e0 | 4);
        local_e0 = *puVar3;
        uStack_dc = puVar3[1];
        uStack_d8 = puVar3[2];
        uStack_d4 = puVar3[3];
        local_d0 = puVar3[4];
        uStack_cc = puVar3[5];
        uStack_c8 = puVar3[6];
        uStack_c4 = puVar3[7];
        iVar2 = local_1e0;
        iVar8 = (int)local_1b8;
        bVar10 = local_14c;
        goto LAB_016d5dcc;
      }
    }
    iVar2 = (int)local_1b8;
    FUN_016d4f3c(auStack_7c,param_2);
    local_64[0] = 0x16;
    FUN_016d4540(&local_c0,param_2[1],param_2[2],auStack_7c,local_64);
    *param_1 = local_c0;
    param_1[1] = (int)piStack_bc;
    param_1[2] = iStack_b8;
    param_1[3] = iStack_b4;
    param_1[4] = iStack_b0;
    param_1[5] = local_ac;
    param_1[6] = iStack_a8;
    param_1[7] = iStack_a4;
    param_1[8] = iStack_a0;
    param_1[9] = iStack_9c;
    param_1[10] = local_98;
    param_1[0xb] = iStack_94;
    param_1[0xc] = iStack_90;
    param_1[0xd] = iStack_8c;
    param_1[0xe] = iStack_88;
    param_1[0xf] = iStack_84;
    if (iVar2 == -0x80000000) {
      FUN_016d45e8(&local_1b8);
    }
    FUN_016bedfc(&local_1e0);
    goto LAB_016d5cd0;
  }
  if (iVar8 == -0x7fffffff) goto LAB_016d5c7c;
  bVar10 = *(byte *)(piVar4 + 0x1b);
  local_148 = piVar4[1];
  iStack_144 = piVar4[2];
  iStack_140 = piVar4[3];
  iStack_13c = piVar4[4];
  local_138 = piVar4[5];
  iStack_134 = piVar4[6];
  iStack_130 = piVar4[7];
  iStack_12c = piVar4[8];
  FUN_01bed4e2(auStack_128,piVar4 + 9,0x48);
  iVar2 = -0x80000000;
LAB_016d5dcc:
  piVar4 = (int *)((uint)&local_1e0 | 4);
  *piVar4 = local_148;
  piVar4[1] = iStack_144;
  piVar4[2] = iStack_140;
  piVar4[3] = iStack_13c;
  piVar4[4] = local_138;
  piVar4[5] = iStack_134;
  piVar4[6] = iStack_130;
  piVar4[7] = iStack_12c;
  local_1e0 = iVar8;
  FUN_01bed4e2(auStack_228,auStack_128,0x48);
  puVar3 = (undefined4 *)((uint)&local_c0 | 4);
  *puVar3 = local_e0;
  puVar3[1] = uStack_dc;
  puVar3[2] = uStack_d8;
  puVar3[3] = uStack_d4;
  puVar3[4] = local_d0;
  puVar3[5] = uStack_cc;
  puVar3[6] = uStack_c8;
  puVar3[7] = uStack_c4;
  *(byte *)(iVar7 + 100) = bVar10 & 1;
  uVar5 = *(undefined4 *)(iVar7 + 0x54);
  uVar9 = *(undefined4 *)(iVar7 + 0x58);
  param_3[6] = *(undefined4 *)(iVar7 + 0x50);
  param_3[7] = uVar5;
  param_3[8] = uVar9;
  local_c0 = iVar2;
  FUN_016d4fe8(param_2);
  local_1ec = *(undefined4 *)(iVar7 + 0x50);
  uStack_1e8 = *(undefined4 *)(iVar7 + 0x54);
  uStack_1e4 = *(undefined4 *)(iVar7 + 0x58);
  if (iVar2 == -0x80000000) {
    local_1b8._0_4_ = *param_3;
    local_1b8._4_4_ = (int *)param_3[1];
    local_1b0 = param_3[2];
    iStack_1ac = param_3[3];
    local_1a8 = param_3[4];
    local_1a4 = param_3[5];
    iStack_1a0 = param_3[6];
    iStack_19c = param_3[7];
    iStack_198 = param_3[8];
    uVar11 = FUN_016ec68c(&local_1b8);
    local_1b8 = uVar11;
    piVar4 = (int *)thunk_FUN_01be5118(8);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *(undefined8 *)piVar4 = uVar11;
    FUN_016d7fac(local_1fc);
    goto LAB_016d6068;
  }
  local_48 = local_c0;
  local_44 = piStack_bc;
  local_40 = iStack_b8;
  iStack_3c = iStack_b4;
  local_38 = iStack_b0;
  iStack_34 = local_ac;
  local_30 = param_3[6];
  uStack_2c = param_3[7];
  uStack_28 = param_3[8];
  local_1b8._0_4_ = *param_3;
  local_1b8._4_4_ = (int *)param_3[1];
  local_1b0 = param_3[2];
  iStack_1ac = param_3[3];
  local_1a8 = param_3[4];
  local_1a4 = param_3[5];
  iStack_1a0 = param_3[6];
  iStack_19c = param_3[7];
  iStack_198 = param_3[8];
  uVar11 = FUN_016ec68c(&local_1b8);
  iVar2 = local_40;
  if (local_40 == local_48) {
    local_1b8 = uVar11;
    FUN_015f5ab8(&local_48);
  }
  *(undefined8 *)(local_44 + iVar2 * 2) = uVar11;
  local_40 = iVar2 + 1;
  local_1b8._0_4_ = local_48;
  local_1b8._4_4_ = local_44;
  iStack_1ac = iStack_3c;
  local_1a8 = local_38;
  local_1a4 = iStack_34;
  iStack_1a0 = local_30;
  iStack_19c = uStack_2c;
  iStack_198 = uStack_28;
  local_1b0 = local_40;
  if (local_40 == 0) {
    FUN_016eb8ac(&iStack_3c);
    iVar6 = 0;
    iVar2 = extraout_r1;
LAB_016d6024:
    FUN_016bedfc(&local_1b8);
  }
  else {
    if (local_40 == 1) {
      iVar6 = *local_44;
      iVar2 = local_44[1];
      local_1b0 = 0;
      goto LAB_016d6024;
    }
    FUN_016eb854(&local_48);
    iVar6 = 10;
    iVar2 = extraout_r1_00;
  }
  local_1b8._0_4_ = iVar6;
  local_1b8._4_4_ = (int *)iVar2;
  piVar4 = (int *)thunk_FUN_01be5118(8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *piVar4 = iVar6;
  piVar4[1] = iVar2;
  FUN_016d7fac(local_1fc);
LAB_016d6068:
  local_1fc[0] = piVar4;
  iVar2 = thunk_FUN_01be5118(0x48);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x48);
  }
  FUN_01bed4e2(iVar2,auStack_228,0x48);
  iVar6 = local_1d8;
  local_1b8._0_4_ = 9;
  if (local_1d8 == iVar8) {
    local_1b8._4_4_ = (int *)iVar2;
    FUN_015f5ab8(&local_1e0);
  }
  puVar3 = (undefined4 *)(local_1dc + iVar6 * 8);
  *puVar3 = 9;
  puVar3[1] = iVar2;
  param_1[1] = local_1e0;
  param_1[2] = local_1dc;
  param_1[3] = iVar6 + 1;
  param_1[4] = iStack_1d4;
  param_1[5] = local_1d0;
  param_1[6] = iStack_1cc;
  param_1[7] = iStack_1c8;
  param_1[8] = iStack_1c4;
  param_1[9] = iStack_1c0;
  *param_1 = 0x22;
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  return;
}

