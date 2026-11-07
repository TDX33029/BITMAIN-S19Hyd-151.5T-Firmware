// FUN_009cbf08 @ 009cbf08 size=176 calls_out=2 calls_in=0
// strings: 

void FUN_009cbf08(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\x02') {
    puVar5 = (undefined4 *)(param_1 + 0x2c);
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else if (cVar1 == '\x03') {
    puVar5 = (undefined4 *)(param_1 + 0x28);
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    puVar5 = (undefined4 *)(param_1 + 0x28);
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
    FUN_009ba06c(*puVar5);
    return;
  }
  return;
}

