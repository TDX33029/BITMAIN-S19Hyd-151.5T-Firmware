// FUN_00ea9188 @ 00ea9188 size=836 calls_out=3 calls_in=0
// strings: 

void FUN_00ea9188(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  
  iVar6 = *param_2;
  if (iVar6 == 0) {
LAB_00ea9214:
    local_30 = -0x7fffffec;
    local_2c = local_40;
    iStack_28 = iStack_3c;
    iStack_24 = iStack_38;
LAB_00ea9228:
    *param_2 = 0;
    goto LAB_00ea943c;
  }
  FUN_005bc180(&local_30,iVar6 + 8);
  piVar2 = (int *)(iVar6 + 0x10);
  if (local_30 == -0x7fffffec) {
    DataMemoryBarrier(0xb);
    if (*piVar2 == 0) {
      piVar2 = (int *)*param_2;
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00f36f34(*param_2);
        }
      }
      *param_2 = 0;
      goto LAB_00ea9214;
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = *piVar2 + -1;
    DataMemoryBarrier(0xb);
    if (local_30 != -0x7fffffeb) {
      if (local_30 != -0x7fffffec) goto LAB_00ea943c;
      piVar2 = (int *)*param_2;
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00f36f34(*param_2);
        }
      }
      goto LAB_00ea9228;
    }
  }
  iVar6 = *param_2;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_0187be18);
  }
  piVar2 = (int *)(iVar6 + 0x20);
  do {
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar3 != 2) goto LAB_00ea929c;
      iVar3 = param_3[1];
      pcVar5 = *(code **)(*param_3 + 8);
      goto LAB_00ea93dc;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 1;
  DataMemoryBarrier(0xb);
LAB_00ea929c:
  if (iVar3 == 0) {
    if (*(undefined4 **)(iVar6 + 0x18) == (undefined4 *)0x0) {
      iVar3 = param_3[1];
LAB_00ea9348:
      uVar7 = (**(code **)*param_3)(iVar3);
      if (*(int *)(iVar6 + 0x18) != 0) {
        (**(code **)(*(int *)(iVar6 + 0x18) + 0xc))(*(undefined4 *)(iVar6 + 0x1c));
      }
      *(undefined8 *)(iVar6 + 0x18) = uVar7;
      iVar3 = *piVar2;
    }
    else {
      iVar3 = param_3[1];
      if (*(int *)(iVar6 + 0x1c) != iVar3 ||
          *(undefined4 **)(iVar6 + 0x18) != (undefined4 *)*param_3) goto LAB_00ea9348;
      iVar3 = *piVar2;
    }
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (bVar1) {
          *piVar2 = 0;
          DataMemoryBarrier(0xb);
          goto LAB_00ea93e4;
        }
      } while (*piVar2 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar4 = *(int *)(iVar6 + 0x18);
    iVar3 = *(int *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar6 + 0x18) = 0;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01882284);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 0;
    DataMemoryBarrier(0xb);
    pcVar5 = *(code **)(iVar4 + 4);
LAB_00ea93dc:
    (*pcVar5)(iVar3);
  }
LAB_00ea93e4:
  FUN_005bc180(&local_30,iVar6 + 8);
  piVar2 = (int *)(iVar6 + 0x10);
  if (local_30 == -0x7fffffec) {
    DataMemoryBarrier(0xb);
    if (*piVar2 != 0) {
      *param_1 = -0x7fffffeb;
      return;
    }
    piVar2 = (int *)*param_2;
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00f36f34(*param_2);
      }
    }
    *param_1 = -0x7fffffec;
    *param_2 = 0;
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  DataMemoryBarrier(0xb);
LAB_00ea943c:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iStack_28;
  param_1[3] = iStack_24;
  return;
}

