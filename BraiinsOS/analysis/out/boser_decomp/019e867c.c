// FUN_019e867c @ 019e867c size=1292 calls_out=15 calls_in=2
// strings: background task failed

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019e867c(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int *unaff_r8;
  int *unaff_r10;
  ulonglong uVar19;
  undefined4 local_178;
  int local_148;
  undefined4 uStack_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  int *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int *piStack_128;
  int *piStack_124;
  int local_120;
  undefined4 local_11c;
  uint uStack_118;
  uint uStack_114;
  int *local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  int *local_100;
  undefined4 local_fc;
  undefined **local_f8;
  int *local_f0;
  undefined4 local_ec;
  uint *local_e8;
  undefined4 local_e4;
  undefined4 local_d8;
  int *local_d4;
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
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint *local_98;
  undefined4 local_94;
  int *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  bVar2 = *(byte *)(param_2 + 0x30);
  *(undefined1 *)(param_2 + 0x30) = 0x2a;
  if (bVar2 != 0x2a) {
    *param_1 = (uint)bVar2 << 8 | 1;
    param_1[1] = 0;
    return;
  }
  piVar12 = (int *)(param_2 + 0x18);
  local_148 = *piVar12;
  if (local_148 == -0x7fffffff) {
    puVar5 = (uint *)((uint)&local_80 | 4);
    puVar6 = (uint *)((uint)&local_100 | 4);
    do {
      uVar13 = *(undefined4 *)(param_2 + 0x1c);
      FUN_019edf98(&local_100,uVar13,param_3);
      unaff_r10 = local_100;
      if (local_100 == (int *)0x4) {
        FUN_019ecf50(param_1,local_f0,local_ec);
        return;
      }
      if (local_100 == (int *)0x5) {
        *(undefined1 *)param_1 = 5;
        return;
      }
      uVar11 = puVar6[1];
      uVar16 = puVar6[2];
      *puVar5 = *puVar6;
      puVar5[1] = uVar11;
      puVar5[2] = uVar16;
      local_50 = local_f0;
      uStack_4c = local_ec;
      uStack_48 = local_e8;
      uStack_44 = local_e4;
      local_80 = local_100;
      FUN_019e6988(0x80000001,uVar13);
      *piVar12 = (int)local_50;
      *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
      *(undefined4 *)(param_2 + 0x20) = uStack_48;
      *(undefined4 *)(param_2 + 0x24) = uStack_44;
      if (unaff_r10 == (int *)0x3) {
        if ((*puVar5 & 0xff) != 4) {
          uVar11 = puVar5[1];
          *param_1 = *puVar5;
          param_1[1] = uVar11;
          return;
        }
      }
      else {
        FUN_019e6ba4(&local_80);
      }
      local_148 = *piVar12;
      unaff_r8 = piVar12;
    } while (local_148 == -0x7fffffff);
  }
  *(undefined4 *)(param_2 + 0x18) = 0x80000000;
  if (local_148 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d29384);
  }
  puVar15 = (undefined4 *)(param_2 + 0x1c);
  puVar7 = (undefined4 *)((uint)&local_148 | 4);
  uVar13 = *(undefined4 *)(param_2 + 0x20);
  uVar17 = *(undefined4 *)(param_2 + 0x24);
  *puVar7 = *puVar15;
  puVar7[1] = uVar13;
  puVar7[2] = uVar17;
  if (local_140 == local_13c) {
    uVar13 = 3;
  }
  else {
    if (local_140 < local_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_13c,local_140,local_140,&DAT_01d29254);
    }
    unaff_r8 = (int *)-(local_140 - local_13c);
    uVar13 = 2;
    unaff_r10 = (int *)-(uint)(local_140 - local_13c != 0);
    local_140 = 0;
    local_13c = 0;
  }
  if (*(uint *)(param_2 + 0x38) < param_5) {
    param_5 = *(uint *)(param_2 + 0x38);
  }
  FUN_01ac6cbc(&local_148,param_4);
  uVar19 = CONCAT44(local_108._4_4_,(undefined4)local_108);
  piVar9 = *(int **)(param_2 + 0x3c);
  puVar7 = (undefined4 *)((uint)&local_100 | 0x10);
  do {
    iVar8 = *piVar9;
    bVar3 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar3);
  *piVar9 = iVar8 + 1;
  if (iVar8 < 0) goto LAB_019e8938;
  local_12c = 0;
  local_120 = local_148;
  local_11c = uStack_144;
  uStack_118 = local_140;
  uStack_114 = local_13c;
  local_130 = uVar13;
  piStack_128 = unaff_r8;
  piStack_124 = unaff_r10;
  local_110 = piVar9;
  uVar19 = FUN_019ef7f4(&DAT_01d297c0);
  iVar8 = (int)(uVar19 >> 0x20);
  iVar10 = 0x218;
  if ((uVar19 & 1) != 0) {
    iVar10 = 0x148;
  }
  uVar13 = *(undefined4 *)(iVar8 + iVar10);
  do {
    do {
      iVar10 = DAT_01d50474;
      uVar11 = DAT_01d50470;
      uVar16 = DAT_01d50470 + 1;
      iVar18 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar3 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar3);
    bVar3 = DAT_01d50470 == 0;
    bVar4 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar16;
    DAT_01d50474 = iVar18;
  } while (bVar3 && bVar4);
  iVar18 = 0x200;
  if ((uVar19 & 1) != 0) {
    iVar18 = 0x138;
  }
  iVar8 = iVar8 + iVar18;
  local_e8 = *(uint **)(iVar8 + 8);
  if (local_e8 != (uint *)0x0) {
    do {
      uVar16 = *local_e8;
      bVar3 = (bool)hasExclusiveAccess(local_e8);
    } while (!bVar3);
    *local_e8 = uVar16 + 1;
    if ((int)uVar16 < 0) {
LAB_019e8938:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19e8938);
      local_108 = uVar19;
      (*pcVar1)();
    }
    local_178 = *(undefined4 *)(iVar8 + 0xc);
    do {
      uVar16 = *local_e8;
      bVar3 = (bool)hasExclusiveAccess(local_e8);
    } while (!bVar3);
    *local_e8 = uVar16 + 1;
    if (0x7fffffff < uVar16) goto LAB_019e8938;
  }
  puVar14 = (undefined4 *)((uint)&local_50 | 4);
  *puVar14 = local_130;
  puVar14[1] = local_12c;
  puVar14[2] = piStack_128;
  puVar14[3] = piStack_124;
  puVar14[4] = local_120;
  puVar14[5] = local_11c;
  puVar14[6] = uStack_118;
  puVar14[7] = uStack_114;
  puVar14[8] = local_110;
  puVar14[9] = uStack_10c;
  local_80 = local_50;
  uStack_7c = uStack_4c;
  uStack_78 = uStack_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  local_6c = local_3c;
  uStack_68 = uStack_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  uStack_58 = uStack_28;
  local_d8 = 0;
  local_d4 = local_50;
  uStack_d0 = uStack_4c;
  uStack_cc = uStack_48;
  uStack_c8 = uStack_44;
  uStack_c4 = uStack_40;
  local_c0 = local_3c;
  uStack_bc = uStack_38;
  uStack_b8 = uStack_34;
  uStack_b4 = uStack_30;
  uStack_b0 = uStack_2c;
  uStack_ac = uStack_28;
  puVar7[4] = uVar11;
  puVar7[5] = iVar10;
  *puVar7 = 0;
  puVar7[1] = 0;
  local_fc = 0;
  local_f8 = &PTR_FUN_01d29b80;
  local_a0 = 0;
  local_100 = (int *)0xcc;
  local_a4 = 0;
  local_a8 = 0;
  local_50 = (int *)0x0;
  local_e4 = local_178;
  local_94 = local_178;
  local_98 = local_e8;
  local_108 = uVar19;
  iVar8 = FUN_01be5878(&local_50,0x20,0x80);
  piVar9 = local_50;
  if ((iVar8 != 0) || (local_50 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0x80);
  }
  FUN_01bed4e2(local_50,&local_100,0x80);
  FUN_019f02d4(&local_100,uVar13,piVar9,0,uVar19);
  if (((uint)local_100 & 0xff) == 5) {
    FUN_00668d74(&local_108);
    local_134 = piVar9;
    goto LAB_019e8aec;
  }
  if (((uint)local_100 & 6) != 4) {
    FUN_0069263c(local_100,local_fc);
  }
  if (*piVar9 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar9);
    if (!bVar3) goto LAB_019e8a94;
    *piVar9 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_019e8a94:
    (**(code **)(piVar9[2] + 0x10))(piVar9);
  }
  FUN_00668d74(&local_108);
  FUN_019a18a8(&local_138,0x28,"background task failed",0x16);
  if ((char)local_138 == '\x04') {
  }
  else if ((local_138 & 0xff) != 4) {
    *param_1 = local_138;
    param_1[1] = (uint)local_134;
    return;
  }
LAB_019e8aec:
  FUN_019e6988(*piVar12,*puVar15);
  *puVar15 = local_134;
  *piVar12 = -0x7fffffff;
  param_1[1] = param_5;
  *(undefined1 *)param_1 = 4;
  return;
}

