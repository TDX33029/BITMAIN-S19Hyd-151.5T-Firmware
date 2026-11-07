// FUN_007090f0 @ 007090f0 size=584 calls_out=8 calls_in=1
// strings: 

void FUN_007090f0(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  switch(*(undefined1 *)(param_1 + 0x44)) {
  case 0:
    piVar3 = *(int **)(param_1 + 0x38);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x38));
    }
    puVar7 = (undefined4 *)(param_1 + 0x3c);
    FUN_01663cc4(*puVar7);
    piVar3 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
      return;
    }
    return;
  default:
    goto switchD_0070910c_caseD_1;
  case 3:
    FUN_007094f0(param_1 + 0x48);
    goto LAB_007092bc;
  case 4:
    if (*(char *)(param_1 + 0x84) == '\x03') {
      FUN_00703698(param_1 + 0x54);
    }
    else if (*(char *)(param_1 + 0x84) == '\0') {
      uVar6 = *(undefined4 *)(param_1 + 0x4c);
      puVar7 = *(undefined4 **)(param_1 + 0x50);
      if ((code *)*puVar7 != (code *)0x0) {
        (*(code *)*puVar7)(uVar6);
      }
      goto LAB_00709204;
    }
    break;
  case 5:
    uVar6 = *(undefined4 *)(param_1 + 0x48);
    puVar7 = *(undefined4 **)(param_1 + 0x4c);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar6);
    }
LAB_00709204:
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
    }
    break;
  case 7:
    FUN_0070a230(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    puVar7 = *(undefined4 **)(param_1 + 0x2c);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_1 + 0x41) == '\0') {
LAB_007092cc:
    *(undefined1 *)(param_1 + 0x41) = 0;
    cVar1 = *(char *)(param_1 + 0x42);
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    puVar7 = *(undefined4 **)(param_1 + 0x24);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] == 0) goto LAB_007092cc;
    thunk_FUN_016d3fb4(uVar6);
    *(undefined1 *)(param_1 + 0x41) = 0;
LAB_007092bc:
    cVar1 = *(char *)(param_1 + 0x42);
  }
  if (cVar1 != '\0') {
    puVar7 = (undefined4 *)(param_1 + 0x34);
    FUN_01663cc4(*puVar7);
    piVar3 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar7);
    }
  }
  piVar3 = *(int **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x42) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*(undefined4 *)(param_1 + 0x30));
    return;
  }
switchD_0070910c_caseD_1:
  return;
}

