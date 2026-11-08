// FUN_00f26938 @ 00f26938 size=304 calls_out=8 calls_in=2
// strings: 

void FUN_00f26938(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0xe8)) {
  case 0:
    FUN_00d32af4(param_1);
    FUN_006763fc(param_1 + 0xa8);
    return;
  default:
    goto switchD_00f26954_caseD_1;
  case 3:
    if ((*(char *)(param_1 + 0x130) == '\x03') && (*(short *)(param_1 + 0x110) == 3)) {
      FUN_0183a528(param_1 + 0x114);
    }
    goto LAB_00f26a58;
  case 4:
    FUN_00f26b8c(param_1 + 0xf0);
    break;
  case 5:
    *(undefined1 *)(param_1 + 0xec) = 0;
    FUN_006763fc(param_1 + 0xf0);
    *(undefined1 *)(param_1 + 0xe9) = 0;
    FUN_00b76614(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0xea) = 0;
    if (*(int *)(param_1 + 0x78) == 2) {
      FUN_00f26bc4();
    }
  }
  piVar2 = *(int **)(param_1 + 0xe4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0xe4));
  }
  piVar2 = *(int **)(param_1 + 0xe0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014afd70(*(undefined4 *)(param_1 + 0xe0));
  }
  FUN_00b76614(param_1 + 0x68);
LAB_00f26a58:
  FUN_006763fc(param_1 + 0xc4);
  if (*(char *)(param_1 + 0xeb) != '\0') {
    FUN_00d32af4(param_1 + 0x138);
  }
  *(undefined1 *)(param_1 + 0xeb) = 0;
switchD_00f26954_caseD_1:
  return;
}

