// FUN_01a18404 @ 01a18404 size=152 calls_out=3 calls_in=1
// strings: 

void FUN_01a18404(char *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    if (-0x7ffffffe < *(int *)(param_1 + 0x28)) {
      FUN_0134c054(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),4,4);
    }
    param_1[0x28] = '\x02';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = -0x80;
  }
  FUN_01650a90(param_1);
  if (*param_1 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = '\0';
        return;
      }
    } while (*param_1 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(param_1);
  return;
}

