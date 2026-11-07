// FUN_010e7060 @ 010e7060 size=316 calls_out=6 calls_in=2
// strings: 

void FUN_010e7060(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x164)) {
  case 0:
    piVar2 = (int *)(param_1 + 8);
    if (*piVar2 != -0x7fffffff) {
      iVar3 = 8;
      if (*piVar2 == -0x80000000) {
        piVar2 = (int *)(param_1 + 0xc);
        iVar3 = 0xc;
      }
      FUN_019bb7e0(*(undefined4 *)(param_1 + iVar3),piVar2[1]);
    }
    piVar2 = *(int **)(param_1 + 0x160);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_010e71a0;
  default:
    goto switchD_010e707c_caseD_1;
  case 3:
    FUN_010e727c(param_1 + 0x168);
    goto LAB_010e7180;
  case 4:
    goto switchD_010e707c_caseD_4;
  case 5:
    goto switchD_010e707c_caseD_5;
  case 6:
    FUN_010e727c(param_1 + 0x168);
    (**(code **)(*(int *)(param_1 + 0x1d0) + 0x10))
              (param_1 + 0x1dc,*(undefined4 *)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x1d8));
    break;
  case 7:
    FUN_010e727c(param_1 + 0x180);
    FUN_010e7350(param_1 + 0x168);
    break;
  case 8:
    FUN_010e727c(param_1 + 0x180);
    FUN_010e7350(param_1 + 0x168);
    goto LAB_010e7164;
  }
  if (*(char *)(param_1 + 0x148) == '\x0e') {
    *(undefined1 *)(param_1 + 0x165) = 0;
  }
switchD_010e707c_caseD_5:
  *(undefined1 *)(param_1 + 0x165) = 0;
  FUN_010e72cc(param_1 + 0xb0);
LAB_010e7164:
  if (*(int *)(param_1 + 0x18) != 4 || *(int *)(param_1 + 0x1c) != 0) {
    *(undefined1 *)(param_1 + 0x166) = 0;
  }
switchD_010e707c_caseD_4:
  *(undefined1 *)(param_1 + 0x166) = 0;
LAB_010e7180:
  piVar2 = *(int **)(param_1 + 0x160);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_010e71a0:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0160ea2c(*(undefined4 *)(param_1 + 0x160));
  }
switchD_010e707c_caseD_1:
  thunk_FUN_01be4678(param_1);
  return;
}

