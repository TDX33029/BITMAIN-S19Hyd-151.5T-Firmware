// FUN_01aa0178 @ 01aa0178 size=616 calls_out=5 calls_in=2
// strings: enum value

void FUN_01aa0178(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  piVar6 = (int *)0x0;
  if (*(int *)(param_6 + 0x24) != -0x80000000) {
    piVar6 = (int *)(param_6 + 0x24);
  }
  FUN_01aa0048(&local_38,param_4,param_5,&DAT_0056cb60,4,piVar6);
  iVar4 = iStack_2c;
  iVar3 = iStack_30;
  iVar8 = local_34;
  if (local_38 == 0) {
    FUN_006666fc(&local_38,iStack_30,iStack_2c);
    do {
      iVar5 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_01aa03dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1aa03dc);
      (*pcVar1)();
    }
    piVar6 = (int *)FUN_01aa33b0(param_2 + 0x20,&local_38,param_3);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a9c644();
      }
    }
    if (*(int *)(param_6 + 8) != 0) {
      iVar9 = *(int *)(param_6 + 4);
      iVar5 = iVar9 + *(int *)(param_6 + 8) * 0x24;
      do {
        piVar6 = (int *)0x0;
        if (*(int *)(iVar9 + 8) != -0x80000000) {
          piVar6 = (int *)(iVar9 + 8);
        }
        FUN_01aa0048(&local_38,iVar3,iVar4,"enum value",10,piVar6);
        if (local_38 != 0) {
          *param_1 = local_34;
          param_1[1] = iStack_30;
          param_1[2] = iStack_2c;
          FUN_019bb7e0(iVar8,iVar3);
          goto LAB_01aa03a0;
        }
        iVar9 = iVar9 + 0x24;
        local_38 = local_34;
        local_34 = iStack_30;
        iStack_30 = iStack_2c;
        do {
          iVar7 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_01aa03dc;
        piVar6 = (int *)FUN_01aa33b0(param_2 + 0x20,&local_38,param_3);
        if (piVar6 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a9c644();
          }
        }
      } while (iVar9 != iVar5);
    }
    *param_1 = -0x7fffffff;
    FUN_019bb7e0(iVar8,iVar3);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar8 + -1;
  }
  else {
    *param_1 = local_34;
    param_1[1] = iStack_30;
    param_1[2] = iStack_2c;
LAB_01aa03a0:
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar8 + -1;
  }
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a9c644(param_3);
    return;
  }
  return;
}

