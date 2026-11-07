// FUN_00bbacb4 @ 00bbacb4 size=316 calls_out=11 calls_in=1
// strings: 

void FUN_00bbacb4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch((char)param_1[0x1e]) {
  case '\0':
    FUN_0193cf34(param_1 + 3);
    if (*param_1 == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  default:
    goto switchD_00bbacd0_caseD_1;
  case '\x03':
    if ((char)param_1[0x53] == '\x03') {
      FUN_005f246c(param_1 + 0x20);
    }
    goto LAB_00bbadd8;
  case '\x04':
    FUN_005f0ff8(param_1 + 0x20);
    goto LAB_00bbadc4;
  case '\x05':
    FUN_00bd34e8(param_1 + 0x20);
    goto LAB_00bbad7c;
  case '\x06':
    FUN_00bd3ab4(param_1 + 0x20);
    break;
  case '\a':
    FUN_005f0348(param_1 + 0x26);
    FUN_005f8270(param_1 + 0x20);
    *(undefined1 *)((int)param_1 + 0x7d) = 0;
  }
  if ((char)param_1[0x1f] != '\0') {
    FUN_005f78e0(param_1 + 0x15);
  }
LAB_00bbad7c:
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (*(char *)((int)param_1 + 0x79) != '\0') {
    piVar2 = (int *)param_1[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195ae2c(param_1[0x14]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x79) = 0;
LAB_00bbadc4:
  if (*(char *)((int)param_1 + 0x7a) != '\0') {
    FUN_005fb2fc(param_1 + 10);
  }
LAB_00bbadd8:
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  if (param_1[7] != -0x80000000) {
    FUN_019bb7e0(param_1[7],param_1[8]);
  }
  if (*(char *)((int)param_1 + 0x7b) != '\0') {
    FUN_0193cf34(param_1 + 5);
  }
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
switchD_00bbacd0_caseD_1:
  return;
}

