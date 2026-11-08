// FUN_019ed870 @ 019ed870 size=204 calls_out=5 calls_in=1
// strings: 

void FUN_019ed870(char *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019ed8a8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(param_1);
LAB_019ed8a8:
  FUN_0165098c(param_1);
  if (param_1[0xc] == '\0') {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = param_2;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 4) = param_2;
    }
    else {
      *(undefined4 *)(iVar3 + 4) = param_2;
    }
    DataMemoryBarrier(0xb);
    *(int *)(param_1 + 0x10) = iVar2 + 1;
  }
  else {
    FUN_019d8858(param_2);
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

