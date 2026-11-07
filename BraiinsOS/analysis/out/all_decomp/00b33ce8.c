// FUN_00b33ce8 @ 00b33ce8 size=200 calls_out=5 calls_in=1
// strings: 

void FUN_00b33ce8(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
      return;
    }
    return;
  default:
    goto switchD_00b33d04_caseD_1;
  case 3:
    FUN_00acb9a8(param_1 + 7);
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x26);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)((int)param_1 + 0x95);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00accc50(param_1 + 10);
    }
    piVar2 = (int *)param_1[8];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(param_1[8]);
    }
    break;
  case 5:
    FUN_00b317ec(param_1 + 8);
  }
  *(undefined1 *)((int)param_1 + 0x19) = 0;
switchD_00b33d04_caseD_1:
  return;
}

