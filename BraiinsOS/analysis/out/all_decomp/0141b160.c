// FUN_0141b160 @ 0141b160 size=312 calls_out=2 calls_in=1
// strings: 

void FUN_0141b160(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  
  if ((char)param_1[2] == '\x02') {
    return;
  }
  iVar2 = *param_1;
  DataMemoryBarrier(0xb);
  piVar5 = (int *)(iVar2 + 0x20);
  do {
    iVar3 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar2 + 0x1c)) {
      puVar4 = (uint *)(iVar2 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    puVar4 = (uint *)(iVar2 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 == 0) {
      iVar3 = *(int *)(iVar2 + 0x24);
      *(undefined4 *)(iVar2 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar2 + 0x28));
      }
    }
  }
  piVar5 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a582c(*param_1);
  }
  piVar5 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b4e7c(param_1[1]);
    return;
  }
  return;
}

