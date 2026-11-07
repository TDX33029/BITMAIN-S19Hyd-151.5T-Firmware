// FUN_00c93af4 @ 00c93af4 size=620 calls_out=8 calls_in=1
// strings: 

void FUN_00c93af4(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_1 + 0x194) != '\0') {
    if (*(char *)(param_1 + 0x194) == '\x03') {
      FUN_00887914(param_1 + 0x178);
      return;
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 0:
    puVar3 = (undefined4 *)(param_1 + 0x10);
    piVar5 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + -1;
    goto LAB_00c93d5c;
  default:
    goto switchD_00c93b30_caseD_1;
  case 3:
    FUN_00a07b4c(param_1 + 0x20);
    break;
  case 4:
    if (*(char *)(param_1 + 0x54) == '\x03') {
      FUN_00c8526c(param_1 + 0x24);
    }
    break;
  case 5:
    FUN_00a07b4c(param_1 + 0x20);
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x144);
    if (cVar1 == '\x05') {
      if (*(char *)(param_1 + 0x174) == '\x03') {
        puVar3 = *(undefined4 **)(param_1 + 0x170);
        uVar7 = *(undefined4 *)(param_1 + 0x16c);
        pcVar4 = (code *)*puVar3;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
      }
      if (*(int *)(param_1 + 0x154) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x158));
      }
      if (*(int *)(param_1 + 0x148) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14c));
      }
      FUN_00ad8a74(param_1 + 0xb8);
LAB_00c93c8c:
      if (*(int *)(param_1 + 0x138) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x13c));
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x130) + 4);
      for (iVar6 = *(int *)(param_1 + 0x134); iVar6 != 0; iVar6 = iVar6 + -1) {
        if (puVar3[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar3);
        }
        puVar3 = puVar3 + 3;
      }
      if (*(int *)(param_1 + 300) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x130));
      }
      if (*(int *)(param_1 + 0x98) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
      }
    }
    else {
      if (cVar1 == '\x04') {
        puVar3 = *(undefined4 **)(param_1 + 0x14c);
        uVar7 = *(undefined4 *)(param_1 + 0x148);
        pcVar4 = (code *)*puVar3;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        goto LAB_00c93c8c;
      }
      if (cVar1 != '\x03') break;
      if ((*(char *)(param_1 + 0x154) == '\x03') && (*(int *)(param_1 + 0x14c) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),1);
      }
    }
    if (*(int *)(param_1 + 0x11c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x120));
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x114));
    }
    if (*(int *)(param_1 + 0x104) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x108));
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x14);
  piVar5 = (int *)*puVar3;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + -1;
LAB_00c93d5c:
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*puVar3);
  }
switchD_00c93b30_caseD_1:
  FUN_00ac9c30(param_1 + 0x188);
  return;
}

