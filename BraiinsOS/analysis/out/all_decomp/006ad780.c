// FUN_006ad780 @ 006ad780 size=508 calls_out=4 calls_in=3
// strings: 

void FUN_006ad780(undefined4 param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_1b0 [50];
  int local_e8 [50];
  
  FUN_006ada28(local_1b0);
  if (local_1b0[0] != -0x7fffffff) {
    FUN_016dd1aa(local_e8,local_1b0,0xc4);
    if (local_e8[0] == -0x80000000) {
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
          FUN_0105aee4(*param_2);
        }
      }
      *param_2 = 0;
    }
    FUN_016dd1aa(param_1,local_e8,0xc4);
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
      if (iVar2 != 2) goto LAB_006ad7e0;
      iVar2 = param_3[1];
      pcVar4 = *(code **)(*param_3 + 8);
      goto LAB_006ad940;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_006ad7e0:
  if (iVar2 != 0) goto LAB_006ad948;
  if (*(undefined4 **)(iVar5 + 0x24) == (undefined4 *)0x0) {
    iVar2 = param_3[1];
LAB_006ad8b0:
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
    goto LAB_006ad8b0;
    iVar2 = *piVar6;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *piVar6 = 0;
        DataMemoryBarrier(0xb);
        goto LAB_006ad948;
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
LAB_006ad940:
  (*pcVar4)(iVar2);
LAB_006ad948:
  FUN_006ada28(param_1,param_2);
  return;
}

