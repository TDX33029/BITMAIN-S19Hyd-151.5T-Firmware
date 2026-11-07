// FUN_005c19d4 @ 005c19d4 size=312 calls_out=2 calls_in=8
// strings: 

void FUN_005c19d4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_005c5c5c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x30) != '\x03') {
    return;
  }
  if (*(int *)(param_1 + 0x10) != -0x7fffffec) {
    FUN_005c5c5c();
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    piVar5 = (int *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
        puVar4 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar4 = (uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar3 = *(int *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 & 0xfffffffd;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x1c));
        }
      }
    }
    piVar5 = *(int **)(param_1 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00f36f34(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  return;
}

