// FUN_009cd018 @ 009cd018 size=220 calls_out=5 calls_in=1
// strings: 

void FUN_009cd018(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  
  DataMemoryBarrier(0xb);
  if ((char)param_1[5] == '\0') goto LAB_009cd0cc;
  iVar3 = *(int *)(*param_1 + 8);
  pcVar2 = (char *)(iVar3 + 0x10);
  if (*pcVar2 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar2);
    if (!bVar1) goto LAB_009cd064;
    *pcVar2 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_009cd064:
    FUN_0164fba8(pcVar2);
  }
  FUN_0165098c(pcVar2);
  if ((char)param_1[5] != '\0') {
    FUN_01a36b28(iVar3 + 0x20,param_1 + 1);
  }
  FUN_01650a90(pcVar2);
  if (*pcVar2 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
      if (bVar1) {
        *pcVar2 = '\0';
        goto LAB_009cd0cc;
      }
    } while (*pcVar2 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar2);
LAB_009cd0cc:
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009cd0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 0xc))(param_1[2]);
  return;
}

