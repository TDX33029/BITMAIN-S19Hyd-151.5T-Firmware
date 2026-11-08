// FUN_0193f1b0 @ 0193f1b0 size=208 calls_out=4 calls_in=3
// strings: 

void FUN_0193f1b0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x55) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x2c);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x28);
  }
  if (bVar4 && cVar1 == '\x03') {
    FUN_0193c3cc(param_1 + 8);
  }
  piVar2 = *(int **)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x44));
  }
  piVar2 = *(int **)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x40));
  }
  *(undefined1 *)(param_1 + 0x51) = 0;
  FUN_0193c71c(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_0193c71c(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x53) = 0;
  FUN_0193c71c(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x54) = 0;
  return;
}

