// FUN_00d04380 @ 00d04380 size=352 calls_out=5 calls_in=1
// strings: 

void FUN_00d04380(int *param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(*param_1);
  }
  piVar6 = (int *)param_1[1];
  piVar2 = piVar6 + 0x47;
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(piVar6 + 0x42);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04b1c(param_1[1]);
  }
  piVar6 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  piVar2 = piVar6 + 0x21;
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    FUN_00c74f48(piVar6 + 8);
    puVar3 = (uint *)(piVar6 + 0x12);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar4 = piVar6[0x10];
      piVar6[0x10] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(piVar6[0x11]);
      }
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04c88(param_1[3]);
    return;
  }
  return;
}

