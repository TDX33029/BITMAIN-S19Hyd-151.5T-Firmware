// FUN_00fba86c @ 00fba86c size=252 calls_out=5 calls_in=11
// strings: 

undefined4 * FUN_00fba86c(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = thunk_FUN_016de0ee(param_1,0x248);
  puVar7 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  uVar3 = *puVar7;
  if (uVar3 < 3) {
    piVar6 = (int *)FUN_015f7ed0();
    uVar3 = *puVar7;
  }
  else {
    piVar6 = (int *)(uVar3 - 8);
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_00fba964;
  }
  if (uVar3 < 3) {
    piVar8 = (int *)FUN_015f7ed0();
  }
  else {
    piVar8 = (int *)(uVar3 - 8);
    do {
      iVar5 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_00fba964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xfba964);
      (*pcVar1)();
    }
  }
  iVar5 = piVar8[2];
  iVar9 = piVar8[3];
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar4 = 1;
  puVar4[1] = 1;
  puVar4[2] = iVar5;
  puVar4[3] = iVar9;
  puVar4[4] = piVar6;
  puVar4[5] = 0;
  puVar4[6] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(piVar8);
  }
  return puVar4;
}

