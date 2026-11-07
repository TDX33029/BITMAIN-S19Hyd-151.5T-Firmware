// FUN_0095b878 @ 0095b878 size=108 calls_out=4 calls_in=0
// strings: 

void FUN_0095b878(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    piVar2 = *(int **)(param_1 + 0x4c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x4c));
    }
    FUN_00b40204(param_1 + 0x50);
    FUN_0095de10(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x60) == '\x03') {
    FUN_0095da10(param_1 + 0x68);
    return;
  }
  return;
}

