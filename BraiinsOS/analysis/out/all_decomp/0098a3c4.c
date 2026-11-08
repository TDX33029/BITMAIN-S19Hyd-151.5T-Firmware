// FUN_0098a3c4 @ 0098a3c4 size=252 calls_out=6 calls_in=2
// strings: 

void FUN_0098a3c4(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if ((*(char *)(param_1 + 10) == '\x03') && (param_1[8] != 0)) {
        FUN_0099a108(param_1[8],param_1[9],1);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_0098a598(param_1 + 0x92);
      *(undefined1 *)((int)param_1 + 0x19) = 0;
      if (param_1[8] != 3) {
        FUN_0096d5f4();
      }
      FUN_00999f24(param_1[5]);
    }
    FUN_0099155c(param_1[3]);
    piVar3 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(param_1[3]);
    }
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    return;
  }
  FUN_0099155c(*param_1);
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa79bc(*param_1);
    return;
  }
  return;
}

