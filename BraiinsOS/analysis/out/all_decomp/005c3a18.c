// FUN_005c3a18 @ 005c3a18 size=256 calls_out=3 calls_in=6
// strings: 

void FUN_005c3a18(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_20 [16];
  
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_0162766c(auStack_20,param_1 + 2,*param_1,param_1[1]);
  }
  iVar6 = param_1[2];
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar6 + 0x84);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    FUN_005c9954(iVar6 + 0x20);
    puVar3 = (uint *)(iVar6 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar2 = *(int *)(iVar6 + 0x40);
      *(undefined4 *)(iVar6 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = 0;
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 4))(*(undefined4 *)(iVar6 + 0x44));
      }
    }
  }
  piVar4 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45090(param_1[2]);
    return;
  }
  return;
}

