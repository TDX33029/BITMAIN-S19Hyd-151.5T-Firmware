// FUN_00ad75b0 @ 00ad75b0 size=168 calls_out=4 calls_in=5
// strings: 

void FUN_00ad75b0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    if (*(char *)(param_1 + 0x7c) == '\x03') {
      FUN_00887914(param_1 + 0x60);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    puVar2 = (undefined4 *)(param_1 + 0x50);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\x03') goto LAB_00ad764c;
    FUN_00a07b4c(param_1);
    puVar2 = (undefined4 *)(param_1 + 0x54);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f3984(*puVar2);
  }
LAB_00ad764c:
  FUN_00ac9c30(param_1 + 0x70);
  return;
}

