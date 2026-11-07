// FUN_0140a9cc @ 0140a9cc size=320 calls_out=8 calls_in=9
// strings: 

void FUN_0140a9cc(int param_1)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x14) == 0) goto LAB_0140aab4;
  iVar4 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_1c = 0;
  pcVar3 = (char *)(iVar4 + 8);
  local_20 = 0;
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_0140aa24;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0140aa24:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  FUN_014089d4(iVar4 + 0x14,&local_20);
  FUN_014089d4(iVar4 + 0xc,&local_20);
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_0140aa90;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_0140aa90:
  do {
    iVar4 = FUN_01407d80(&local_20);
  } while (iVar4 != 0);
  do {
    iVar4 = FUN_01407d80(&local_20);
  } while (iVar4 != 0);
LAB_0140aab4:
  FUN_0140ab9c(param_1 + 0x10);
  if (param_1 != -1) {
    piVar2 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

