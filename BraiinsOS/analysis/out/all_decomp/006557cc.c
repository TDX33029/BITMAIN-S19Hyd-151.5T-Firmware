// FUN_006557cc @ 006557cc size=304 calls_out=6 calls_in=2
// strings: 

void FUN_006557cc(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    goto LAB_006558f8;
  default:
    goto switchD_006557e8_caseD_1;
  case 3:
    FUN_00655990(param_1 + 4);
    if (*(char *)(param_1 + 500) == '\x03') {
      if (*(char *)(param_1 + 0x1f1) == '\x04') {
        FUN_006f625c(param_1[0x1f0]);
      }
      else if ((*(char *)(param_1 + 0x1f1) == '\x03') && (param_1[0x1f2] != 0)) {
        FUN_006f5fbc(param_1[0x1f2],param_1[499],1);
      }
    }
    break;
  case 4:
    if (param_1[3] != 0) {
      FUN_006f5fbc(param_1[3],param_1[4],1);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x12) == '\x03') {
      FUN_00656120(param_1 + 6);
    }
    else if (*(char *)(param_1 + 0x12) == '\0') {
      uVar5 = param_1[4];
      puVar6 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
    }
  }
  param_1 = param_1 + 1;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
LAB_006558f8:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(*param_1);
    return;
  }
switchD_006557e8_caseD_1:
  return;
}

