// FUN_00f2e63c @ 00f2e63c size=312 calls_out=7 calls_in=2
// strings: 

void FUN_00f2e63c(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x6e)) {
  case 0:
    piVar2 = (int *)param_1[0x35];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(param_1[0x35]);
    }
    if (param_1[3] != -0x80000000) {
      FUN_00f25e18();
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    if (param_1[0x31] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[0x31],param_1[0x32]);
    return;
  default:
    goto switchD_00f2e658_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0x7b);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x7a);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x72);
    }
    goto LAB_00f2e714;
  case 4:
    FUN_0193efb0(param_1 + 0x70);
    break;
  case 5:
    FUN_005f2134(param_1 + 0x70);
  }
  FUN_019f8c54(param_1[0x6b],param_1[0x6c]);
LAB_00f2e714:
  if (param_1[0x68] != -0x80000000) {
    FUN_019bb7e0(param_1[0x68],param_1[0x69]);
  }
  *(undefined1 *)((int)param_1 + 0x1b9) = 0;
  FUN_019bb7e0(param_1[0x65],param_1[0x66]);
  *(undefined1 *)((int)param_1 + 0x1ba) = 0;
  if (param_1[0x37] != -0x80000000) {
    FUN_00f25e18();
  }
  piVar2 = (int *)param_1[0x36];
  *(undefined1 *)((int)param_1 + 0x1bb) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195b288(param_1[0x36]);
  }
  *(undefined1 *)(param_1 + 0x6f) = 0;
switchD_00f2e658_caseD_1:
  return;
}

