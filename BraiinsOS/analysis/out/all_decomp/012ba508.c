// FUN_012ba508 @ 012ba508 size=392 calls_out=4 calls_in=12
// strings: 

void FUN_012ba508(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  double *pdVar6;
  uint uVar7;
  double *pdVar8;
  uint in_fpscr;
  double dVar9;
  double dVar10;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_015f3b0c(&local_38,1);
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = local_30;
  FUN_015f3c24(&local_38,&local_58,&local_48);
  dVar9 = (double)VectorUnsignedToFloat(local_28,(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = (double)FUN_01845f30(local_30,local_2c);
  iVar2 = param_1[4];
  *(undefined1 *)(param_1 + 5) = 1;
  puVar4 = (uint *)(iVar2 + 0x10);
  dVar9 = dVar9 / 1000000000.0 + dVar10;
  if ((local_38 & 1) != 0) {
    dVar9 = 0.0;
  }
  do {
    uVar5 = *puVar4;
    uVar7 = *(uint *)(iVar2 + 0x14);
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar5 + 1;
  *(uint *)(iVar2 + 0x14) = uVar7 + (0xfffffffe < uVar5);
  DataMemoryBarrier(0xb);
  pdVar8 = *(double **)(iVar2 + 0xa8);
  iVar3 = iVar2 + (uVar7 >> 0x1a & 0x20);
  iVar2 = *(int *)(iVar2 + 0xac) << 3;
  pdVar6 = (double *)(iVar3 + 0x18);
  uVar5 = 0xffffffff;
  do {
    if (iVar2 == 0) goto LAB_012ba61c;
    dVar10 = *pdVar8;
    pdVar8 = pdVar8 + 1;
    iVar2 = iVar2 + -8;
    uVar5 = uVar5 + 1;
  } while (dVar10 < dVar9);
  if (*(uint *)(iVar3 + 0x30) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,*(uint *)(iVar3 + 0x30),&DAT_0188cb0c);
  }
  puVar4 = (uint *)(*(int *)(iVar3 + 0x2c) + uVar5 * 8);
  do {
    uVar5 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar5 + 1;
  puVar4[1] = puVar4[1] + (uint)(0xfffffffe < uVar5);
LAB_012ba61c:
  do {
    while( true ) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (*(int *)pdVar6 == *(int *)pdVar6 && *(int *)(iVar3 + 0x1c) == *(int *)(iVar3 + 0x1c))
      break;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(pdVar6);
  } while (!bVar1);
  *pdVar6 = dVar9 + *pdVar6;
  puVar4 = (uint *)(iVar3 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar5 + 1;
  *(uint *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + (uint)(0xfffffffe < uVar5);
  return;
}

