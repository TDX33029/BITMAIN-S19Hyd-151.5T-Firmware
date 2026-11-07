// FUN_0163a560 @ 0163a560 size=300 calls_out=7 calls_in=5
// strings: 

void FUN_0163a560(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  
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
    goto switchD_0163a598_caseD_0;
  case 1:
    break;
  case 2:
    FUN_01647770(param_2);
    return;
  default:
    local_14 = &LAB_00fac484;
    local_18 = &local_1c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0058a589,&local_18,&DAT_018ac5fc);
  }
  pcVar3 = (char *)(param_1 + 0x14);
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_0163a650;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0163a650:
    FUN_01280da8(pcVar3);
  }
  FUN_0128236c(pcVar3);
  FUN_01282570(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        goto LAB_0163a628;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar3);
LAB_0163a628:
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0127f8bc(param_1 + 0x10);
    return;
  }
switchD_0163a598_caseD_0:
  return;
}

