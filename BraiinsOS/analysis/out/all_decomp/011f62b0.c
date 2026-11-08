// FUN_011f62b0 @ 011f62b0 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_011f62b0(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  param_1 = (undefined4 *)*param_1;
  piVar6 = (int *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  *param_1 = 0;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  iVar4 = piVar6[2];
  if (iVar4 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar4 + 0x14) != 0) {
      FUN_011f6248(iVar4 + 0xc,iVar4);
    }
    uVar7 = FUN_0123a948(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
                         *(int *)*piVar6 + 8,((int *)*piVar6)[1]);
    *puVar5 = uVar7;
    return;
  }
  puVar2 = (undefined4 *)*piVar6;
  piVar6 = (int *)*puVar2;
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + 1;
  if (iVar4 < 0) {
    software_udf(0xfdee,0x11f633c);
    return;
  }
  uVar3 = puVar2[1];
  *(undefined4 *)puVar5 = *puVar2;
  *(undefined4 *)((int)puVar5 + 4) = uVar3;
  return;
}

