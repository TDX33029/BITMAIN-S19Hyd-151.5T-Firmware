// FUN_00d8ed84 @ 00d8ed84 size=320 calls_out=7 calls_in=1
// strings: 

void FUN_00d8ed84(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  switch(*(undefined1 *)(param_1 + 0x80)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x18));
    }
    FUN_00d8ffbc(param_1);
    return;
  default:
    goto switchD_00d8eda0_caseD_1;
  case 3:
    FUN_00d8f2bc(param_1 + 0x84);
    break;
  case 4:
    uVar4 = *(undefined4 *)(param_1 + 0x84);
    puVar5 = *(undefined4 **)(param_1 + 0x88);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
    goto LAB_00d8ee48;
  case 5:
    FUN_00d8fa60(param_1 + 0x84);
    break;
  case 6:
    uVar4 = *(undefined4 *)(param_1 + 0x84);
    puVar5 = *(undefined4 **)(param_1 + 0x88);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
LAB_00d8ee48:
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_00d66ffc(param_1 + 0x68);
  }
  *(undefined1 *)(param_1 + 0x81) = 0;
  FUN_00d8efd8(param_1 + 0x38);
  if (*(char *)(param_1 + 0x82) != '\0') {
    FUN_00d8ffbc(param_1 + 0x20);
  }
  *(undefined1 *)(param_1 + 0x82) = 0;
  if (*(char *)(param_1 + 0x83) != '\0') {
    piVar2 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x1c));
    }
  }
  *(undefined1 *)(param_1 + 0x83) = 0;
switchD_00d8eda0_caseD_1:
  return;
}

