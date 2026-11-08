// FUN_012047d8 @ 012047d8 size=188 calls_out=3 calls_in=2
// strings: 

void FUN_012047d8(char *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)(param_1 + 0x68);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    if (((1 < *(int *)(param_1 + 8) - 3U) && (iVar2 = *(int *)(param_1 + 0x34), iVar2 != 0)) &&
       (uVar4 = iVar2 * 0x11 + 0x14U & 0xfffffffc, iVar2 + uVar4 != -5)) {
      thunk_FUN_01be4678(*(int *)(param_1 + 0x30) - uVar4);
    }
    param_1[8] = '\x04';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
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

