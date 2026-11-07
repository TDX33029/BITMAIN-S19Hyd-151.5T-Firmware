// FUN_00b9ea9c @ 00b9ea9c size=228 calls_out=3 calls_in=3
// strings: 

void FUN_00b9ea9c(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  cVar2 = *(char *)(param_1 + 2);
  if (cVar2 == '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    goto LAB_00b9eb68;
  }
  if (cVar2 == '\x03') {
    cVar2 = *(char *)(param_1 + 0x16);
    if (cVar2 == '\x03') {
      FUN_00b335a4(param_1 + 7);
      goto LAB_00b9eb40;
    }
LAB_00b9eae4:
    if ((cVar2 == '\0') && (param_1[3] != 0)) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
  }
  else {
    if (cVar2 != '\x04') {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x16);
    if (cVar2 != '\x03') goto LAB_00b9eae4;
    FUN_00b335a4(param_1 + 7);
LAB_00b9eb40:
    *(undefined1 *)((int)param_1 + 0x59) = 0;
  }
  param_1 = param_1 + 1;
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
LAB_00b9eb68:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f3984(*param_1);
    return;
  }
  return;
}

