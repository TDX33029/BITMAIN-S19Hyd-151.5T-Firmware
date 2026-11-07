// FUN_0069b11c @ 0069b11c size=156 calls_out=6 calls_in=6
// strings: 

void FUN_0069b11c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),4,4);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),4,4);
  FUN_00b0c000(param_1 + 0x8c);
  FUN_016c9114(param_1);
  FUN_01334b38(param_1 + 0x30);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),4,4);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  if (*(int *)(param_1 + 0x20) != 1) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

