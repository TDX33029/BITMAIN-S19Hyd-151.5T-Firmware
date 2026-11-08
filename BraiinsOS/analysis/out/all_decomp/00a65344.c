// FUN_00a65344 @ 00a65344 size=1284 calls_out=14 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00a65778) */

void FUN_00a65344(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  int local_124;
  int local_114;
  int local_104;
  int local_fc;
  int local_e8;
  uint local_e0;
  int local_dc;
  uint local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar3 = (int *)thunk_FUN_016d4a50(0x3c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x3c);
  }
  iVar9 = *param_2;
  iVar5 = 1;
  uVar11 = *(undefined4 *)(iVar9 + 0xa4);
  iVar14 = *(int *)(iVar9 + 0xa8);
  iVar6 = 1;
  local_fc = 8;
  if (iVar14 != 0) {
    iVar6 = thunk_FUN_016d4a50(iVar14);
    iVar18 = iVar14;
    if (iVar6 == 0) goto LAB_00a65840;
  }
  FUN_016dd1aa(iVar6,uVar11,iVar14);
  uVar11 = *(undefined4 *)(iVar9 + 0xb0);
  iVar18 = *(int *)(iVar9 + 0xb4);
  local_114 = CONCAT31((int3)((uint)local_114 >> 8),1);
  if ((iVar18 != 0) && (iVar5 = thunk_FUN_016d4a50(iVar18), iVar5 == 0)) {
LAB_00a65840:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar18);
  }
  puVar7 = (uint *)(iVar9 + 8);
  FUN_016dd1aa(iVar5,uVar11,iVar18);
  local_104 = CONCAT31((int3)((uint)local_104 >> 8),1);
  local_e8 = CONCAT31(local_e8._1_3_,*(undefined1 *)(iVar9 + 0xd0));
  uVar4 = *(uint *)(iVar9 + 8);
  if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
    if (*puVar7 != uVar4) {
      ClearExclusiveLocal();
      goto LAB_00a6548c;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar7);
    if (!bVar1) goto LAB_00a6548c;
    *puVar7 = uVar4 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00a6548c:
    FUN_0127d66c(puVar7);
  }
  FUN_0128236c(puVar7);
  FUN_0128236c((uint)puVar7 | 1);
  uVar4 = *(uint *)(iVar9 + 0x1c);
  if (0x1999999 < uVar4) {
    uVar11 = 0;
    puVar12 = param_1;
LAB_00a654c4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar11,puVar12);
  }
  puVar12 = (undefined4 *)(uVar4 * 0x50);
  if (puVar12 == (undefined4 *)0x0) {
    local_124 = 8;
    local_e0 = 0;
  }
  else {
    local_124 = thunk_FUN_016d4a50(puVar12);
    if (local_124 == 0) {
      uVar11 = 8;
      goto LAB_00a654c4;
    }
    local_e0 = uVar4;
  }
  local_d8 = 0;
  uVar10 = 0;
  local_dc = local_124;
  if (uVar4 != 0) {
    puVar15 = *(uint **)(iVar9 + 0x10);
    puVar17 = puVar15 + 1;
    uVar8 = ~*puVar15 & 0x80808080;
    uVar10 = uVar4;
    do {
      uVar2 = local_d8;
      puVar16 = puVar17;
      if (uVar8 == 0) {
        do {
          puVar17 = puVar16 + 1;
          uVar8 = *puVar16;
          puVar15 = puVar15 + -0x10;
          puVar16 = puVar17;
        } while ((uVar8 & 0x80808080) == 0x80808080);
        uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
      }
      iVar9 = *(int *)((int)puVar15 +
                      (LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                               (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) & 0x38U) * -2 + -8);
      local_7c = 0;
      local_80 = 0;
      local_64 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = local_4c & 0xffffff00;
      local_50 = 0;
      local_54 = local_54 & 0xffffff00;
      local_58 = 0;
      local_6c = 4;
      local_70 = 0;
      local_34 = 0;
      local_38 = 0;
      FUN_00a5f938(&local_d0,*(undefined4 *)(iVar9 + 0x54),*(undefined4 *)(iVar9 + 0x58));
      local_64 = local_c8;
      local_30 = local_d0;
      uStack_2c = local_cc;
      uStack_28 = local_c8;
      local_70 = local_d0;
      local_6c = local_cc;
      local_c8 = *(undefined4 *)(iVar9 + 8);
      uStack_c4 = *(undefined4 *)(iVar9 + 0xc);
      ClearExclusiveLocal();
      if (*(char *)(iVar9 + 0x5c) == '\0') {
        local_cc = 0;
        local_d0 = 1;
        local_bc = 0;
        local_c0 = 0;
        FUN_01296db8(&local_80,&local_d0);
      }
      else {
        local_cc = 0;
        local_d0 = 1;
        local_bc = 0;
        local_c0 = 0;
        FUN_0129714c(&local_80,&local_d0);
      }
      FUN_016dd1aa(&local_d0,&local_80,0x50);
      if (uVar2 == local_e0) {
        FUN_012bdaf0(&local_e0);
        local_124 = local_dc;
      }
      uVar8 = uVar8 - 1 & uVar8;
      uVar10 = uVar10 - 1;
      FUN_016dd1aa(local_124 + uVar2 * 0x50,&local_d0,0x50);
      local_d8 = uVar2 + 1;
    } while (uVar10 != 0);
    uVar10 = uVar4;
  }
  iVar9 = local_dc;
  uVar4 = local_e0;
  iVar13 = 1;
  while (iVar13 = iVar13 + -1, iVar13 != 0) {
    FUN_007baef4(local_fc);
    local_fc = local_fc + 0x50;
  }
  iStack_74 = local_114;
  local_64 = local_104;
  local_60 = uVar4;
  local_5c = iVar9;
  local_50 = 0;
  local_4c = 0;
  local_48 = local_e8;
  local_80 = iVar14;
  local_7c = iVar6;
  iStack_78 = iVar14;
  local_70 = iVar18;
  local_6c = iVar5;
  local_68 = iVar18;
  local_58 = uVar10;
  local_54 = uVar10;
  FUN_01282570(puVar7);
  FUN_01282570((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar7;
    bVar1 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar1);
  *puVar7 = uVar4 - 0x10;
  if ((uVar4 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar7);
  }
  *piVar3 = local_80;
  piVar3[1] = local_7c;
  piVar3[2] = iStack_78;
  piVar3[3] = iStack_74;
  piVar3[4] = local_70;
  piVar3[5] = local_6c;
  piVar3[6] = local_68;
  piVar3[7] = local_64;
  piVar3[8] = local_60;
  piVar3[9] = local_5c;
  piVar3[10] = local_58;
  piVar3[0xb] = local_54;
  piVar3[0xc] = local_50;
  piVar3[0xd] = local_4c;
  piVar3[0xe] = local_48;
  *param_1 = 1;
  param_1[1] = piVar3;
  param_1[2] = 1;
  return;
}

