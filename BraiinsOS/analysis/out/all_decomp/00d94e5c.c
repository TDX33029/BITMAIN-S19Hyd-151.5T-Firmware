// FUN_00d94e5c @ 00d94e5c size=340 calls_out=7 calls_in=1
// strings: 

void FUN_00d94e5c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  switch(*(undefined1 *)(param_1 + 0x780)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x760);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x760));
    }
    FUN_00d95578(param_1);
    return;
  default:
    goto switchD_00d94e78_caseD_1;
  case 3:
    FUN_00d950c8(param_1 + 0x788);
    break;
  case 4:
    puVar5 = *(undefined4 **)(param_1 + 0x78c);
    uVar4 = *(undefined4 *)(param_1 + 0x788);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
    goto LAB_00d94f30;
  case 5:
    FUN_00d952dc(param_1 + 0x788);
    break;
  case 6:
    puVar5 = *(undefined4 **)(param_1 + 0x78c);
    uVar4 = *(undefined4 *)(param_1 + 0x788);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
LAB_00d94f30:
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
  }
  if (*(char *)(param_1 + 0x781) != '\0') {
    FUN_00d66ffc(param_1 + 0x768);
  }
  *(undefined1 *)(param_1 + 0x781) = 0;
  FUN_00d8efd8(param_1 + 0x730);
  if (*(char *)(param_1 + 0x782) != '\0') {
    FUN_00d95578(param_1 + 0x398);
  }
  *(undefined1 *)(param_1 + 0x782) = 0;
  if (*(char *)(param_1 + 0x783) != '\0') {
    piVar2 = *(int **)(param_1 + 0x764);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f324(*(undefined4 *)(param_1 + 0x764));
    }
  }
  *(undefined1 *)(param_1 + 0x783) = 0;
switchD_00d94e78_caseD_1:
  return;
}

