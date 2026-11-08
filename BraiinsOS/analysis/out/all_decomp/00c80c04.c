// FUN_00c80c04 @ 00c80c04 size=460 calls_out=3 calls_in=4
// strings: 

undefined4 FUN_00c80c04(int *param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  
  bVar2 = FUN_00cefe20();
  if (bVar2 != 2) {
    uVar5 = 1;
    if ((bVar2 & 1) == 0) {
      piVar7 = (int *)*param_1;
      if (piVar7 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*param_1);
        }
      }
      uVar5 = 0;
      *param_1 = 0;
    }
    return uVar5;
  }
  iVar8 = *param_1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_0187be18);
  }
  piVar7 = (int *)(iVar8 + 0x20);
  do {
    iVar3 = *piVar7;
    if (iVar3 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar3 != 2) goto LAB_00c80c58;
      iVar3 = param_2[1];
      pcVar6 = *(code **)(*param_2 + 8);
      goto LAB_00c80d94;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_00c80c58:
  if (iVar3 != 0) goto LAB_00c80d9c;
  if (*(undefined4 **)(iVar8 + 0x18) == (undefined4 *)0x0) {
    iVar3 = param_2[1];
LAB_00c80d04:
    uVar9 = (**(code **)*param_2)(iVar3);
    if (*(int *)(iVar8 + 0x18) != 0) {
      (**(code **)(*(int *)(iVar8 + 0x18) + 0xc))(*(undefined4 *)(iVar8 + 0x1c));
    }
    *(undefined8 *)(iVar8 + 0x18) = uVar9;
    iVar3 = *piVar7;
  }
  else {
    iVar3 = param_2[1];
    if (*(int *)(iVar8 + 0x1c) != iVar3 || *(undefined4 **)(iVar8 + 0x18) != (undefined4 *)*param_2)
    goto LAB_00c80d04;
    iVar3 = *piVar7;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar7);
      if (bVar1) {
        *piVar7 = 0;
        DataMemoryBarrier(0xb);
        uVar5 = FUN_00cefe20(param_1);
        return uVar5;
      }
    } while (*piVar7 == 1);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  iVar4 = *(int *)(iVar8 + 0x18);
  iVar3 = *(int *)(iVar8 + 0x1c);
  *(undefined4 *)(iVar8 + 0x18) = 0;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01882284);
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = 0;
  DataMemoryBarrier(0xb);
  pcVar6 = *(code **)(iVar4 + 4);
LAB_00c80d94:
  (*pcVar6)(iVar3);
LAB_00c80d9c:
  uVar5 = FUN_00cefe20(param_1);
  return uVar5;
}

