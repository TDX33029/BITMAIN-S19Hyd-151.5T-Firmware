// FUN_008b5760 @ 008b5760 size=500 calls_out=3 calls_in=9
// strings: 

void FUN_008b5760(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  FUN_00cef7a0(&local_40);
  if ((char)local_38 != '\x03') {
    local_30 = local_40;
    uStack_2c = uStack_3c;
    uStack_28 = local_38;
    if ((local_38 & 0xff) == 2) {
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
          FUN_0078f014(*param_2);
        }
      }
      *param_2 = 0;
    }
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    return;
  }
  iVar5 = *param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_0187be18);
  }
  piVar6 = (int *)(iVar5 + 0x20);
  do {
    iVar2 = *piVar6;
    if (iVar2 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar2 != 2) goto LAB_008b57c0;
      iVar2 = param_3[1];
      pcVar4 = *(code **)(*param_3 + 8);
      goto LAB_008b5918;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_008b57c0:
  if (iVar2 != 0) goto LAB_008b5920;
  if (*(undefined4 **)(iVar5 + 0x18) == (undefined4 *)0x0) {
    iVar2 = param_3[1];
LAB_008b5888:
    uVar7 = (**(code **)*param_3)(iVar2);
    if (*(int *)(iVar5 + 0x18) != 0) {
      (**(code **)(*(int *)(iVar5 + 0x18) + 0xc))(*(undefined4 *)(iVar5 + 0x1c));
    }
    *(undefined8 *)(iVar5 + 0x18) = uVar7;
    iVar2 = *piVar6;
  }
  else {
    iVar2 = param_3[1];
    if (*(int *)(iVar5 + 0x1c) != iVar2 || *(undefined4 **)(iVar5 + 0x18) != (undefined4 *)*param_3)
    goto LAB_008b5888;
    iVar2 = *piVar6;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *piVar6 = 0;
        DataMemoryBarrier(0xb);
        goto LAB_008b5920;
      }
    } while (*piVar6 == 1);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(iVar5 + 0x18);
  iVar2 = *(int *)(iVar5 + 0x1c);
  *(undefined4 *)(iVar5 + 0x18) = 0;
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
LAB_008b5918:
  (*pcVar4)(iVar2);
LAB_008b5920:
  FUN_00cef7a0(param_1,param_2);
  return;
}

