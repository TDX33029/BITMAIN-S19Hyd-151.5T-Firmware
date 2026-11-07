// FUN_00886ba8 @ 00886ba8 size=152 calls_out=4 calls_in=1
// strings: 

void FUN_00886ba8(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    puVar5 = (undefined4 *)(param_1 + 0x18);
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_00886c98(param_1 + 0x28);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    FUN_00a07b4c(uVar6);
    thunk_FUN_016d3fb4(uVar6);
    puVar5 = (undefined4 *)(param_1 + 0x1c);
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089f0fc(*puVar5);
    return;
  }
  return;
}

