// FUN_0074f130 @ 0074f130 size=948 calls_out=12 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x0074f414) */

void FUN_0074f130(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  int local_bc;
  int local_ac;
  int local_a4;
  int local_90;
  uint local_88;
  int local_84;
  uint local_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  uint local_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  
  piVar3 = (int *)thunk_FUN_016d4a50(0x3c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x3c);
  }
  iVar11 = *param_2;
  iVar6 = 1;
  uVar13 = *(undefined4 *)(iVar11 + 0xa4);
  iVar15 = *(int *)(iVar11 + 0xa8);
  iVar8 = 1;
  local_a4 = 8;
  if (iVar15 != 0) {
    iVar8 = thunk_FUN_016d4a50(iVar15);
    iVar18 = iVar15;
    if (iVar8 == 0) goto LAB_0074f4dc;
  }
  FUN_016dd1aa(iVar8,uVar13,iVar15);
  uVar13 = *(undefined4 *)(iVar11 + 0xb0);
  iVar18 = *(int *)(iVar11 + 0xb4);
  local_bc = CONCAT31((int3)((uint)local_bc >> 8),1);
  if ((iVar18 != 0) && (iVar6 = thunk_FUN_016d4a50(iVar18), iVar6 == 0)) {
LAB_0074f4dc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar18);
  }
  puVar9 = (uint *)(iVar11 + 8);
  FUN_016dd1aa(iVar6,uVar13,iVar18);
  local_ac = CONCAT31((int3)((uint)local_ac >> 8),1);
  local_90 = CONCAT31(local_90._1_3_,*(undefined1 *)(iVar11 + 0xd0));
  uVar4 = *(uint *)(iVar11 + 8);
  if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
    if (*puVar9 != uVar4) {
      ClearExclusiveLocal();
      goto LAB_0074f278;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar1) goto LAB_0074f278;
    *puVar9 = uVar4 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_0074f278:
    FUN_0127d66c(puVar9);
  }
  FUN_0128236c(puVar9);
  FUN_0128236c((uint)puVar9 | 1);
  uVar4 = *(uint *)(iVar11 + 0x1c);
  if (0x1999999 < uVar4) {
    uVar13 = 0;
    iVar7 = iVar15;
LAB_0074f2b0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar13,iVar7);
  }
  uVar14 = 0;
  iVar7 = uVar4 * 0x50;
  if (iVar7 == 0) {
    local_88 = 0;
    local_84 = 8;
    iVar5 = local_84;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(iVar7);
    local_88 = uVar4;
    if (iVar5 == 0) {
      uVar13 = 8;
      goto LAB_0074f2b0;
    }
  }
  local_80 = 0;
  local_84 = iVar5;
  if (uVar4 != 0) {
    local_80 = 0;
    puVar12 = *(uint **)(iVar11 + 0x10);
    puVar17 = puVar12 + 1;
    uVar10 = ~*puVar12 & 0x80808080;
    uVar14 = uVar4;
    do {
      uVar2 = local_80;
      puVar16 = puVar17;
      if (uVar10 == 0) {
        do {
          puVar17 = puVar16 + 1;
          uVar10 = *puVar16;
          puVar12 = puVar12 + -0x10;
          puVar16 = puVar17;
        } while ((uVar10 & 0x80808080) == 0x80808080);
        uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
      }
      FUN_0074edbc(&local_78,
                   *(int *)((int)puVar12 +
                           (LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                    (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) & 0x38U) * -2 +
                           -8) + 8);
      if (uVar2 == local_88) {
        FUN_012bdaf0(&local_88);
        iVar5 = local_84;
      }
      uVar10 = uVar10 - 1 & uVar10;
      uVar14 = uVar14 - 1;
      FUN_016dd1aa(iVar5 + uVar2 * 0x50,&local_78,0x50);
      local_80 = uVar2 + 1;
    } while (uVar14 != 0);
    uVar14 = uVar4;
  }
  iVar11 = local_84;
  uVar4 = local_88;
  iVar7 = 1;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_007baef4(local_a4);
    local_a4 = local_a4 + 0x50;
  }
  iStack_6c = local_bc;
  iStack_5c = local_ac;
  uStack_58 = uVar4;
  iStack_54 = iVar11;
  iStack_48 = 0;
  iStack_44 = 0;
  iStack_40 = local_90;
  local_78 = iVar15;
  iStack_74 = iVar8;
  iStack_70 = iVar15;
  iStack_68 = iVar18;
  local_64 = iVar6;
  iStack_60 = iVar18;
  local_50 = uVar14;
  uStack_4c = uVar14;
  FUN_01282570(puVar9);
  FUN_01282570((uint)puVar9 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar9;
    bVar1 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar1);
  *puVar9 = uVar4 - 0x10;
  if ((uVar4 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar9);
  }
  *piVar3 = local_78;
  piVar3[1] = iStack_74;
  piVar3[2] = iStack_70;
  piVar3[3] = iStack_6c;
  piVar3[4] = iStack_68;
  piVar3[5] = local_64;
  piVar3[6] = iStack_60;
  piVar3[7] = iStack_5c;
  piVar3[8] = uStack_58;
  piVar3[9] = iStack_54;
  piVar3[10] = local_50;
  piVar3[0xb] = uStack_4c;
  piVar3[0xc] = iStack_48;
  piVar3[0xd] = iStack_44;
  piVar3[0xe] = iStack_40;
  *param_1 = 1;
  param_1[1] = piVar3;
  param_1[2] = 1;
  return;
}

