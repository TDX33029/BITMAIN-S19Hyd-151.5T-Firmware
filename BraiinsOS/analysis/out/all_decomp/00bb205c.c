// FUN_00bb205c @ 00bb205c size=964 calls_out=5 calls_in=1
// strings: 

void FUN_00bb205c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar14 = param_2[3];
  bVar20 = 0xffffffe < uVar14;
  bVar19 = uVar14 == 0xfffffff;
  uVar3 = uVar14 * 0x10;
  if (uVar14 < 0x10000000) {
    bVar20 = 0x7ffffff7 < uVar3;
    bVar19 = uVar3 == 0x7ffffff8;
  }
  if (bVar20 && !bVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar3);
  }
  uVar10 = 0;
  if (uVar3 == 0) {
    local_34 = 8;
    uVar16 = 0;
  }
  else {
    local_34 = thunk_FUN_016d4a50(uVar3);
    uVar16 = uVar14;
    if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar3);
    }
  }
  uVar3 = *param_2;
  local_2c = 0;
  local_30 = 0;
  if (uVar14 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = param_2[2];
    uVar7 = uVar1 - uVar3;
    if (uVar1 < uVar3) {
      uVar7 = uVar1;
    }
    if (uVar3 - uVar7 < uVar14) {
      uVar10 = uVar14 - (uVar3 - uVar7);
    }
    else {
      uVar3 = uVar7 + uVar14;
    }
  }
  puVar2 = (undefined8 *)param_2[1];
  uVar15 = uVar10 & 0xfffffff;
  uVar18 = uVar3 * 0x10 + uVar7 * -0x10;
  uVar14 = 0;
  uVar1 = uVar15 + (uVar18 >> 4);
  local_38 = uVar16;
  if (uVar16 < uVar1) {
    FUN_00d653ec(&local_38,0,uVar1,8,0x10);
    iVar8 = local_2c;
    uVar14 = local_30;
    uVar17 = local_38;
    if (uVar16 - local_2c < local_30) {
      uVar4 = uVar16 - local_30;
      uVar6 = local_2c - uVar4;
      if ((uVar6 < uVar4) && (uVar6 <= local_38 - uVar16)) {
        FUN_016dd1aa(local_34 + uVar16 * 0x10,local_34,uVar6 * 0x10);
      }
      else {
        uVar14 = local_38 - uVar4;
        FUN_016dd52c(local_34 + uVar14 * 0x10,local_34 + local_30 * 0x10,uVar4 * 0x10);
        local_30 = uVar14;
      }
    }
  }
  else {
    iVar8 = 0;
    uVar17 = uVar16;
  }
  iVar5 = uVar10 * 0x10;
  uVar14 = uVar14 + iVar8;
  uVar16 = uVar14 - uVar17;
  if (uVar14 < uVar17) {
    uVar16 = uVar14;
  }
  uVar14 = uVar17 - uVar16;
  if (uVar1 <= uVar14) {
    uVar1 = 0;
    uVar14 = 0;
    if (uVar3 * 0x10 != uVar7 * 0x10) {
      puVar13 = puVar2 + uVar7 * 2 + 1;
      uVar1 = uVar18 >> 4;
      puVar11 = (undefined8 *)(local_34 + uVar16 * 0x10 + 8);
      uVar14 = 0;
      do {
        puVar9 = puVar13 + -1;
        uVar14 = uVar14 + 1;
        uVar21 = *puVar13;
        puVar13 = puVar13 + 2;
        puVar11[-1] = *puVar9;
        *puVar11 = uVar21;
        puVar11 = puVar11 + 2;
      } while (uVar1 != uVar14);
    }
    if (iVar5 != 0) {
      puVar2 = puVar2 + 1;
      puVar11 = (undefined8 *)(uVar14 * 0x10 + uVar16 * 0x10 + local_34 + 8);
      uVar3 = uVar15;
      do {
        puVar13 = puVar2 + -1;
        uVar3 = uVar3 - 1;
        uVar21 = *puVar2;
        puVar2 = puVar2 + 2;
        puVar11[-1] = *puVar13;
        *puVar11 = uVar21;
        puVar11 = puVar11 + 2;
      } while (uVar3 != 0);
      uVar1 = uVar1 + uVar15;
    }
    goto LAB_00bb23e4;
  }
  uVar15 = 0;
  puVar13 = puVar2 + uVar7 * 2;
  puVar11 = puVar2;
  if (uVar17 != uVar16) {
    uVar7 = 0;
    uVar1 = 0;
LAB_00bb22bc:
    puVar9 = (undefined8 *)((int)puVar13 + uVar7);
    if (uVar18 != uVar7) goto code_r0x00bb22c8;
    iVar8 = 0;
    puVar13 = (undefined8 *)(local_34 + uVar16 * 0x10 + uVar7 + 8);
    do {
      bVar19 = iVar5 != 0;
      if (bVar19) {
        uVar21 = *puVar11;
        puVar12 = puVar11 + 1;
        puVar11 = puVar11 + 2;
        iVar5 = iVar5 + -0x10;
        iVar8 = iVar8 + 1;
        *puVar13 = *puVar12;
        puVar13[-1] = uVar21;
        puVar13 = puVar13 + 2;
      }
    } while (bVar19 && uVar14 - uVar1 != iVar8);
    uVar1 = uVar1 + iVar8;
    puVar13 = puVar9;
    goto joined_r0x00bb2358;
  }
  uVar1 = 0;
joined_r0x00bb2358:
  if (puVar13 != puVar2 + uVar3 * 2) {
    puVar12 = puVar13 + 1;
    puVar9 = (undefined8 *)(local_34 + 8);
    uVar3 = (uint)((int)(puVar2 + uVar3 * 2) - (int)puVar13) >> 4;
    uVar15 = 0;
    do {
      puVar13 = puVar12 + -1;
      uVar15 = uVar15 + 1;
      uVar21 = *puVar12;
      puVar12 = puVar12 + 2;
      puVar9[-1] = *puVar13;
      *puVar9 = uVar21;
      puVar9 = puVar9 + 2;
    } while (uVar3 != uVar15);
    uVar1 = uVar1 + uVar3;
  }
  if (puVar11 != puVar2 + uVar10 * 2) {
    uVar3 = (uint)((int)(puVar2 + uVar10 * 2) - (int)puVar11) >> 4;
    puVar2 = (undefined8 *)(local_34 + uVar15 * 0x10 + 8);
    puVar11 = puVar11 + 1;
    uVar14 = uVar3;
    do {
      puVar13 = puVar11 + -1;
      uVar14 = uVar14 - 1;
      uVar21 = *puVar11;
      puVar11 = puVar11 + 2;
      puVar2[-1] = *puVar13;
      *puVar2 = uVar21;
      puVar2 = puVar2 + 2;
    } while (uVar14 != 0);
    uVar1 = uVar1 + uVar3;
  }
LAB_00bb23e4:
  param_1[3] = local_2c + uVar1;
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
code_r0x00bb22c8:
  uVar21 = puVar9[1];
  puVar12 = (undefined8 *)(local_34 + uVar16 * 0x10 + uVar7);
  uVar1 = uVar1 + 1;
  uVar7 = uVar7 + 0x10;
  *puVar12 = *puVar9;
  puVar12[1] = uVar21;
  if (uVar14 == uVar1) goto code_r0x00bb22e4;
  goto LAB_00bb22bc;
code_r0x00bb22e4:
  puVar13 = (undefined8 *)((int)puVar13 + uVar7);
  goto joined_r0x00bb2358;
}

