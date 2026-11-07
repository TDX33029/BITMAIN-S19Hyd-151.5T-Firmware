// FUN_0163bb84 @ 0163bb84 size=236 calls_out=4 calls_in=2
// strings: 

int FUN_0163bb84(char *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*param_1 == '\0') {
    bVar3 = (bool)hasExclusiveAccess(param_1);
    if (bVar3) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163bbbc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(param_1);
LAB_0163bbbc:
  FUN_0128236c(param_1);
  iVar2 = *(int *)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  bVar3 = iVar2 == 0;
  if (!bVar3) {
    iVar2 = iVar2 + -1;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  if (bVar3) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 == 0) {
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
      }
      *(undefined4 *)(iVar2 + 4) = 0;
    }
  }
  FUN_01282570(param_1);
  if (*param_1 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(param_1);
      if (bVar3) {
        *param_1 = '\0';
        return iVar2;
      }
    } while (*param_1 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(param_1);
  return iVar2;
}

