// FUN_012643bc @ 012643bc size=1048 calls_out=6 calls_in=3
// strings: $recursiveAnchor | $recursiveAnchor

void FUN_012643bc(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int **ppiVar6;
  int *piVar5;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  char **ppcVar17;
  int local_b0;
  char *local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int *local_94;
  char *local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  char *local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_60 [6];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_013539bc(local_60,param_2 + 0x50,&DAT_00410f4e,1);
  puVar15 = (undefined4 *)((uint)local_60 | 4);
  local_a8 = (char *)*puVar15;
  iStack_a4 = puVar15[1];
  iStack_a0 = puVar15[2];
  iStack_9c = puVar15[3];
  iStack_98 = puVar15[4];
  if (local_60[0] != -0x7ffffff6) {
    param_1[6] = local_48;
    param_1[7] = iStack_44;
    param_1[8] = iStack_40;
    param_1[9] = iStack_3c;
    param_1[10] = local_38;
    param_1[0xb] = iStack_34;
    param_1[0xc] = iStack_30;
    param_1[0xd] = iStack_2c;
    param_1[1] = (int)local_a8;
    param_1[2] = iStack_a4;
    param_1[3] = iStack_a0;
    param_1[4] = iStack_9c;
    param_1[5] = iStack_98;
    *param_1 = local_60[0];
    return;
  }
  if ((*local_a8 == '\x05') && (iVar12 = *(int *)(local_a8 + 4), iVar12 != 0)) {
    local_b0 = *(int *)(local_a8 + 8);
    local_78 = local_a8;
    iStack_74 = iStack_a4;
    iStack_70 = iStack_a0;
    iStack_6c = iStack_9c;
    iStack_68 = iStack_98;
    while( true ) {
      uVar3 = *(ushort *)(iVar12 + 0x192);
      iVar11 = iVar12 + 0x10c;
      uVar14 = 0xffffffff;
      iVar9 = (uint)uVar3 * 0xc;
      do {
        if (iVar9 == 0) {
          uVar14 = (uint)uVar3;
          goto LAB_012644e8;
        }
        uVar10 = *(uint *)(iVar11 + 8);
        uVar8 = uVar10;
        if (0xf < uVar10) {
          uVar8 = 0x10;
        }
        iVar4 = FUN_016dd50a("$recursiveAnchor",*(undefined4 *)(iVar11 + 4),uVar8);
        if (iVar4 == 0) {
          iVar4 = 0x10 - uVar10;
        }
        iVar9 = iVar9 + -0xc;
        uVar14 = uVar14 + 1;
        iVar11 = iVar11 + 0xc;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) break;
LAB_012644e8:
      if (local_b0 == 0) goto LAB_01264554;
      local_b0 = local_b0 + -1;
      iVar12 = *(int *)(iVar12 + uVar14 * 4 + 0x198);
    }
    pcVar13 = (char *)(iVar12 + uVar14 * 0x18);
    cVar2 = *pcVar13;
    bVar16 = cVar2 == '\x01';
    if (bVar16) {
      cVar2 = pcVar13[1];
    }
    if (bVar16 && cVar2 == '\x01') {
      local_94 = *(int **)(param_2 + 0x58);
      if (local_94 != (int *)0x0) goto LAB_01264584;
      local_94 = (int *)0x0;
      goto LAB_01264744;
    }
  }
  goto LAB_01264554;
LAB_01264584:
  do {
    iVar12 = *local_94;
    bVar16 = (bool)hasExclusiveAccess(local_94);
  } while (!bVar16);
  *local_94 = iVar12 + 1;
  if (iVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x12647d0);
    (*pcVar1)();
  }
  ppiVar6 = &local_94;
  ppcVar17 = &local_90;
  do {
    piVar5 = *ppiVar6;
    ppiVar6 = (int **)(piVar5 + 3);
    piVar7 = *ppiVar6;
    iVar12 = piVar5[2];
    FUN_013539bc(local_60,param_2 + 0x50,*(undefined4 *)(iVar12 + 0xc),
                 *(undefined4 *)(iVar12 + 0x10),ppcVar17);
    local_78 = (char *)*puVar15;
    iStack_74 = puVar15[1];
    iStack_70 = puVar15[2];
    iStack_6c = puVar15[3];
    iStack_68 = puVar15[4];
    if (local_60[0] != -0x7ffffff6) {
      param_1[6] = local_48;
      param_1[7] = iStack_44;
      param_1[8] = iStack_40;
      param_1[9] = iStack_3c;
      param_1[10] = local_38;
      param_1[0xb] = iStack_34;
      param_1[0xc] = iStack_30;
      param_1[0xd] = iStack_2c;
      param_1[1] = (int)local_78;
      param_1[2] = iStack_74;
      param_1[3] = iStack_70;
      param_1[4] = iStack_6c;
      param_1[5] = iStack_68;
      *param_1 = local_60[0];
      FUN_01355a30(&local_94);
      FUN_01167ec8((uint)&local_a8 | 4);
      return;
    }
    local_90 = local_78;
    iStack_8c = iStack_74;
    iStack_88 = iStack_70;
    iStack_84 = iStack_6c;
    iStack_80 = iStack_68;
    if ((*local_78 != '\x05') || (iVar12 = *(int *)(local_78 + 4), iVar12 == 0)) {
LAB_01264728:
      FUN_01167ec8((uint)&local_90 | 4);
      break;
    }
    local_b0 = *(int *)(local_78 + 8);
    while( true ) {
      iVar11 = iVar12 + 0x10c;
      uVar3 = *(ushort *)(iVar12 + 0x192);
      uVar14 = 0xffffffff;
      iVar9 = (uint)uVar3 * 0xc;
      do {
        if (iVar9 == 0) {
          uVar14 = (uint)uVar3;
          goto LAB_012646bc;
        }
        uVar10 = *(uint *)(iVar11 + 8);
        uVar8 = uVar10;
        if (0xf < uVar10) {
          uVar8 = 0x10;
        }
        iVar4 = FUN_016dd50a("$recursiveAnchor",*(undefined4 *)(iVar11 + 4),uVar8);
        if (iVar4 == 0) {
          iVar4 = 0x10 - uVar10;
        }
        iVar9 = iVar9 + -0xc;
        uVar14 = uVar14 + 1;
        iVar11 = iVar11 + 0xc;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) break;
LAB_012646bc:
      if (local_b0 == 0) goto LAB_01264728;
      local_b0 = local_b0 + -1;
      iVar12 = *(int *)(iVar12 + uVar14 * 4 + 0x198);
    }
    pcVar13 = (char *)(iVar12 + uVar14 * 0x18);
    cVar2 = *pcVar13;
    bVar16 = cVar2 != '\x01';
    if (!bVar16) {
      cVar2 = pcVar13[1];
    }
    if (bVar16 || cVar2 != '\x01') goto LAB_01264728;
    FUN_01167ec8((uint)&local_a8 | 4);
    local_a8 = local_90;
    iStack_a4 = iStack_8c;
    iStack_a0 = iStack_88;
    iStack_9c = iStack_84;
    iStack_98 = iStack_80;
  } while (piVar7 != (int *)0x0);
LAB_01264744:
  FUN_01351c48(&local_94);
  if (local_94 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *local_94;
      bVar16 = (bool)hasExclusiveAccess(local_94);
    } while (!bVar16);
    *local_94 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353090(&local_94);
    }
  }
LAB_01264554:
  param_1[1] = (int)local_a8;
  param_1[2] = iStack_a4;
  param_1[3] = iStack_a0;
  param_1[4] = iStack_9c;
  param_1[5] = iStack_98;
  *param_1 = -0x7ffffff6;
  return;
}

