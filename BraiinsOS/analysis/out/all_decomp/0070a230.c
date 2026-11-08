// FUN_0070a230 @ 0070a230 size=660 calls_out=13 calls_in=2
// strings: 

void FUN_0070a230(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  switch(*(undefined1 *)(param_1 + 0x642)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x634);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x634));
    }
    puVar4 = *(undefined4 **)(param_1 + 0x57c);
    uVar5 = *(undefined4 *)(param_1 + 0x578);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    FUN_00643fc0(param_1 + 0x580);
    puVar4 = (undefined4 *)(param_1 + 0x638);
    FUN_01663cc4(*puVar4);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar4);
      return;
    }
    return;
  default:
    goto switchD_0070a24c_caseD_1;
  case 3:
    if (*(int *)(param_1 + 0x650) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0x650),*(undefined4 *)(param_1 + 0x654),1);
    }
    goto LAB_0070a420;
  case 4:
    FUN_0163bdc0(param_1 + 0x654);
    if (*(int *)(param_1 + 0x664) != 0) {
      (**(code **)(*(int *)(param_1 + 0x664) + 0xc))(*(undefined4 *)(param_1 + 0x668));
    }
    break;
  case 5:
    FUN_0070aa3c(param_1 + 0x678);
    *(undefined1 *)(param_1 + 0x63f) = 0;
    if (*(int *)(param_1 + 0x648) != 3) {
      *(undefined1 *)(param_1 + 0x63d) = 0;
    }
    *(undefined1 *)(param_1 + 0x63d) = 0;
    break;
  case 6:
    FUN_0070a70c(param_1 + 0x720);
  }
  FUN_00703e6c(param_1 + 0x138);
  iVar6 = *(int *)(param_1 + 0x100);
  if (iVar6 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x104);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar6);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
  }
  FUN_00a07b4c(param_1 + 0xa0);
  piVar2 = *(int **)(param_1 + 0x130);
  *(undefined2 *)(param_1 + 0x640) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*(undefined4 *)(param_1 + 0x130));
  }
  FUN_005c3320(param_1 + 0x110);
  FUN_006f625c(*(undefined4 *)(param_1 + 0x628));
LAB_0070a420:
  puVar4 = (undefined4 *)(param_1 + 0x624);
  FUN_01663cc4(*puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
  }
  FUN_00643fc0(param_1);
  if (*(char *)(param_1 + 0x63e) != '\0') {
    puVar4 = *(undefined4 **)(param_1 + 0x64c);
    uVar5 = *(undefined4 *)(param_1 + 0x648);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  piVar2 = *(int **)(param_1 + 0x620);
  *(undefined1 *)(param_1 + 0x63e) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*(undefined4 *)(param_1 + 0x620));
    return;
  }
switchD_0070a24c_caseD_1:
  return;
}

