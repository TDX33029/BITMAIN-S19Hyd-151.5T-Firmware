// FUN_019f9800 @ 019f9800 size=288 calls_out=7 calls_in=3
// strings: 

void FUN_019f9800(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_14;
  
  puVar2 = (undefined4 *)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    local_1c = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 3;
  DataMemoryBarrier(0xb);
  switch(local_1c) {
  case 0:
  case 3:
    goto switchD_019f983c_caseD_0;
  case 1:
    break;
  case 2:
    FUN_019e2824(param_2);
    return;
  default:
    local_14 = FUN_012fd02c;
    local_18 = &local_1c;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0058afdf,&local_18,&DAT_01d29ae8);
  }
  pcVar3 = (char *)(param_1 + 0x14);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_019f98e4;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019f98e4:
    FUN_0164fba8(pcVar3);
  }
  FUN_0165098c(pcVar3);
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_019f98bc;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_019f98bc:
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0164ed38(param_1 + 0x10);
    return;
  }
switchD_019f983c_caseD_0:
  return;
}

