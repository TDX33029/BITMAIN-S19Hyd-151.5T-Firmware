// FUN_0140ab9c @ 0140ab9c size=300 calls_out=7 calls_in=1
// strings: 

void FUN_0140ab9c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[1] == 0) goto LAB_0140ac80;
  iVar4 = *param_1;
  param_1[1] = 0;
  local_14 = 0;
  pcVar3 = (char *)(iVar4 + 8);
  local_18 = 0;
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_0140abf0;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0140abf0:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  FUN_014089d4(iVar4 + 0x14,&local_18);
  FUN_014089d4(iVar4 + 0xc,&local_18);
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_0140ac5c;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_0140ac5c:
  do {
    iVar4 = FUN_01407ec4(&local_18);
  } while (iVar4 != 0);
  do {
    iVar4 = FUN_01407ec4(&local_18);
  } while (iVar4 != 0);
LAB_0140ac80:
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013cf274(*param_1);
    return;
  }
  return;
}

