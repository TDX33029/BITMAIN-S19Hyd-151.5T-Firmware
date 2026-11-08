// FUN_012ba0b0 @ 012ba0b0 size=852 calls_out=5 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x012ba240) */
/* WARNING: Removing unreachable block (ram,0x012ba2b8) */
/* WARNING: Removing unreachable block (ram,0x012ba2bc) */
/* WARNING: Removing unreachable block (ram,0x012ba2c8) */
/* WARNING: Removing unreachable block (ram,0x012ba2f4) */
/* WARNING: Removing unreachable block (ram,0x012ba2fc) */
/* WARNING: Removing unreachable block (ram,0x012ba314) */
/* WARNING: Removing unreachable block (ram,0x012ba3fc) */
/* WARNING: Removing unreachable block (ram,0x012ba320) */
/* WARNING: Removing unreachable block (ram,0x012ba328) */
/* WARNING: Removing unreachable block (ram,0x012ba334) */
/* WARNING: Removing unreachable block (ram,0x012ba348) */
/* WARNING: Removing unreachable block (ram,0x012ba368) */
/* WARNING: Removing unreachable block (ram,0x012ba378) */
/* WARNING: Removing unreachable block (ram,0x012ba38c) */
/* WARNING: Removing unreachable block (ram,0x012ba398) */
/* WARNING: Removing unreachable block (ram,0x012ba344) */

void FUN_012ba0b0(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  double *pdVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  double *pdVar11;
  int *piVar12;
  uint in_fpscr;
  double dVar13;
  double dVar14;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar5 = *param_1;
  uVar8 = param_1[1];
  uVar10 = param_1[2];
  piVar12 = (int *)param_1[4];
  FUN_015f3b0c(&local_40,1,uVar5,uVar8,uVar5,uVar8,uVar10,param_1[3],piVar12,param_1[5]);
  local_60 = local_40;
  uStack_5c = uStack_3c;
  uStack_58 = local_38;
  local_50 = uVar5;
  local_4c = uVar8;
  local_48 = uVar10;
  FUN_015f3c24(&local_40,&local_60,&local_50);
  dVar13 = (double)VectorUnsignedToFloat(local_30,(byte)(in_fpscr >> 0x16) & 3);
  dVar14 = (double)FUN_01845f30(local_38,local_34);
  puVar2 = (uint *)(piVar12 + 4);
  dVar13 = dVar13 / 1000000000.0 + dVar14;
  if ((local_40 & 1) != 0) {
    dVar13 = 0.0;
  }
  do {
    uVar6 = *puVar2;
    uVar9 = piVar12[5];
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar6 + 1;
  piVar12[5] = uVar9 + (0xfffffffe < uVar6);
  DataMemoryBarrier(0xb);
  uVar6 = uVar9 >> 0x1a & 0x20;
  pdVar11 = (double *)piVar12[0x2a];
  iVar3 = piVar12[0x2b] << 3;
  pdVar7 = (double *)((int)piVar12 + uVar6 + 0x18);
  uVar9 = 0xffffffff;
  do {
    if (iVar3 == 0) goto LAB_012ba1d8;
    dVar14 = *pdVar11;
    pdVar11 = pdVar11 + 1;
    iVar3 = iVar3 + -8;
    uVar9 = uVar9 + 1;
  } while (dVar14 < dVar13);
  uVar4 = *(uint *)((int)piVar12 + uVar6 + 0x30);
  if (uVar4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar9,uVar4,&DAT_0188cb0c);
  }
  puVar2 = (uint *)(*(int *)((int)piVar12 + uVar6 + 0x2c) + uVar9 * 8);
  do {
    uVar9 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar9 + 1;
  puVar2[1] = puVar2[1] + (uint)(0xfffffffe < uVar9);
LAB_012ba1d8:
  do {
    while( true ) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (*(int *)pdVar7 == *(int *)pdVar7 &&
          *(int *)((int)piVar12 + uVar6 + 0x1c) == *(int *)((int)piVar12 + uVar6 + 0x1c)) break;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(pdVar7);
  } while (!bVar1);
  *pdVar7 = dVar13 + *pdVar7;
  puVar2 = (uint *)((int)piVar12 + uVar6 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar9 + 1;
  *(uint *)((int)piVar12 + uVar6 + 0x24) =
       *(int *)((int)piVar12 + uVar6 + 0x24) + (uint)(0xfffffffe < uVar9);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar12;
    bVar1 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar1);
  *piVar12 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c1110(piVar12);
    return;
  }
  return;
}

