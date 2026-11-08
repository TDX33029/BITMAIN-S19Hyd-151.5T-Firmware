// FUN_01573b2c @ 01573b2c size=2408 calls_out=11 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01573b2c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int **ppiVar10;
  uint unaff_r4;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint local_98;
  int local_94;
  uint local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  iVar2 = *param_2;
  uVar8 = 1;
  if ((int)*(uint *)(iVar2 + 8) < 0) {
    uVar8 = *(uint *)(iVar2 + 8) ^ 0x80000000;
  }
  if (uVar8 == 0) {
    if (*(int *)(iVar2 + 0xc) == 0) {
      *param_1 = 0x80000000;
      param_1[1] = 0;
      param_1[2] = 4;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01573c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar2 + 0x10) + 0x18))(param_1,*(int *)(iVar2 + 0xc),param_3,param_4);
    return;
  }
  if (uVar8 != 1) {
    uVar11 = *(uint *)(iVar2 + 0x14);
    uVar13 = 0;
    bVar17 = 0x3fffffe < uVar11;
    bVar16 = uVar11 == 0x3ffffff;
    uVar8 = uVar11 * 0x40;
    if (uVar11 < 0x4000000) {
      bVar17 = 0x7ffffffb < uVar8;
      bVar16 = uVar8 == 0x7ffffffc;
    }
    if (bVar17 && !bVar16) {
LAB_01573c3c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,uVar8);
    }
    puVar14 = *(undefined4 **)(iVar2 + 0x10);
    if (uVar8 == 0) {
      local_94 = 4;
      local_98 = 0;
    }
    else {
      uVar13 = 4;
      local_94 = FUN_01298504(uVar8,4);
      local_98 = uVar11;
      if (local_94 == 0) goto LAB_01573c3c;
    }
    local_90 = 0;
    uVar18 = FUN_01531840(param_4);
    piVar12 = (int *)uVar18;
    if (uVar11 == 0) {
LAB_01574438:
      param_1[1] = local_98;
      param_1[2] = local_94;
      param_1[3] = local_90;
      *param_1 = 0x80000000;
      param_1[4] = 0;
    }
    else {
      puVar3 = puVar14 + uVar11 * 8;
      piVar7 = (int *)((uint)&local_88 | 4);
      bVar16 = false;
      do {
        iVar2 = puVar14[4];
        (**(code **)(puVar14[1] + 0x18))(&local_88,*puVar14,param_3,param_4,param_5,param_6);
        if (iVar2 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)puVar14[4];
          do {
            iVar2 = *piVar4;
            bVar17 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar17);
          *piVar4 = iVar2 + 1;
          if (iVar2 < 0) goto LAB_01573ca4;
        }
        local_6c = piVar4;
        if (param_5 == 0) {
          piVar4 = (int *)puVar14[2];
          do {
            iVar2 = *piVar4;
            bVar17 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar17);
          *piVar4 = iVar2 + 1;
          if (iVar2 < 0) goto LAB_01573ca4;
          uVar19 = CONCAT44(puVar14[3],piVar4);
        }
        else {
          iVar2 = puVar14[2];
          uVar11 = puVar14[3];
          uVar15 = (*(int **)(param_5 + 4))[1];
          uVar8 = 0;
          if (uVar15 <= uVar11) {
            iVar9 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,iVar2 + 8,uVar15);
            if (iVar9 != 0) {
              uVar15 = 0;
            }
            uVar8 = uVar15;
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(param_5 + 0x14) != 0) {
            FUN_0154f894(param_5 + 0xc,param_5);
          }
          uVar19 = FUN_01534d2c(*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10),
                                iVar2 + 8 + uVar8,uVar11 - uVar8);
        }
        puVar6 = (undefined4 *)(**(code **)(puVar14[1] + 0x1c))(*puVar14);
        if (puVar6 == (undefined4 *)0x0) {
          DataMemoryBarrier(0xb);
          if (puVar14[7] != 0) {
            FUN_01551dd0(puVar14 + 5,puVar14 + 2,&local_6c);
          }
          piVar4 = (int *)puVar14[5];
          do {
            iVar2 = *piVar4;
            bVar17 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar17);
          *piVar4 = iVar2 + 1;
          if (iVar2 < 0) goto LAB_01573ca4;
          uVar20 = CONCAT44(puVar14[6],piVar4);
        }
        else {
          ppiVar10 = (int **)0x0;
          if (local_6c != (int *)0x0) {
            ppiVar10 = &local_6c;
          }
          uVar20 = FUN_01534b44(*puVar6,puVar6[1],ppiVar10);
        }
        uVar8 = local_90;
        if (local_88 == -0x80000000) {
          do {
            iVar2 = *piVar12;
            bVar17 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar17);
          *piVar12 = iVar2 + 1;
          if (iVar2 < 0) goto LAB_01573ca4;
          local_5c = *piVar7;
          iStack_58 = piVar7[1];
          local_54 = piVar7[2];
          local_2c = CONCAT31(local_2c._1_3_,1);
          local_30 = 0;
          local_34 = local_78;
          local_60 = 0;
          local_64 = 4;
          local_68 = 0;
        }
        else {
          do {
            iVar2 = *piVar12;
            bVar16 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar16);
          *piVar12 = iVar2 + 1;
          if (iVar2 < 0) goto LAB_01573ca4;
          local_68 = local_88;
          local_64 = iStack_84;
          local_60 = iStack_80;
          local_5c = local_7c;
          iStack_58 = local_78;
          local_54 = iStack_74;
          local_2c = local_2c & 0xffffff00;
          local_30 = local_70;
          local_34 = 0;
          bVar16 = true;
        }
        local_38 = local_6c;
        local_40 = uVar18;
        local_50 = uVar19;
        local_48 = uVar20;
        if (local_90 == local_98) {
          FUN_0155ab78(&local_98);
        }
        puVar14 = puVar14 + 8;
        piVar4 = (int *)(local_94 + uVar8 * 0x40);
        *piVar4 = local_68;
        piVar4[1] = local_64;
        piVar4[2] = local_60;
        piVar4[3] = local_5c;
        piVar4[4] = iStack_58;
        piVar4[5] = local_54;
        *(undefined8 *)(piVar4 + 6) = local_50;
        *(undefined8 *)(piVar4 + 8) = local_48;
        *(undefined8 *)(piVar4 + 10) = local_40;
        piVar4[0xc] = (int)local_38;
        piVar4[0xd] = local_34;
        piVar4[0xe] = local_30;
        piVar4[0xf] = local_2c;
        local_90 = uVar8 + 1;
      } while (puVar14 != puVar3);
      if (!bVar16) goto LAB_01574438;
      param_1[3] = local_98;
      param_1[4] = local_94;
      param_1[5] = local_90;
      param_1[6] = 0;
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar2 + -1;
    if (iVar2 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    goto LAB_01574488;
  }
  piVar12 = *(int **)(iVar2 + 0x14);
  if (piVar12 != (int *)0x0) {
    do {
      iVar9 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_01573ca4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1573ca4);
      (*pcVar1)();
    }
  }
  uVar8 = *(uint *)(iVar2 + 0x10);
  uVar13 = 0;
  if ((0x3ffffff < uVar8) || (unaff_r4 = uVar8 * 0x40, 0x7ffffffc < unaff_r4)) {
LAB_01573c98:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,unaff_r4);
  }
  puVar14 = *(undefined4 **)(iVar2 + 0xc);
  if (unaff_r4 == 0) {
    local_94 = 4;
    local_98 = 0;
  }
  else {
    uVar13 = 4;
    local_94 = FUN_01298504(unaff_r4,4);
    if (local_94 == 0) goto LAB_01573c98;
    local_98 = uVar8;
  }
  local_90 = 0;
  uVar18 = FUN_01531840(param_4);
  piVar7 = (int *)uVar18;
  if (uVar8 == 0) {
LAB_01574050:
    param_1[1] = local_98;
    param_1[2] = local_94;
    param_1[3] = local_90;
    *param_1 = 0x80000000;
    param_1[4] = piVar12;
  }
  else {
    puVar3 = puVar14 + uVar8 * 8;
    piVar4 = (int *)((uint)&local_88 | 4);
    bVar16 = false;
    do {
      iVar2 = puVar14[4];
      (**(code **)(puVar14[1] + 0x18))(&local_88,*puVar14,param_3,param_4,param_5,param_6);
      if (iVar2 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)puVar14[4];
        do {
          iVar2 = *piVar5;
          bVar17 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar17);
        *piVar5 = iVar2 + 1;
        if (iVar2 < 0) goto LAB_01573ca4;
      }
      local_6c = piVar5;
      if (param_5 == 0) {
        piVar5 = (int *)puVar14[2];
        do {
          iVar2 = *piVar5;
          bVar17 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar17);
        *piVar5 = iVar2 + 1;
        if (iVar2 < 0) goto LAB_01573ca4;
        uVar19 = CONCAT44(puVar14[3],piVar5);
      }
      else {
        iVar2 = puVar14[2];
        uVar15 = puVar14[3];
        uVar11 = (*(int **)(param_5 + 4))[1];
        uVar8 = 0;
        if (uVar11 <= uVar15) {
          iVar9 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,iVar2 + 8,uVar11);
          if (iVar9 != 0) {
            uVar11 = 0;
          }
          uVar8 = uVar11;
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_0154f894(param_5 + 0xc,param_5);
        }
        uVar19 = FUN_01534d2c(*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10),
                              iVar2 + 8 + uVar8,uVar15 - uVar8);
      }
      puVar6 = (undefined4 *)(**(code **)(puVar14[1] + 0x1c))(*puVar14);
      if (puVar6 == (undefined4 *)0x0) {
        DataMemoryBarrier(0xb);
        if (puVar14[7] != 0) {
          FUN_01551aa8(puVar14 + 5,puVar14 + 2,&local_6c);
        }
        piVar5 = (int *)puVar14[5];
        do {
          iVar2 = *piVar5;
          bVar17 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar17);
        *piVar5 = iVar2 + 1;
        if (iVar2 < 0) goto LAB_01573ca4;
        uVar20 = CONCAT44(puVar14[6],piVar5);
      }
      else {
        ppiVar10 = (int **)0x0;
        if (local_6c != (int *)0x0) {
          ppiVar10 = &local_6c;
        }
        uVar20 = FUN_01534b44(*puVar6,puVar6[1],ppiVar10);
      }
      uVar8 = local_90;
      if (local_88 == -0x80000000) {
        do {
          iVar2 = *piVar7;
          bVar17 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar17);
        *piVar7 = iVar2 + 1;
        if (iVar2 < 0) goto LAB_01573ca4;
        local_5c = *piVar4;
        iStack_58 = piVar4[1];
        local_54 = piVar4[2];
        local_2c = CONCAT31(local_2c._1_3_,1);
        local_30 = 0;
        local_34 = local_78;
        local_60 = 0;
        local_64 = 4;
        local_68 = 0;
      }
      else {
        do {
          iVar2 = *piVar7;
          bVar16 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar16);
        *piVar7 = iVar2 + 1;
        if (iVar2 < 0) goto LAB_01573ca4;
        local_68 = local_88;
        local_64 = iStack_84;
        local_60 = iStack_80;
        local_5c = local_7c;
        iStack_58 = local_78;
        local_54 = iStack_74;
        local_2c = local_2c & 0xffffff00;
        local_30 = local_70;
        local_34 = 0;
        bVar16 = true;
      }
      local_38 = local_6c;
      local_50 = uVar19;
      local_48 = uVar20;
      local_40 = uVar18;
      if (local_90 == local_98) {
        FUN_0155ab78(&local_98);
      }
      puVar14 = puVar14 + 8;
      piVar5 = (int *)(local_94 + uVar8 * 0x40);
      *piVar5 = local_68;
      piVar5[1] = local_64;
      piVar5[2] = local_60;
      piVar5[3] = local_5c;
      piVar5[4] = iStack_58;
      piVar5[5] = local_54;
      *(undefined8 *)(piVar5 + 6) = local_50;
      *(undefined8 *)(piVar5 + 8) = local_48;
      *(undefined8 *)(piVar5 + 10) = local_40;
      piVar5[0xc] = (int)local_38;
      piVar5[0xd] = local_34;
      piVar5[0xe] = local_30;
      piVar5[0xf] = local_2c;
      local_90 = uVar8 + 1;
    } while (puVar14 != puVar3);
    if (!bVar16) goto LAB_01574050;
    param_1[3] = local_98;
    param_1[4] = local_94;
    param_1[5] = local_90;
    param_1[6] = piVar12;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar7;
    bVar16 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar16);
  *piVar7 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
LAB_01574488:
  FUN_0070451c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  return;
}

