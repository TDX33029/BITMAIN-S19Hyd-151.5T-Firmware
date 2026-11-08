// FUN_01a9a14c @ 01a9a14c size=240 calls_out=6 calls_in=1
// strings: 

void FUN_01a9a14c(int param_1)

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
    goto LAB_01a9a244;
  default:
    return;
  case 3:
    goto switchD_01a9a168_caseD_3;
  case 4:
    FUN_01a9a37c(param_1 + 0x248);
    *(undefined1 *)(param_1 + 0x245) = 0;
    break;
  case 5:
    FUN_01a9a37c(param_1 + 0x248);
  }
  *(undefined2 *)(param_1 + 0x246) = 0;
  FUN_01a9a400(param_1 + 0x228);
  if (*(int *)(param_1 + 0x150) != 3 || *(int *)(param_1 + 0x154) != 0) {
    FUN_01a9a428();
  }
switchD_01a9a168_caseD_3:
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
LAB_01a9a244:
  FUN_01a8d004(param_1 + 0x224);
  return;
}

