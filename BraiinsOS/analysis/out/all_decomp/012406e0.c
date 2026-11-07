// FUN_012406e0 @ 012406e0 size=376 calls_out=2 calls_in=4
// strings: 

void FUN_012406e0(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int *local_18;
  int local_14;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    return;
  }
  if (*param_2 == 1) {
    piVar2 = (int *)param_2[1];
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + 1;
    if (-1 < iVar3) {
      iVar3 = param_2[1];
      iVar4 = param_2[2];
      *param_1 = 1;
      param_1[1] = iVar3;
      param_1[2] = iVar4;
      return;
    }
  }
  else {
    local_20 = 3;
    DataMemoryBarrier(0xb);
    if (param_2[3] == 0) {
      piVar2 = (int *)param_2[1];
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01240844;
      local_18 = (int *)param_2[1];
      local_14 = param_2[2];
      DataMemoryBarrier(0xb);
      FUN_0120d424(&local_28,&local_18);
      if (local_18 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *local_18;
          bVar1 = (bool)hasExclusiveAccess(local_18);
        } while (!bVar1);
        *local_18 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(local_18,local_14);
        }
      }
    }
    piVar2 = (int *)param_2[4];
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + 1;
    if (-1 < iVar3) {
      iVar3 = param_2[4];
      iVar4 = param_2[5];
      piVar2 = (int *)param_2[6];
      do {
        iVar5 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar5 + 1;
      if (-1 < iVar5) {
        iVar5 = param_2[6];
        iVar6 = param_2[7];
        *param_1 = 2;
        param_1[1] = local_28;
        param_1[2] = uStack_24;
        param_1[3] = local_20;
        param_1[4] = iVar3;
        param_1[5] = iVar4;
        param_1[6] = iVar5;
        param_1[7] = iVar6;
        return;
      }
    }
  }
LAB_01240844:
  software_udf(0xfdee,0x1240844);
  return;
}

