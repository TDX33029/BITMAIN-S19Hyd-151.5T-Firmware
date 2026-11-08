// FUN_010e932c @ 010e932c size=408 calls_out=10 calls_in=1
// strings: 

void FUN_010e932c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1cc) == '\0') {
    FUN_00f80320(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    piVar2 = *(int **)(param_1 + 0x1a8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182080(*(undefined4 *)(param_1 + 0x1a8));
    }
    FUN_010e6b50(param_1 + 0x1ac);
    return;
  }
  if (*(char *)(param_1 + 0x1cc) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x110)) {
  case 0:
    FUN_00d32af4(param_1 + 0x28);
    FUN_010e6b50(param_1 + 0xd0);
  default:
    goto switchD_010e935c_caseD_1;
  case 3:
    if ((*(char *)(param_1 + 0x158) == '\x03') && (*(short *)(param_1 + 0x138) == 3)) {
      FUN_00b9391c(*(undefined1 *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x140));
    }
    goto LAB_010e94a8;
  case 4:
    FUN_00f26b8c(param_1 + 0x118);
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x114) = 0;
    FUN_010e6b50(param_1 + 0x118);
    *(undefined1 *)(param_1 + 0x111) = 0;
    FUN_00b76614(param_1 + 0x148);
    *(undefined1 *)(param_1 + 0x112) = 0;
    if (*(int *)(param_1 + 0xa0) == 2) {
      FUN_010e9640();
    }
  }
  piVar2 = *(int **)(param_1 + 0x10c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x10c));
  }
  piVar2 = *(int **)(param_1 + 0x108);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014afd70(*(undefined4 *)(param_1 + 0x108));
  }
  FUN_00b76614(param_1 + 0x90);
LAB_010e94a8:
  FUN_010e6b50(param_1 + 0xec);
  if (*(char *)(param_1 + 0x113) != '\0') {
    FUN_00d32af4(param_1 + 0x160);
  }
  *(undefined1 *)(param_1 + 0x113) = 0;
switchD_010e935c_caseD_1:
  *(undefined4 *)(param_1 + 0x1cd) = 0;
  *(undefined2 *)(param_1 + 0x1d1) = 0;
  return;
}

