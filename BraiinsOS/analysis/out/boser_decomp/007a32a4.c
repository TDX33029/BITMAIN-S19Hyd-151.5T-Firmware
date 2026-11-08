// FUN_007a32a4 @ 007a32a4 size=236 calls_out=7 calls_in=2
// strings: 

void FUN_007a32a4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x11b) == '\x03') {
    if (*(char *)(param_1 + 0x31) == '\x04') {
      if (*(char *)(param_1 + 0xdd) == '\x03') {
        FUN_007a715c((int *)(param_1 + 0x9c));
        if (*(int *)(param_1 + 0x9c) == 0) {
          FUN_0079af8c(param_1 + 0xa0);
        }
        piVar2 = *(int **)(param_1 + 0xa4);
        if (piVar2 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_007a6ab8(*(undefined4 *)(param_1 + 0xa4));
          }
        }
        FUN_01431b40(param_1 + 0x48);
      }
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      *(undefined1 *)(param_1 + 0x30) = 0;
      FUN_0079af8c(param_1 + 0x34);
    }
    else if (*(char *)(param_1 + 0x31) == '\x03') {
      FUN_007a3590(param_1 + 0x50);
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
    FUN_0079af1c(param_1);
    *(undefined2 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x11a) = 0;
  }
  return;
}

