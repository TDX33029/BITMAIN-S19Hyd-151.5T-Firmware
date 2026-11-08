// FUN_00761800 @ 00761800 size=180 calls_out=4 calls_in=1
// strings: 

void FUN_00761800(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x978) == '\0') {
    FUN_0074b190(param_1);
    piVar2 = *(int **)(param_1 + 0x140);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00795ca8(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144));
    }
    FUN_0075d5b4(param_1 + 0x80);
    return;
  }
  if (*(char *)(param_1 + 0x978) != '\x03') {
    return;
  }
  FUN_00761c4c(param_1 + 0x210);
  FUN_0075d5b4(param_1 + 0x150);
  piVar2 = *(int **)(param_1 + 0x148);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00795ca8(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
  }
  *(undefined1 *)(param_1 + 0x979) = 0;
  return;
}

