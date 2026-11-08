// FUN_00c834a0 @ 00c834a0 size=312 calls_out=8 calls_in=1
// strings: 

void FUN_00c834a0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    goto LAB_00c835d4;
  default:
    goto switchD_00c834bc_caseD_1;
  case 3:
    if (param_1[4] != 0) {
      FUN_00c8204c(param_1[4],param_1[5],1);
    }
    goto LAB_00c835b8;
  case 4:
    FUN_00c8369c(param_1 + 4);
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 6);
    if (cVar1 == '\x05') {
      FUN_00654988(param_1 + 7);
    }
    else if (cVar1 == '\x04') {
      FUN_00a07b4c(param_1 + 8);
    }
    else if (cVar1 == '\x03') {
      uVar6 = param_1[7];
      puVar7 = (undefined4 *)param_1[8];
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
    }
  }
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f3984(param_1[2]);
  }
  FUN_00c822ec(param_1[1]);
LAB_00c835b8:
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
LAB_00c835d4:
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*param_1);
    return;
  }
switchD_00c834bc_caseD_1:
  return;
}

