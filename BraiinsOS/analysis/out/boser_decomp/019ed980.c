// FUN_019ed980 @ 019ed980 size=348 calls_out=4 calls_in=4
// strings: 

void FUN_019ed980(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_2 + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_019edac0;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019edac0:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  iVar2 = *(int *)(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 4))(*(undefined4 *)(param_2 + 0x24));
  }
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_019eda20;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_019eda20:
  pcVar3 = (char *)(param_1 + 8);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar1) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019eda44;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_019eda44:
  FUN_0165098c(pcVar3);
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0x2c));
  }
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        return;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
  return;
}

