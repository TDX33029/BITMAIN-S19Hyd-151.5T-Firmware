// FUN_016c2750 @ 016c2750 size=184 calls_out=6 calls_in=2
// strings: 

void FUN_016c2750(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),4,4);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),4,4);
  uVar4 = *(undefined4 *)(param_1 + 0x90);
  FUN_016c2868(uVar4,*(undefined4 *)(param_1 + 0x94));
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x8c),uVar4,4,8);
  FUN_016c9114(param_1);
  FUN_01334b38(param_1 + 0x30);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),4,4);
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  if (*(int *)(param_1 + 0x20) == 1) {
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
  }
  return;
}

