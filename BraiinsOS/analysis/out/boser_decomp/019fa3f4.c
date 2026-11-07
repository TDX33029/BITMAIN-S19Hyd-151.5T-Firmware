// FUN_019fa3f4 @ 019fa3f4 size=220 calls_out=4 calls_in=1
// strings: 

void FUN_019fa3f4(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    piVar3 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db648(param_1[6]);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 4) {
    FUN_00b91e68(param_1[6],param_1[7]);
    return;
  }
  uVar4 = param_1[2];
  uVar6 = uVar4 - 2;
  if (uVar4 < 2) {
    uVar6 = 2;
  }
  if (uVar6 < 2) {
    cVar2 = (char)param_1[3];
    if (cVar2 == '\x04') goto LAB_019fa354;
  }
  else {
    if (uVar4 == 0) goto LAB_019fa354;
    cVar2 = (char)param_1[3];
  }
  FUN_0069d8a4(cVar2,param_1[4]);
LAB_019fa354:
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

