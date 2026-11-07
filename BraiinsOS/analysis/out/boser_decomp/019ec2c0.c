// FUN_019ec2c0 @ 019ec2c0 size=208 calls_out=5 calls_in=2
// strings: 

void FUN_019ec2c0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x94);
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (bVar1) {
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019ec2fc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar4);
LAB_019ec2fc:
  FUN_0165098c(pcVar4);
  if (*(char *)(param_1 + 0xac) == '\0') {
    iVar3 = *(int *)(param_1 + 0xa8);
    iVar2 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0xa8) = param_2;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xa4) = param_2;
    }
    else {
      *(undefined4 *)(iVar3 + 4) = param_2;
    }
    DataMemoryBarrier(0xb);
    *(int *)(param_1 + 0x90) = iVar2 + 1;
  }
  else {
    FUN_019d8d64(param_2);
  }
  FUN_01650a90(pcVar4);
  if (*pcVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (bVar1) {
        *pcVar4 = '\0';
        return;
      }
    } while (*pcVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar4);
  return;
}

