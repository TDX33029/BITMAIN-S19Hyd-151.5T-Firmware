// FUN_00cf0078 @ 00cf0078 size=372 calls_out=2 calls_in=1
// strings: 

void FUN_00cf0078(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (piVar6 == (int *)0x0) {
    return;
  }
  piVar2 = piVar6 + 0xf;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  if (piVar6[2] == 0 && piVar6[3] == 0) goto LAB_00cf016c;
  if ((char)piVar6[7] == '\0') {
    piVar2 = piVar6 + 4;
    piVar4 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
  }
  else {
    if ((char)piVar6[7] != '\x03') goto LAB_00cf016c;
    piVar2 = (int *)piVar6[6];
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (!bVar1) goto LAB_00cf012c;
      *piVar2 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00cf012c:
      (**(code **)(piVar2[2] + 0x10))();
    }
    piVar2 = piVar6 + 5;
    piVar4 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
  }
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*piVar2);
  }
LAB_00cf016c:
  piVar6[2] = 0;
  piVar6[3] = 0;
  if ((char)iVar3 == '\0') {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00ced03c(piVar6);
    }
  }
  piVar6 = *(int **)(param_1 + 4);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00ced03c(*(undefined4 *)(param_1 + 4));
      return;
    }
  }
  return;
}

