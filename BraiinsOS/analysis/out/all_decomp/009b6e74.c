// FUN_009b6e74 @ 009b6e74 size=944 calls_out=12 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x009b7140) */

void FUN_009b6e74(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
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
  
  piVar4 = (int *)thunk_FUN_016d4a50(0x3c);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x3c);
  }
  iVar12 = *param_2;
  iVar7 = 1;
  uVar14 = *(undefined4 *)(iVar12 + 0xa4);
  iVar15 = *(int *)(iVar12 + 0xa8);
  iVar10 = 1;
  local_a4 = 8;
  if (iVar15 != 0) {
    iVar10 = thunk_FUN_016d4a50(iVar15);
    iVar18 = iVar15;
    if (iVar10 == 0) goto LAB_009b720c;
  }
  FUN_016dd1aa(iVar10,uVar14,iVar15);
  uVar14 = *(undefined4 *)(iVar12 + 0xb0);
  iVar18 = *(int *)(iVar12 + 0xb4);
  local_bc = CONCAT31((int3)((uint)local_bc >> 8),1);
  if ((iVar18 != 0) && (iVar7 = thunk_FUN_016d4a50(iVar18), iVar7 == 0)) {
LAB_009b720c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar18);
  }
  puVar11 = (uint *)(iVar12 + 8);
  FUN_016dd1aa(iVar7,uVar14,iVar18);
  local_ac = CONCAT31((int3)((uint)local_ac >> 8),1);
  local_90 = CONCAT31(local_90._1_3_,*(undefined1 *)(iVar12 + 0xd0));
  uVar5 = *(uint *)(iVar12 + 8);
  if ((uVar5 < 0xfffffff0) && ((uVar5 & 8) == 0)) {
    if (*puVar11 != uVar5) {
      ClearExclusiveLocal();
      goto LAB_009b6fbc;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar11);
    if (!bVar1) goto LAB_009b6fbc;
    *puVar11 = uVar5 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009b6fbc:
    FUN_0127d66c(puVar11);
  }
  FUN_0128236c(puVar11);
  FUN_0128236c((uint)puVar11 | 1);
  uVar5 = *(uint *)(iVar12 + 0x1c);
  iVar9 = uVar5 * 0x50;
  local_88 = 0;
  if (0x1999999 < uVar5) {
LAB_009b6ff8:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_88,iVar9);
  }
  if (iVar9 == 0) {
    iVar6 = 8;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(iVar9);
    if (iVar6 == 0) {
      local_88 = 8;
      goto LAB_009b6ff8;
    }
    local_88 = uVar5;
  }
  puVar19 = *(uint **)(iVar12 + 0x10);
  puVar17 = puVar19 + 1;
  local_80 = 0;
  uVar8 = ~*puVar19 & 0x80808080;
  uVar13 = uVar5;
  local_84 = iVar6;
  while( true ) {
    uVar3 = local_80;
    iVar12 = local_84;
    uVar2 = local_88;
    if (uVar13 == 0) break;
    puVar16 = puVar17;
    if (uVar8 == 0) {
      do {
        puVar17 = puVar16 + 1;
        uVar8 = *puVar16;
        puVar19 = puVar19 + -0x10;
        puVar16 = puVar17;
      } while ((uVar8 & 0x80808080) == 0x80808080);
      uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
    }
    FUN_009d4024(&local_78,
                 *(int *)((int)puVar19 +
                         (LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                  (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) & 0x38U) * -2 + -8) +
                 8);
    if (uVar3 == local_88) {
      FUN_012bdaf0(&local_88);
      iVar6 = local_84;
    }
    uVar8 = uVar8 - 1 & uVar8;
    FUN_016dd1aa(iVar6 + uVar3 * 0x50,&local_78,0x50);
    local_80 = uVar3 + 1;
    uVar13 = uVar13 - 1;
  }
  iVar9 = 1;
  while (iVar9 = iVar9 + -1, iVar9 != 0) {
    FUN_007baef4(local_a4);
    local_a4 = local_a4 + 0x50;
  }
  iStack_6c = local_bc;
  iStack_5c = local_ac;
  uStack_58 = uVar2;
  iStack_54 = iVar12;
  iStack_48 = 0;
  iStack_44 = 0;
  iStack_40 = local_90;
  local_78 = iVar15;
  iStack_74 = iVar10;
  iStack_70 = iVar15;
  iStack_68 = iVar18;
  local_64 = iVar7;
  iStack_60 = iVar18;
  local_50 = uVar5;
  uStack_4c = uVar5;
  FUN_01282570(puVar11);
  FUN_01282570((uint)puVar11 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar11;
    bVar1 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar1);
  *puVar11 = uVar5 - 0x10;
  if ((uVar5 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar11);
  }
  *piVar4 = local_78;
  piVar4[1] = iStack_74;
  piVar4[2] = iStack_70;
  piVar4[3] = iStack_6c;
  piVar4[4] = iStack_68;
  piVar4[5] = local_64;
  piVar4[6] = iStack_60;
  piVar4[7] = iStack_5c;
  piVar4[8] = uStack_58;
  piVar4[9] = iStack_54;
  piVar4[10] = local_50;
  piVar4[0xb] = uStack_4c;
  piVar4[0xc] = iStack_48;
  piVar4[0xd] = iStack_44;
  piVar4[0xe] = iStack_40;
  *param_1 = 1;
  param_1[1] = piVar4;
  param_1[2] = 1;
  return;
}

