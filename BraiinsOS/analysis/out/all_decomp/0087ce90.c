// FUN_0087ce90 @ 0087ce90 size=140 calls_out=2 calls_in=0
// strings: 

void FUN_0087ce90(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x179) == '\0') {
    puVar2 = (undefined4 *)(param_1 + 0x168);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x179) != '\x03') {
      return;
    }
    FUN_0087f01c();
    puVar2 = (undefined4 *)(param_1 + 0x160);
    piVar3 = (int *)*puVar2;
    *(undefined1 *)(param_1 + 0x178) = 0;
    *(undefined1 *)(param_1 + 0x174) = 0;
    *(undefined2 *)(param_1 + 0x176) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*puVar2,puVar2[1]);
    return;
  }
  return;
}

