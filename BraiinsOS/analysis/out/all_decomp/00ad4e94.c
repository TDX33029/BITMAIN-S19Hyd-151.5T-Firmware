// FUN_00ad4e94 @ 00ad4e94 size=316 calls_out=6 calls_in=2
// strings: 

void FUN_00ad4e94(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  switch(*(undefined1 *)(param_1 + 0x364)) {
  case 0:
    FUN_00ad50e8(param_1);
    piVar4 = (int *)(param_1 + 0x350);
    FUN_00d0b738(piVar4);
    piVar2 = (int *)*piVar4;
    if (piVar2 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*piVar4);
      return;
    }
    return;
  default:
    goto switchD_00ad4eb0_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x3c8) == '\x03') {
      FUN_00a07b4c(param_1 + 0x370);
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x3b0) == '\x03') {
      FUN_00654988(param_1 + 0x390);
      *(undefined1 *)(param_1 + 0x3b1) = 0;
    }
    else if ((*(char *)(param_1 + 0x3b0) == '\0') && (*(int *)(param_1 + 0x374) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x378));
    }
    if (*(int *)(param_1 + 0x368) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x36c));
    }
    break;
  case 5:
    break;
  }
  piVar4 = (int *)(param_1 + 0x354);
  FUN_00d0b738(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*piVar4);
    }
  }
  if (*(char *)(param_1 + 0x365) != '\0') {
    FUN_00ad50e8(param_1 + 0x198);
  }
  *(undefined1 *)(param_1 + 0x365) = 0;
switchD_00ad4eb0_caseD_1:
  return;
}

