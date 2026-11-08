// FUN_0074fb54 @ 0074fb54 size=1260 calls_out=15 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0074ff70) */

void FUN_0074fb54(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
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
  undefined8 local_c8;
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
  
  piVar4 = (int *)thunk_FUN_016d4a50(0x3c);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x3c);
  }
  iVar11 = *param_2;
  iVar6 = 1;
  uVar12 = *(undefined4 *)(iVar11 + 0xa4);
  iVar15 = *(int *)(iVar11 + 0xa8);
  iVar8 = 1;
  local_fc = 8;
  if (iVar15 != 0) {
    iVar8 = thunk_FUN_016d4a50(iVar15);
    iVar19 = iVar15;
    if (iVar8 == 0) goto LAB_00750038;
  }
  FUN_016dd1aa(iVar8,uVar12,iVar15);
  uVar12 = *(undefined4 *)(iVar11 + 0xb0);
  iVar19 = *(int *)(iVar11 + 0xb4);
  local_114 = CONCAT31((int3)((uint)local_114 >> 8),1);
  if ((iVar19 != 0) && (iVar6 = thunk_FUN_016d4a50(iVar19), iVar6 == 0)) {
LAB_00750038:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar19);
  }
  puVar9 = (uint *)(iVar11 + 8);
  FUN_016dd1aa(iVar6,uVar12,iVar19);
  local_104 = CONCAT31((int3)((uint)local_104 >> 8),1);
  local_e8 = CONCAT31(local_e8._1_3_,*(undefined1 *)(iVar11 + 0xd0));
  uVar5 = *(uint *)(iVar11 + 8);
  if ((uVar5 < 0xfffffff0) && ((uVar5 & 8) == 0)) {
    if (*puVar9 != uVar5) {
      ClearExclusiveLocal();
      goto LAB_0074fc9c;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar2) goto LAB_0074fc9c;
    *puVar9 = uVar5 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_0074fc9c:
    FUN_0127d66c(puVar9);
  }
  FUN_0128236c(puVar9);
  FUN_0128236c((uint)puVar9 | 1);
  uVar5 = *(uint *)(iVar11 + 0x1c);
  if (0x1999999 < uVar5) {
    uVar12 = 0;
    puVar13 = param_1;
LAB_0074fcd4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar12,puVar13);
  }
  puVar13 = (undefined4 *)(uVar5 * 0x50);
  if (puVar13 == (undefined4 *)0x0) {
    local_124 = 8;
    local_e0 = 0;
  }
  else {
    local_124 = thunk_FUN_016d4a50(puVar13);
    if (local_124 == 0) {
      uVar12 = 8;
      goto LAB_0074fcd4;
    }
    local_e0 = uVar5;
  }
  local_d8 = 0;
  uVar10 = 0;
  local_dc = local_124;
  if (uVar5 != 0) {
    puVar16 = *(uint **)(iVar11 + 0x10);
    puVar18 = puVar16 + 1;
    uVar7 = ~*puVar16 & 0x80808080;
    uVar10 = uVar5;
    do {
      uVar3 = local_d8;
      puVar17 = puVar18;
      if (uVar7 == 0) {
        do {
          puVar18 = puVar17 + 1;
          uVar7 = *puVar17;
          puVar16 = puVar16 + -0x10;
          puVar17 = puVar18;
        } while ((uVar7 & 0x80808080) == 0x80808080);
        uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
      }
      iVar11 = *(int *)((int)puVar16 +
                       (LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) & 0x38U) * -2 + -8);
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
      FUN_007b9ac8(&local_d0,*(undefined4 *)(iVar11 + 0x54),*(undefined4 *)(iVar11 + 0x58));
      cVar1 = *(char *)(iVar11 + 0x5c);
      local_64 = (undefined4)local_c8;
      local_30 = local_d0;
      uStack_2c = local_cc;
      uStack_28 = (undefined4)local_c8;
      local_70 = local_d0;
      local_6c = local_cc;
      local_c8 = FUN_01845d5c(*(undefined4 *)(iVar11 + 8),*(undefined4 *)(iVar11 + 0xc));
      ClearExclusiveLocal();
      if (cVar1 == '\0') {
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
      if (uVar3 == local_e0) {
        FUN_012bdaf0(&local_e0);
        local_124 = local_dc;
      }
      uVar7 = uVar7 - 1 & uVar7;
      uVar10 = uVar10 - 1;
      FUN_016dd1aa(local_124 + uVar3 * 0x50,&local_d0,0x50);
      local_d8 = uVar3 + 1;
    } while (uVar10 != 0);
    uVar10 = uVar5;
  }
  iVar11 = local_dc;
  uVar5 = local_e0;
  iVar14 = 1;
  while (iVar14 = iVar14 + -1, iVar14 != 0) {
    FUN_007baef4(local_fc);
    local_fc = local_fc + 0x50;
  }
  iStack_74 = local_114;
  local_64 = local_104;
  local_60 = uVar5;
  local_5c = iVar11;
  local_50 = 0;
  local_4c = 0;
  local_48 = local_e8;
  local_80 = iVar15;
  local_7c = iVar8;
  iStack_78 = iVar15;
  local_70 = iVar19;
  local_6c = iVar6;
  local_68 = iVar19;
  local_58 = uVar10;
  local_54 = uVar10;
  FUN_01282570(puVar9);
  FUN_01282570((uint)puVar9 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar9;
    bVar2 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar2);
  *puVar9 = uVar5 - 0x10;
  if ((uVar5 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar9);
  }
  *piVar4 = local_80;
  piVar4[1] = local_7c;
  piVar4[2] = iStack_78;
  piVar4[3] = iStack_74;
  piVar4[4] = local_70;
  piVar4[5] = local_6c;
  piVar4[6] = local_68;
  piVar4[7] = local_64;
  piVar4[8] = local_60;
  piVar4[9] = local_5c;
  piVar4[10] = local_58;
  piVar4[0xb] = local_54;
  piVar4[0xc] = local_50;
  piVar4[0xd] = local_4c;
  piVar4[0xe] = local_48;
  *param_1 = 1;
  param_1[1] = piVar4;
  param_1[2] = 1;
  return;
}

