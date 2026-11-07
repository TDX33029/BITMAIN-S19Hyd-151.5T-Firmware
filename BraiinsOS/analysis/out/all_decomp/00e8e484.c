// FUN_00e8e484 @ 00e8e484 size=300 calls_out=7 calls_in=0
// strings: 

void FUN_00e8e484(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0xda)) {
  case 0:
    FUN_00e84298(param_1 + 0x60);
    return;
  default:
    goto switchD_00e8e4a0_caseD_1;
  case 3:
    FUN_00e7ff70(param_1 + 0xe0);
    return;
  case 4:
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_00e44660(*(int *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4),1);
    }
    goto LAB_00e8e55c;
  case 5:
    cVar1 = *(char *)(param_1 + 0xf4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xf0);
    }
    if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0xe8) != 0)) {
      FUN_00e44660(*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),1);
    }
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0xf4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xf0);
    }
    if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0xe8) != 0)) {
      FUN_00e44660(*(int *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),1);
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x128) == '\x03') {
      FUN_00e80bf8(param_1 + 0xe8);
    }
  }
  FUN_00e44900(*(undefined4 *)(param_1 + 0xd0));
LAB_00e8e55c:
  if (*(char *)(param_1 + 0xd8) != '\0') {
    FUN_00e80a90(param_1);
  }
  piVar2 = *(int **)(param_1 + 0xcc);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078e66c(*(undefined4 *)(param_1 + 0xcc));
  }
  *(undefined1 *)(param_1 + 0xd9) = 0;
switchD_00e8e4a0_caseD_1:
  return;
}

