// FUN_006c1d9c @ 006c1d9c size=516 calls_out=3 calls_in=1
// strings: 

void FUN_006c1d9c(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_006c0d6c(&local_48);
  if (local_48 != -0x7fffffff) {
    local_30 = local_40;
    iStack_2c = iStack_3c;
    iStack_28 = iStack_38;
    if (local_48 == -0x80000000) {
      piVar6 = (int *)*param_2;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0113b19c(*param_2);
        }
      }
      *param_2 = 0;
    }
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_30;
    param_1[3] = iStack_2c;
    param_1[4] = iStack_28;
    return;
  }
  iVar5 = *param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a4ce8);
  }
  piVar6 = (int *)(iVar5 + 0x2c);
  do {
    iVar2 = *piVar6;
    if (iVar2 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar2 != 2) goto LAB_006c1dfc;
      iVar2 = param_3[1];
      pcVar4 = *(code **)(*param_3 + 8);
      goto LAB_006c1f64;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_006c1dfc:
  if (iVar2 != 0) goto LAB_006c1f6c;
  if (*(undefined4 **)(iVar5 + 0x24) == (undefined4 *)0x0) {
    iVar2 = param_3[1];
LAB_006c1ed0:
    uVar7 = (**(code **)*param_3)(iVar2);
    if (*(int *)(iVar5 + 0x24) != 0) {
      (**(code **)(*(int *)(iVar5 + 0x24) + 0xc))(*(undefined4 *)(iVar5 + 0x28));
    }
    *(undefined8 *)(iVar5 + 0x24) = uVar7;
    iVar2 = *piVar6;
  }
  else {
    iVar2 = param_3[1];
    if (*(int *)(iVar5 + 0x28) != iVar2 || *(undefined4 **)(iVar5 + 0x24) != (undefined4 *)*param_3)
    goto LAB_006c1ed0;
    iVar2 = *piVar6;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *piVar6 = 0;
        DataMemoryBarrier(0xb);
        goto LAB_006c1f6c;
      }
    } while (*piVar6 == 1);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(iVar5 + 0x24);
  iVar2 = *(int *)(iVar5 + 0x28);
  *(undefined4 *)(iVar5 + 0x24) = 0;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01882284);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 0;
  DataMemoryBarrier(0xb);
  pcVar4 = *(code **)(iVar3 + 4);
LAB_006c1f64:
  (*pcVar4)(iVar2);
LAB_006c1f6c:
  FUN_006c0d6c(param_1,param_2);
  return;
}

