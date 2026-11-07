// FUN_01481f74 @ 01481f74 size=744 calls_out=3 calls_in=0
// strings: 

void FUN_01481f74(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int local_9c;
  undefined *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  int iStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_38;
  int iStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar6 = (int *)*param_3;
  FUN_01480d18(&local_50);
  if (local_50 != 2) {
    local_38 = local_50;
    iStack_34 = iStack_4c;
    puStack_30 = puStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (local_50 == 0) {
      piVar6 = (int *)*param_2;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a5698(*param_2);
        }
      }
      *param_2 = 0;
    }
    goto joined_r0x01482084;
  }
  iVar8 = *param_2;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a4ce8);
  }
  piVar7 = (int *)(iVar8 + 0x2c);
  do {
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar2 != 2) goto LAB_01481fd8;
      iVar2 = piVar6[1];
      pcVar4 = *(code **)(*piVar6 + 8);
      goto LAB_01482150;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_01481fd8:
  if (iVar2 == 0) {
    if (*(undefined4 **)(iVar8 + 0x24) == (undefined4 *)0x0) {
      iVar2 = piVar6[1];
LAB_014820c0:
      uVar9 = (**(code **)*piVar6)(iVar2);
      if (*(int *)(iVar8 + 0x24) != 0) {
        (**(code **)(*(int *)(iVar8 + 0x24) + 0xc))(*(undefined4 *)(iVar8 + 0x28));
      }
      *(undefined8 *)(iVar8 + 0x24) = uVar9;
      iVar2 = *piVar7;
    }
    else {
      iVar2 = piVar6[1];
      if (*(int *)(iVar8 + 0x28) != iVar2 || *(undefined4 **)(iVar8 + 0x24) != (undefined4 *)*piVar6
         ) goto LAB_014820c0;
      iVar2 = *piVar7;
    }
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar7);
        if (bVar1) {
          *piVar7 = 0;
          DataMemoryBarrier(0xb);
          goto LAB_01482158;
        }
      } while (*piVar7 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar3 = *(int *)(iVar8 + 0x24);
    iVar2 = *(int *)(iVar8 + 0x28);
    *(undefined4 *)(iVar8 + 0x24) = 0;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01882284);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = 0;
    DataMemoryBarrier(0xb);
    pcVar4 = *(code **)(iVar3 + 4);
LAB_01482150:
    (*pcVar4)(iVar2);
  }
LAB_01482158:
  FUN_01480d18(&local_a0,param_2);
  iStack_34 = local_9c;
  puStack_30 = local_98;
  uStack_2c = local_94;
  uStack_28 = local_90;
  local_38 = local_a0;
joined_r0x01482084:
  if (local_38 == 2) {
    *param_1 = 6;
    param_1[1] = 0;
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  if ((local_38 & 1) == 0) {
    *param_1 = 5;
    param_1[1] = 0;
    param_1[4] = local_d0;
    param_1[5] = uStack_cc;
    param_1[6] = uStack_c8;
    param_1[7] = uStack_c4;
    param_1[8] = uStack_c0;
    param_1[9] = uStack_bc;
    param_1[10] = local_b8;
    param_1[0xb] = uStack_b4;
    param_1[0xc] = uStack_b0;
    param_1[0xd] = uStack_ac;
    param_1[0xe] = uStack_a8;
    param_1[0xf] = uStack_a4;
    *param_1 = 5;
    param_1[1] = 0;
    return;
  }
  if (iStack_34 == 0) {
    uVar5 = 4;
    iStack_34 = 1;
    puStack_30 = &DAT_018a538c;
  }
  else {
    uVar5 = 3;
    local_d0 = uStack_2c;
    uStack_cc = uStack_28;
    uStack_c8 = uStack_78;
    uStack_c4 = uStack_74;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    local_b8 = local_68;
    uStack_b4 = uStack_64;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    uStack_a8 = uStack_58;
    uStack_a4 = uStack_54;
  }
  *param_1 = uVar5;
  param_1[1] = 0;
  param_1[2] = iStack_34;
  param_1[3] = puStack_30;
  param_1[4] = local_d0;
  param_1[5] = uStack_cc;
  param_1[6] = uStack_c8;
  param_1[7] = uStack_c4;
  param_1[8] = uStack_c0;
  param_1[9] = uStack_bc;
  param_1[10] = local_b8;
  param_1[0xb] = uStack_b4;
  param_1[0xc] = uStack_b0;
  param_1[0xd] = uStack_ac;
  param_1[0xe] = uStack_a8;
  param_1[0xf] = uStack_a4;
  return;
}

