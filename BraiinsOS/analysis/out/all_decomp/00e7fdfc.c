// FUN_00e7fdfc @ 00e7fdfc size=200 calls_out=7 calls_in=0
// strings: 

void FUN_00e7fdfc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x70)) {
  case 0:
    FUN_00e84298(param_1);
    return;
  default:
    goto switchD_00e7fe18_caseD_1;
  case 3:
    FUN_00e7ff70(param_1 + 0x78);
    return;
  case 4:
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00e44660(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),1);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xc0) == '\x03') {
      FUN_00e80bf8(param_1 + 0x80);
    }
    FUN_00e44900(*(undefined4 *)(param_1 + 0x6c));
  }
  if (*(char *)(param_1 + 0x71) != '\0') {
    FUN_00e80a90(param_1 + 0x80);
  }
  piVar2 = *(int **)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x71) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078e66c(*(undefined4 *)(param_1 + 0x68));
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
switchD_00e7fe18_caseD_1:
  return;
}

