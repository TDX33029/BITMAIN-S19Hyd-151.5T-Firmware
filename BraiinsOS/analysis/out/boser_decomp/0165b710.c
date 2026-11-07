// FUN_0165b710 @ 0165b710 size=240 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_0165b710(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar5 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar4 = *(code **)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  (*pcVar4)(&local_38);
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  piVar6 = (int *)param_1[1];
  piVar7 = (int *)*piVar6;
  piVar2 = (int *)*piVar7;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016bbfc4(*piVar7);
    }
    FUN_0165b864(piVar7[1]);
    piVar2 = (int *)piVar7[2];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(piVar7[2],piVar7[3]);
    }
  }
  puVar3 = (undefined4 *)*piVar6;
  *puVar3 = local_28;
  puVar3[1] = uStack_24;
  puVar3[2] = uStack_20;
  puVar3[3] = uStack_1c;
  return 1;
}

