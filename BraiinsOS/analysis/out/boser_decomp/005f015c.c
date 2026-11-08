// FUN_005f015c @ 005f015c size=208 calls_out=7 calls_in=2
// strings: 

void FUN_005f015c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0xad)) {
  case 3:
    if (*(char *)(param_1 + 0xcc) == '\x03') {
      FUN_00b71be0(param_1 + 0xb8);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0xcc) == '\x03') {
      FUN_00b71be0(param_1 + 0xb8);
    }
    goto LAB_005f0214;
  case 5:
    goto switchD_005f017c_caseD_5;
  case 6:
    if (*(char *)(param_1 + 0x105) == '\x03') {
      FUN_00740564(param_1 + 0xb0);
      *(undefined1 *)(param_1 + 0x104) = 0;
    }
    break;
  case 7:
    FUN_005f201c(param_1 + 0xb0);
    break;
  default:
    goto switchD_005f017c_default;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
  piVar2 = *(int **)(param_1 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db41c(*(undefined4 *)(param_1 + 0x98));
  }
switchD_005f017c_caseD_5:
  FUN_005f70b4(param_1 + 0x5c);
LAB_005f0214:
  FUN_005f9af0(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0xac) = 0;
switchD_005f017c_default:
  return;
}

