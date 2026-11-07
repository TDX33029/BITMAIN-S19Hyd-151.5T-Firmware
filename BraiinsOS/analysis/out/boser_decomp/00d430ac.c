// FUN_00d430ac @ 00d430ac size=156 calls_out=5 calls_in=4
// strings: 

void FUN_00d430ac(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0160ea2c(*(undefined4 *)(param_1 + 0x84));
  }
  FUN_0142e6dc(param_1);
  FUN_00d432cc(param_1 + 0x40);
  if (*(int *)(param_1 + 0x58) == 2) {
    return;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
  }
  if (*(int *)(param_1 + 0x60) < 0) {
    return;
  }
  FUN_0134aee0(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),4,0x10);
  return;
}

