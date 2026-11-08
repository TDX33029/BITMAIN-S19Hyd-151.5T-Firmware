// FUN_00ac7194 @ 00ac7194 size=188 calls_out=1 calls_in=0
// strings: 

void FUN_00ac7194(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[4] == '\0') {
    param_1 = param_1 + 1;
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_00ac7238;
  }
  if ((char)param_1[4] != '\x03') {
    return;
  }
  piVar2 = (int *)param_1[3];
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (!bVar1) goto LAB_00ac720c;
    *piVar2 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00ac720c:
    (**(code **)(piVar2[2] + 0x10))();
  }
  param_1 = param_1 + 2;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_00ac7238:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*param_1);
    return;
  }
  return;
}

