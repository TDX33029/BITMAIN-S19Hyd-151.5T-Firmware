// FUN_009d0294 @ 009d0294 size=188 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_009d0294(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = param_1[5];
  iVar2 = *(int *)(iVar3 + 0x84);
  DataMemoryBarrier(0xb);
  if (iVar3 == *param_1 + 8) {
    if (iVar2 == 0) {
      return 1;
    }
    param_1[5] = iVar2;
    iVar4 = *(int *)(iVar2 + 0x84);
    DataMemoryBarrier(0xb);
    iVar3 = iVar2;
  }
  else {
    iVar4 = iVar2;
  }
  if (iVar4 == 0) {
    DataMemoryBarrier(0xb);
    if (param_1[4] != iVar3) {
      return 2;
    }
    iVar2 = *param_1;
    piVar5 = param_1 + 4;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    iVar2 = iVar2 + 8;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2;
    DataMemoryBarrier(0xb);
    *(int *)(iVar4 + 0x84) = iVar2;
    iVar4 = *(int *)(iVar3 + 0x84);
    DataMemoryBarrier(0xb);
    if (iVar4 == 0) {
      return 2;
    }
  }
  param_1[5] = iVar4;
  return 0;
}

