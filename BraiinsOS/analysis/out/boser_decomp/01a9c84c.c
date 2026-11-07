// FUN_01a9c84c @ 01a9c84c size=252 calls_out=7 calls_in=1
// strings: 

void FUN_01a9c84c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x244)) {
  case 0:
    FUN_01a8d084(param_1);
    piVar2 = *(int **)(param_1 + 0x220);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a9c794(*(undefined4 *)(param_1 + 0x220));
    }
    goto LAB_01a9c950;
  default:
    return;
  case 3:
    goto switchD_01a9c868_caseD_3;
  case 4:
    FUN_01a8d0f0(param_1 + 0x248);
    *(undefined1 *)(param_1 + 0x245) = 0;
    break;
  case 5:
    FUN_01a8d0f0(param_1 + 0x248);
  }
  *(undefined2 *)(param_1 + 0x246) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0x22c));
  FUN_01a8d1e8(param_1 + 0x234);
  if (*(int *)(param_1 + 0x150) != 3 || *(int *)(param_1 + 0x154) != 0) {
    FUN_01a8d1b0();
  }
switchD_01a9c868_caseD_3:
  FUN_01a8d084(param_1);
  piVar2 = *(int **)(param_1 + 0x220);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a9c794(*(undefined4 *)(param_1 + 0x220));
  }
LAB_01a9c950:
  FUN_01a8d004(param_1 + 0x224);
  return;
}

