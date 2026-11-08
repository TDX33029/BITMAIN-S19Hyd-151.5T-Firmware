// FUN_01a8d548 @ 01a8d548 size=312 calls_out=8 calls_in=2
// strings: 

void FUN_01a8d548(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = param_1[4];
    }
    if (bVar3 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
switchD_01a8d580_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (5 < *(byte *)(param_1 + 0x93)) {
    return;
  }
  switch(*(byte *)(param_1 + 0x93)) {
  case 0:
    FUN_01a8d084(param_1 + 2);
    piVar2 = (int *)param_1[0x8a];
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a9c794(param_1[0x8a]);
    }
    goto LAB_01a8d68c;
  default:
    goto switchD_01a8d580_caseD_1;
  case 3:
    goto switchD_01a8d580_caseD_3;
  case 4:
    FUN_01a8d0f0(param_1 + 0x94);
    *(undefined1 *)((int)param_1 + 0x24d) = 0;
    break;
  case 5:
    FUN_01a8d0f0(param_1 + 0x94);
  }
  *(undefined2 *)((int)param_1 + 0x24e) = 0;
  FUN_019bb7e0(param_1[0x8c],param_1[0x8d]);
  FUN_01a8d1e8(param_1 + 0x8f);
  if (param_1[0x56] != 3 || param_1[0x57] != 0) {
    FUN_01a8d1b0(param_1 + 0x56);
  }
switchD_01a8d580_caseD_3:
  FUN_01a8d084(param_1 + 2);
  piVar2 = (int *)param_1[0x8a];
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar3 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar3);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a9c794(param_1[0x8a]);
  }
LAB_01a8d68c:
  FUN_01a8d004(param_1 + 0x8b);
  return;
}

