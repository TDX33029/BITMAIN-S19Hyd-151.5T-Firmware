// FUN_01538d58 @ 01538d58 size=380 calls_out=2 calls_in=4
// strings: 

void FUN_01538d58(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int *local_20;
  int local_1c;
  
  if (*param_2 == 0) {
    uVar4 = 0;
LAB_01538e3c:
    *param_1 = uVar4;
    return;
  }
  if (*param_2 == 1) {
    piVar3 = (int *)param_2[1];
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + 1;
    if (-1 < iVar5) {
      iVar5 = param_2[2];
      *param_1 = 1;
      param_1[1] = piVar3;
      param_1[2] = iVar5;
      return;
    }
  }
  else {
    local_28 = 3;
    DataMemoryBarrier(0xb);
    if (param_2[3] == 0) {
      piVar3 = (int *)param_2[1];
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_01538ed0;
      local_1c = param_2[2];
      DataMemoryBarrier(0xb);
      local_20 = piVar3;
      FUN_01551890(&local_30,&local_20);
      if (local_20 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *local_20;
          bVar2 = (bool)hasExclusiveAccess(local_20);
        } while (!bVar2);
        *local_20 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(local_20,local_1c);
        }
      }
    }
    piVar3 = (int *)param_2[4];
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + 1;
    if (-1 < iVar5) {
      iVar5 = param_2[5];
      piVar6 = (int *)param_2[6];
      do {
        iVar7 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar7 + 1;
      if (-1 < iVar7) {
        iVar7 = param_2[7];
        param_1[1] = local_30;
        param_1[2] = uStack_2c;
        param_1[3] = local_28;
        param_1[4] = piVar3;
        uVar4 = 2;
        param_1[5] = iVar5;
        param_1[6] = piVar6;
        param_1[7] = iVar7;
        goto LAB_01538e3c;
      }
    }
  }
LAB_01538ed0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1538ed0);
  (*pcVar1)();
}

