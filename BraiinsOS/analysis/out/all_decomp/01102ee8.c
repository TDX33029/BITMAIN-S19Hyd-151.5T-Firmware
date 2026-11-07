// FUN_01102ee8 @ 01102ee8 size=1236 calls_out=15 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x011032e8) */

void FUN_01102ee8(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
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
  
  piVar5 = (int *)thunk_FUN_016d4a50(0x3c);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x3c);
  }
  iVar12 = *param_2;
  iVar7 = 1;
  iVar13 = *(int *)(iVar12 + 0xa8);
  uVar14 = *(undefined4 *)(iVar12 + 0xa4);
  iVar9 = 1;
  local_fc = 8;
  if (iVar13 != 0) {
    iVar9 = thunk_FUN_016d4a50(iVar13);
    iVar17 = iVar13;
    if (iVar9 == 0) goto LAB_011033b4;
  }
  FUN_016dd1aa(iVar9,uVar14,iVar13);
  iVar15 = *(int *)(iVar12 + 0xb0);
  iVar17 = *(int *)(iVar12 + 0xb4);
  local_114 = CONCAT31((int3)((uint)local_114 >> 8),1);
  if ((iVar17 != 0) && (iVar7 = thunk_FUN_016d4a50(iVar17), iVar7 == 0)) {
LAB_011033b4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar17);
  }
  puVar10 = (uint *)(iVar12 + 8);
  FUN_016dd1aa(iVar7,iVar15,iVar17);
  local_104 = CONCAT31((int3)((uint)local_104 >> 8),1);
  local_e8 = CONCAT31(local_e8._1_3_,*(undefined1 *)(iVar12 + 0xd0));
  uVar6 = *(uint *)(iVar12 + 8);
  if ((uVar6 < 0xfffffff0) && ((uVar6 & 8) == 0)) {
    if (*puVar10 != uVar6) {
      ClearExclusiveLocal();
      goto LAB_01103030;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar10);
    if (!bVar2) goto LAB_01103030;
    *puVar10 = uVar6 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_01103030:
    FUN_0127d66c(puVar10);
  }
  FUN_0128236c(puVar10);
  FUN_0128236c((uint)puVar10 | 1);
  uVar6 = *(uint *)(iVar12 + 0x1c);
  if (0x1999999 < uVar6) {
    uVar14 = 0;
LAB_01103064:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar14,iVar15);
  }
  iVar15 = uVar6 * 0x50;
  if (iVar15 == 0) {
    local_124 = 8;
    local_e0 = 0;
  }
  else {
    local_124 = thunk_FUN_016d4a50(iVar15);
    if (local_124 == 0) {
      uVar14 = 8;
      goto LAB_01103064;
    }
    local_e0 = uVar6;
  }
  puVar16 = *(uint **)(iVar12 + 0x10);
  puVar19 = puVar16 + 1;
  local_d8 = 0;
  uVar11 = ~*puVar16 & 0x80808080;
  uVar8 = uVar6;
  local_dc = local_124;
  while( true ) {
    uVar4 = local_d8;
    iVar12 = local_dc;
    uVar3 = local_e0;
    if (uVar8 == 0) break;
    puVar18 = puVar19;
    if (uVar11 == 0) {
      do {
        puVar19 = puVar18 + 1;
        uVar11 = *puVar18;
        puVar16 = puVar16 + -0x10;
        puVar18 = puVar19;
      } while ((uVar11 & 0x80808080) == 0x80808080);
      uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
    }
    iVar12 = *(int *)((int)puVar16 +
                     (LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                              (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) & 0x38U) * -2 + -8);
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
    FUN_01108190(&local_d0,*(undefined4 *)(iVar12 + 0x54),*(undefined4 *)(iVar12 + 0x58));
    cVar1 = *(char *)(iVar12 + 0x5c);
    local_64 = (undefined4)local_c8;
    local_30 = local_d0;
    uStack_2c = local_cc;
    uStack_28 = (undefined4)local_c8;
    local_70 = local_d0;
    local_6c = local_cc;
    local_c8 = FUN_01845f30(*(undefined4 *)(iVar12 + 8),*(undefined4 *)(iVar12 + 0xc));
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
    if (uVar4 == local_e0) {
      FUN_012bdaf0(&local_e0);
      local_124 = local_dc;
    }
    uVar11 = uVar11 - 1 & uVar11;
    FUN_016dd1aa(local_124 + uVar4 * 0x50,&local_d0,0x50);
    local_d8 = uVar4 + 1;
    uVar8 = uVar8 - 1;
  }
  iVar15 = 1;
  while (iVar15 = iVar15 + -1, iVar15 != 0) {
    FUN_007baef4(local_fc);
    local_fc = local_fc + 0x50;
  }
  iStack_74 = local_114;
  local_64 = local_104;
  local_60 = uVar3;
  local_5c = iVar12;
  local_50 = 0;
  local_4c = 0;
  local_48 = local_e8;
  local_80 = iVar13;
  local_7c = iVar9;
  iStack_78 = iVar13;
  local_70 = iVar17;
  local_6c = iVar7;
  local_68 = iVar17;
  local_58 = uVar6;
  local_54 = uVar6;
  FUN_01282570(puVar10);
  FUN_01282570((uint)puVar10 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar10;
    bVar2 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar2);
  *puVar10 = uVar6 - 0x10;
  if ((uVar6 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar10);
  }
  *piVar5 = local_80;
  piVar5[1] = local_7c;
  piVar5[2] = iStack_78;
  piVar5[3] = iStack_74;
  piVar5[4] = local_70;
  piVar5[5] = local_6c;
  piVar5[6] = local_68;
  piVar5[7] = local_64;
  piVar5[8] = local_60;
  piVar5[9] = local_5c;
  piVar5[10] = local_58;
  piVar5[0xb] = local_54;
  piVar5[0xc] = local_50;
  piVar5[0xd] = local_4c;
  piVar5[0xe] = local_48;
  *param_1 = 1;
  param_1[1] = piVar5;
  param_1[2] = 1;
  return;
}

