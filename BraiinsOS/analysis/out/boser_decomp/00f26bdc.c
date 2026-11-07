// FUN_00f26bdc @ 00f26bdc size=124 calls_out=2 calls_in=2
// strings: 

void FUN_00f26bdc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x50);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\x03') {
      return;
    }
    FUN_01431b40(param_1);
    puVar4 = (undefined4 *)(param_1 + 0x54);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(*puVar4);
    return;
  }
  return;
}

