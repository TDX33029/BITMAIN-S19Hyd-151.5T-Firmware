// FUN_011c9910 @ 011c9910 size=2488 calls_out=12 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011c9910(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  iVar11 = *param_2;
  uVar4 = 1;
  if ((int)*(uint *)(iVar11 + 8) < 0) {
    uVar4 = *(uint *)(iVar11 + 8) ^ 0x80000000;
  }
  if (uVar4 == 0) {
    if (*(int *)(iVar11 + 0xc) == 0) {
      *param_1 = 0x80000000;
      param_1[1] = 0;
      param_1[2] = 4;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x011c99d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar11 + 0x10) + 0x18))(param_1,*(int *)(iVar11 + 0xc),param_3,param_4);
    return;
  }
  if (uVar4 == 1) {
    piVar10 = *(int **)(iVar11 + 0x14);
    uVar5 = 0;
    uVar14 = 0;
    if (piVar10 != (int *)0x0) {
      do {
        iVar12 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar12 + 1;
      if (iVar12 < 0) {
LAB_011c99a0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x11c99a0);
        (*pcVar1)();
      }
      uVar14 = *(undefined4 *)(iVar11 + 0x14);
    }
    iVar12 = *(int *)(iVar11 + 0x10);
    uVar4 = iVar12 * 0x40;
    if (0x7ffffffc < uVar4) {
LAB_011c999c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,uVar4);
    }
    puVar15 = *(undefined4 **)(iVar11 + 0xc);
    if (uVar4 == 0) {
      local_94 = 4;
      local_98 = 0;
    }
    else {
      local_94 = thunk_FUN_016d4a50(uVar4);
      if (local_94 == 0) {
        uVar5 = 4;
        goto LAB_011c999c;
      }
      local_98 = iVar12;
    }
    local_90 = 0;
    uVar17 = FUN_01238114(param_4);
    piVar10 = (int *)uVar17;
    if (iVar12 != 0) {
      puVar6 = puVar15 + iVar12 * 8;
      piVar7 = (int *)((uint)&local_88 | 4);
      bVar2 = false;
      do {
        iVar11 = puVar15[4];
        (**(code **)(puVar15[1] + 0x18))(&local_88,*puVar15,param_3,param_4,param_5,param_6);
        if (iVar11 == 0) {
          local_6c = 0;
        }
        else {
          piVar8 = (int *)puVar15[4];
          do {
            iVar11 = *piVar8;
            bVar3 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar3);
          *piVar8 = iVar11 + 1;
          if (iVar11 < 0) goto LAB_011c99a0;
          local_6c = puVar15[4];
        }
        piVar8 = (int *)puVar15[2];
        if (param_5 == 0) {
          do {
            iVar11 = *piVar8;
            bVar3 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar3);
          *piVar8 = iVar11 + 1;
          if (iVar11 < 0) goto LAB_011c99a0;
          uVar18 = *(undefined8 *)(puVar15 + 2);
        }
        else {
          uVar13 = puVar15[3];
          uVar4 = 0;
          uVar16 = (*(int **)(param_5 + 4))[1];
          if (uVar16 <= uVar13) {
            iVar11 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar8 + 2,uVar16);
            uVar4 = uVar16;
            if (iVar11 != 0) {
              uVar4 = 0;
            }
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(param_5 + 0x14) != 0) {
            FUN_011f6248(param_5 + 0xc,param_5);
          }
          uVar18 = FUN_0123a948(*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10),
                                (int)(piVar8 + 2) + uVar4,uVar13 - uVar4);
        }
        puVar9 = (undefined4 *)(**(code **)(puVar15[1] + 0x1c))(*puVar15);
        if (puVar9 == (undefined4 *)0x0) {
          DataMemoryBarrier(0xb);
          if (puVar15[7] != 0) {
            FUN_0120d364(puVar15 + 5,puVar15 + 2,&local_6c);
          }
          piVar8 = (int *)puVar15[5];
          do {
            iVar11 = *piVar8;
            bVar3 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar3);
          *piVar8 = iVar11 + 1;
          if (iVar11 < 0) goto LAB_011c99a0;
          uVar19 = *(undefined8 *)(puVar15 + 5);
        }
        else {
          piVar8 = (int *)0x0;
          if (local_6c != 0) {
            piVar8 = &local_6c;
          }
          uVar19 = FUN_01239010(*puVar9,puVar9[1],piVar8);
        }
        iVar11 = local_90;
        if (local_88 == -0x80000000) {
          do {
            iVar12 = *piVar10;
            bVar3 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar3);
          *piVar10 = iVar12 + 1;
          if (iVar12 < 0) goto LAB_011c99a0;
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
            iVar12 = *piVar10;
            bVar2 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar2);
          *piVar10 = iVar12 + 1;
          if (iVar12 < 0) goto LAB_011c99a0;
          local_5c = local_7c;
          iStack_58 = local_78;
          local_68 = local_88;
          local_30 = local_70;
          local_54 = local_74;
          local_60 = local_80;
          local_64 = local_84;
          local_2c = local_2c & 0xffffff00;
          local_34 = 0;
          bVar2 = true;
        }
        local_38 = local_6c;
        local_40 = uVar17;
        local_50 = uVar18;
        local_48 = uVar19;
        if (local_90 == local_98) {
          FUN_011ca644(&local_98);
        }
        puVar15 = puVar15 + 8;
        piVar8 = (int *)(local_94 + iVar11 * 0x40);
        *piVar8 = local_68;
        piVar8[1] = local_64;
        piVar8[2] = local_60;
        piVar8[3] = local_5c;
        piVar8[4] = iStack_58;
        piVar8[5] = local_54;
        *(undefined8 *)(piVar8 + 6) = local_50;
        *(undefined8 *)(piVar8 + 8) = local_48;
        *(undefined8 *)(piVar8 + 10) = local_40;
        piVar8[0xc] = local_38;
        piVar8[0xd] = local_34;
        piVar8[0xe] = local_30;
        piVar8[0xf] = local_2c;
        local_90 = iVar11 + 1;
      } while (puVar15 != puVar6);
      if (bVar2) {
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        param_1[3] = local_98;
        param_1[4] = local_94;
        param_1[5] = local_90;
        param_1[6] = uVar14;
        goto LAB_011ca278;
      }
    }
    *param_1 = 0x80000000;
    param_1[1] = local_98;
    param_1[2] = local_94;
    param_1[3] = local_90;
    param_1[4] = uVar14;
LAB_011ca278:
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(piVar10,(int)((ulonglong)uVar17 >> 0x20));
      return;
    }
    return;
  }
  iVar12 = *(int *)(iVar11 + 0x14);
  uVar4 = iVar12 * 0x40;
  if (0x7ffffffc < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  puVar15 = *(undefined4 **)(iVar11 + 0x10);
  if (uVar4 == 0) {
    local_94 = 4;
    local_98 = 0;
  }
  else {
    local_94 = thunk_FUN_016d4a50(uVar4);
    if (local_94 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
    local_98 = iVar12;
  }
  local_90 = 0;
  uVar17 = FUN_01238114(param_4);
  piVar10 = (int *)uVar17;
  if (iVar12 != 0) {
    puVar6 = puVar15 + iVar12 * 8;
    piVar7 = (int *)((uint)&local_88 | 4);
    bVar2 = false;
    do {
      iVar11 = puVar15[4];
      (**(code **)(puVar15[1] + 0x18))(&local_88,*puVar15,param_3,param_4,param_5,param_6);
      if (iVar11 == 0) {
        local_6c = 0;
      }
      else {
        piVar8 = (int *)puVar15[4];
        do {
          iVar11 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_011c99a0;
        local_6c = puVar15[4];
      }
      piVar8 = (int *)puVar15[2];
      if (param_5 == 0) {
        do {
          iVar11 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_011c99a0;
        uVar18 = *(undefined8 *)(puVar15 + 2);
      }
      else {
        uVar13 = puVar15[3];
        uVar4 = 0;
        uVar16 = (*(int **)(param_5 + 4))[1];
        if (uVar16 <= uVar13) {
          iVar11 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar8 + 2,uVar16);
          uVar4 = uVar16;
          if (iVar11 != 0) {
            uVar4 = 0;
          }
        }
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_011f6248(param_5 + 0xc,param_5);
        }
        uVar18 = FUN_0123a948(*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10),
                              (int)(piVar8 + 2) + uVar4,uVar13 - uVar4);
      }
      puVar9 = (undefined4 *)(**(code **)(puVar15[1] + 0x1c))(*puVar15);
      if (puVar9 == (undefined4 *)0x0) {
        DataMemoryBarrier(0xb);
        if (puVar15[7] != 0) {
          FUN_0120d930(puVar15 + 5,puVar15 + 2,&local_6c);
        }
        piVar8 = (int *)puVar15[5];
        do {
          iVar11 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_011c99a0;
        uVar19 = *(undefined8 *)(puVar15 + 5);
      }
      else {
        piVar8 = (int *)0x0;
        if (local_6c != 0) {
          piVar8 = &local_6c;
        }
        uVar19 = FUN_01239010(*puVar9,puVar9[1],piVar8);
      }
      iVar11 = local_90;
      if (local_88 == -0x80000000) {
        do {
          iVar12 = *piVar10;
          bVar3 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar3);
        *piVar10 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_011c99a0;
        local_5c = *piVar7;
        iStack_58 = piVar7[1];
        local_54 = piVar7[2];
        local_2c = CONCAT31(local_2c._1_3_,1);
        local_30 = 0;
        local_60 = 0;
        local_64 = 4;
        local_68 = 0;
        local_34 = local_78;
      }
      else {
        do {
          iVar12 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_011c99a0;
        bVar2 = true;
        local_2c = local_2c & 0xffffff00;
        local_34 = 0;
        local_30 = local_70;
        local_68 = local_88;
        local_60 = local_80;
        local_64 = local_84;
        local_5c = local_7c;
        iStack_58 = local_78;
        local_54 = local_74;
      }
      local_38 = local_6c;
      local_40 = uVar17;
      local_50 = uVar18;
      local_48 = uVar19;
      if (local_90 == local_98) {
        FUN_011ca644(&local_98);
      }
      puVar15 = puVar15 + 8;
      piVar8 = (int *)(local_94 + iVar11 * 0x40);
      *piVar8 = local_68;
      piVar8[1] = local_64;
      piVar8[2] = local_60;
      piVar8[3] = local_5c;
      piVar8[4] = iStack_58;
      piVar8[5] = local_54;
      *(undefined8 *)(piVar8 + 6) = local_50;
      *(undefined8 *)(piVar8 + 8) = local_48;
      *(undefined8 *)(piVar8 + 10) = local_40;
      piVar8[0xc] = local_38;
      piVar8[0xd] = local_34;
      piVar8[0xe] = local_30;
      piVar8[0xf] = local_2c;
      local_90 = iVar11 + 1;
    } while (puVar15 != puVar6);
    if (bVar2) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = local_98;
      param_1[4] = local_94;
      param_1[5] = local_90;
      param_1[6] = 0;
      goto LAB_011c9e60;
    }
  }
  *param_1 = 0x80000000;
  param_1[1] = local_98;
  param_1[2] = local_94;
  param_1[3] = local_90;
  param_1[4] = 0;
LAB_011c9e60:
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar10,(int)((ulonglong)uVar17 >> 0x20));
    return;
  }
  return;
}

