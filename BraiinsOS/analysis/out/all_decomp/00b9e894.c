// FUN_00b9e894 @ 00b9e894 size=284 calls_out=5 calls_in=3
// strings: 

void FUN_00b9e894(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  switch(*(undefined1 *)((int)param_1 + 0x1a)) {
  case 0:
    FUN_016af0b0(param_1);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*param_1);
      return;
    }
    return;
  default:
    goto switchD_00b9e8b0_caseD_1;
  case 3:
    uVar4 = param_1[9];
    puVar5 = (undefined4 *)param_1[10];
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
    goto LAB_00b9e94c;
  case 4:
    FUN_00b9f344(param_1 + 8);
    break;
  case 5:
    uVar4 = param_1[7];
    puVar5 = (undefined4 *)param_1[8];
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
LAB_00b9e94c:
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x1a) == '\x03') {
      FUN_00b9f86c(param_1 + 8);
    }
  }
  if (*(char *)((int)param_1 + 0x19) != '\0') {
    puVar5 = param_1 + 7;
    FUN_016af0b0(puVar5);
    piVar2 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar5);
    }
  }
  *(undefined1 *)((int)param_1 + 0x19) = 0;
switchD_00b9e8b0_caseD_1:
  return;
}

