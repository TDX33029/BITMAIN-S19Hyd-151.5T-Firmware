// FUN_00b12b90 @ 00b12b90 size=1016 calls_out=14 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00b12ec4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00b12b90(float param_1,undefined4 *param_2,uint *param_3)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint in_fpscr;
  double dVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double unaff_d11;
  double dVar14;
  double dVar15;
  int local_238 [60];
  int local_148 [2];
  int local_140;
  float local_13c;
  int local_138;
  float local_134;
  int local_130;
  undefined4 local_12c;
  int local_124;
  int local_120;
  int local_11c;
  float local_114;
  undefined4 local_68;
  
  if ((char)param_3[4] != '\0') {
    if ((char)param_3[4] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186f970);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f970);
  }
  uVar5 = param_3[3];
  fVar11 = (float)param_3[1];
  fVar12 = (float)param_3[2];
  uVar9 = *param_3;
  FUN_009a7944(local_148,*(undefined4 *)(*(int *)(uVar5 + 0x578) + 8));
  iVar8 = *(int *)(uVar5 + 0x610);
  puVar7 = (uint *)(iVar8 + 0x98);
  uVar3 = *(uint *)(iVar8 + 0x98);
  if ((uVar3 < 0xfffffff0) && ((uVar3 & 8) == 0)) {
    if (*puVar7 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_00b12c1c;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar7);
    if (!bVar1) goto LAB_00b12c1c;
    *puVar7 = uVar3 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00b12c1c:
    FUN_0127d66c(puVar7);
  }
  FUN_0128236c(puVar7);
  FUN_0128236c((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  uVar3 = *(uint *)(iVar8 + 0xa0) ^ 7;
  if (uVar3 != 0 || *(int *)(iVar8 + 0xa4) != 0) {
    unaff_d11 = (double)*(float *)(iVar8 + 0xb8);
  }
  if (uVar3 == 0 && *(int *)(iVar8 + 0xa4) == 0) {
    unaff_d11 = (double)local_114;
  }
  FUN_01282570(puVar7);
  FUN_01282570((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  dVar13 = unaff_d11 + -3.0;
  do {
    uVar3 = *puVar7;
    bVar1 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar1);
  *puVar7 = uVar3 - 0x10;
  if ((uVar3 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar7);
  }
  iVar8 = *(int *)(*(int *)(uVar5 + 0x578) + 0xc);
  puVar7 = (uint *)(iVar8 + 0x98);
  uVar3 = *(uint *)(iVar8 + 0x98);
  if ((uVar3 < 0xfffffff0) && ((uVar3 & 8) == 0)) {
    if (*puVar7 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_00b12ce8;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar7);
    if (!bVar1) goto LAB_00b12ce8;
    *puVar7 = uVar3 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00b12ce8:
    FUN_0127d66c(puVar7);
  }
  FUN_0128236c(puVar7);
  FUN_0128236c((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar8 + 0xa0) == 2) {
    local_238[0] = 2;
  }
  else {
    FUN_00b2392c(local_238,(int *)(iVar8 + 0xa0));
  }
  FUN_01282570(puVar7);
  FUN_01282570((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar7;
    bVar1 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar1);
  *puVar7 = uVar3 - 0x10;
  if ((uVar3 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar7);
  }
  iVar8 = local_238[0];
  if (local_238[0] == 2) {
    dVar14 = 100.0;
    dVar10 = dVar14;
  }
  else {
    FUN_00b2392c(local_148,local_238);
    if (local_148[0] == 2) {
      dVar14 = 100.0;
    }
    else {
      FUN_00ac8e24(local_148);
      dVar14 = (double)VectorUnsignedToFloat(local_68,(byte)(in_fpscr >> 0x16) & 3);
    }
    local_148[0] = iVar8;
    FUN_016dd1aa((uint)local_148 | 4,(uint)local_238 | 4,0xec);
    fVar2 = local_134;
    iVar8 = local_138;
    FUN_00ac8e24(local_148);
    dVar15 = (double)VectorUnsignedToFloat(fVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = 100.0;
    if (iVar8 != 0) {
      dVar10 = dVar15;
    }
  }
  if ((uVar9 & 1) == 0) {
    FUN_009a7ebc(local_148,*(int *)(uVar5 + 0x578) + 8);
    if (local_130 != 0) {
      thunk_FUN_016d3fb4(local_12c);
    }
    puVar6 = (undefined4 *)(local_120 + 4);
    for (iVar8 = local_11c; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar6[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      puVar6 = puVar6 + 6;
    }
    if (local_124 != 0) {
      thunk_FUN_016d3fb4(local_120);
    }
    fVar11 = local_13c;
    fVar12 = local_134;
    if (local_140 == 0 || local_138 == 0) {
      dVar14 = 0.25;
      uVar4 = 0;
      goto LAB_00b12efc;
    }
  }
  fVar11 = fVar11 - (fVar12 - fVar11);
  FUN_016d55d4(fVar12 - fVar11);
  dVar10 = dVar10 - dVar14;
  FUN_016d5578(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),0);
  dVar14 = (dVar13 + (dVar10 / 100.0) * (double)param_1 * 0.5) - (double)fVar11;
  FUN_016d5578(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20),0xd2f1a9fc);
  dVar14 = (double)param_1 / dVar14;
  uVar4 = 1;
  local_134 = fVar12;
LAB_00b12efc:
  *param_2 = uVar4;
  *(undefined1 *)(param_3 + 4) = 1;
  param_2[1] = local_134;
  *(double *)(param_2 + 6) = dVar13;
  if (dVar14 < 0.25) {
    dVar14 = 0.25;
  }
  *(double *)(param_2 + 4) = dVar13 + 1.5;
  if (4.0 < dVar14) {
    dVar14 = 4.0;
  }
  *(double *)(param_2 + 2) = dVar14;
  return;
}

