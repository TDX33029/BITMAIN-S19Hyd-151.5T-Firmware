// FUN_00f84d1c @ 00f84d1c size=308 calls_out=10 calls_in=2
// strings: 

void FUN_00f84d1c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x2d4);
  if (cVar1 == '\0') {
    FUN_00ebabdc(param_1);
    FUN_00f8503c(param_1 + 0x2b0);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00d9eef0(param_1 + 0x2f0);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00f850e8(*(undefined4 *)(param_1 + 0x2f4),*(undefined4 *)(param_1 + 0x2f8));
    *(undefined2 *)(param_1 + 0x2da) = 0;
  }
  *(undefined1 *)(param_1 + 0x2d5) = 0;
  if (*(char *)(param_1 + 0x2d6) != '\0') {
    FUN_0142e6dc(param_1 + 0x230);
  }
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x2d6) = 0;
  if ((9 < *(byte *)(param_1 + 0x214)) && (*(int *)(param_1 + 0x21c) != 0)) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x218));
  }
  FUN_01a8c248(param_1 + 0x1e8);
  FUN_0178e884(*(undefined4 *)(param_1 + 0x228));
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  if (*(char *)(param_1 + 0x2d7) != '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2e0),*(undefined4 *)(param_1 + 0x2e4));
  }
  piVar3 = *(int **)(param_1 + 0x2d0);
  *(undefined1 *)(param_1 + 0x2d7) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018537bc(*(undefined4 *)(param_1 + 0x2d0));
  }
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
  }
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  FUN_00f8503c(param_1 + 0x2c4);
  *(undefined1 *)(param_1 + 0x2d9) = 0;
  return;
}

