// FUN_00e48ea4 @ 00e48ea4 size=2468 calls_out=17 calls_in=1
// strings: 

void FUN_00e48ea4(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *extraout_r2;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int unaff_r9;
  undefined *puVar16;
  int *piVar17;
  uint *puVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  uint local_60;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined3 uStack_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int *local_28;
  
  piVar11 = (int *)(param_2 + 8);
  do {
    if (*piVar11 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar11);
      goto LAB_00e48ed8;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar3);
  *piVar11 = 1;
  DataMemoryBarrier(0xb);
LAB_00e48ed8:
  local_60 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(param_2 + 0xc);
  }
  else {
    local_60 = FUN_015bf3f8();
    local_60 = local_60 ^ 1;
    cVar2 = *(char *)(param_2 + 0xc);
  }
  if (cVar2 != '\0') {
    uVar6 = (uint)local_44 >> 8;
    local_44 = CONCAT31((int3)uVar6,(char)local_60);
    local_48 = piVar11;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_0187a7c0,&DAT_01886a4c);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar15 = *(int *)(param_2 + 0x2c);
    if (iVar15 != 0) {
      piVar17 = (int *)*param_3;
      iVar12 = param_3[1];
      iVar14 = param_3[2];
      while (iVar15 != 0) {
        *(int *)(param_2 + 0x2c) = iVar15 + -1;
        uVar5 = *(int *)(param_2 + 0x28) + 1;
        puVar9 = (undefined4 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x28) * 8);
        piVar13 = (int *)*puVar9;
        uVar6 = uVar5 - *(uint *)(param_2 + 0x20);
        if (uVar5 < *(uint *)(param_2 + 0x20)) {
          uVar6 = uVar5;
        }
        iVar15 = puVar9[1];
        *(uint *)(param_2 + 0x28) = uVar6;
        if (piVar17 == (int *)0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886a84);
        }
        uVar6 = *(uint *)(iVar15 + 8);
        if (uVar6 < 5) {
          uVar6 = 4;
        }
        local_58 = piVar17;
        local_54 = iVar12;
        local_50 = iVar14;
        FUN_00e49bec(&local_48,(int)piVar13 + (uVar6 - 1 & 0xfffffff8) + 8,iVar15,&local_58);
        iVar14 = local_40;
        iVar12 = local_44;
        piVar17 = local_48;
        if (local_48 == (int *)0x80000000) {
          if (((local_60 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
            *(undefined1 *)(param_2 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar12 = *piVar11;
            bVar3 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar3);
          *piVar11 = 0;
          if (iVar12 == 2) {
            FUN_016d6968(0xf0,piVar11,0x81,1);
          }
          bVar3 = false;
          (**(code **)(local_38 + 0xc))(local_3c);
LAB_00e492a8:
          DataMemoryBarrier(0xb);
          do {
            iVar12 = *piVar13;
            bVar4 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar4);
          *piVar13 = iVar12 + -1;
          if (iVar12 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aac624(piVar13,iVar15);
          }
          if (!bVar3) goto LAB_00e49324;
          goto LAB_00e492e0;
        }
        if (local_48 == (int *)0x80000001) {
          bVar3 = true;
          goto LAB_00e492a8;
        }
        iVar8 = (**(code **)(local_38 + 0xc))(local_3c);
        if (iVar8 == 0) {
          uVar5 = *(uint *)(param_2 + 0x10);
          uVar6 = *(uint *)(param_2 + 0x1c);
          if (uVar6 == uVar5) {
            FUN_01561020();
            uVar5 = *(uint *)(param_2 + 0x10);
            uVar6 = *(uint *)(param_2 + 0x1c);
          }
          *(uint *)(param_2 + 0x1c) = uVar6 + 1;
          uVar6 = *(int *)(param_2 + 0x18) + uVar6;
          uVar10 = uVar6 - uVar5;
          if (uVar6 < uVar5) {
            uVar10 = uVar6;
          }
          piVar7 = (int *)(*(int *)(param_2 + 0x14) + uVar10 * 0xc);
          *piVar7 = (int)piVar17;
          piVar7[1] = iVar12;
          piVar7[2] = iVar14;
          if (((local_60 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
            *(undefined1 *)(param_2 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar12 = *piVar11;
            bVar3 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar3);
          *piVar11 = 0;
          bVar3 = false;
          if (iVar12 == 2) {
            FUN_016d6968(0xf0,piVar11,0x81,1);
          }
          goto LAB_00e492a8;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac624(piVar13,iVar15);
        }
        iVar15 = *(int *)(param_2 + 0x2c);
      }
      if (piVar17 != (int *)0x80000000) {
        uVar6 = *(uint *)(param_2 + 0x10);
        uVar5 = *(uint *)(param_2 + 0x1c);
        if (uVar5 == uVar6) {
          FUN_01561020();
          uVar6 = *(uint *)(param_2 + 0x10);
          uVar5 = *(uint *)(param_2 + 0x1c);
        }
        uVar10 = *(int *)(param_2 + 0x18) + uVar5;
        *(uint *)(param_2 + 0x1c) = uVar5 + 1;
        uVar5 = uVar10 - uVar6;
        if (uVar10 < uVar6) {
          uVar5 = uVar10;
        }
        piVar13 = (int *)(*(int *)(param_2 + 0x14) + uVar5 * 0xc);
        *piVar13 = (int)piVar17;
        piVar13[1] = iVar12;
        piVar13[2] = iVar14;
      }
LAB_00e492e0:
      if (((local_60 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
        *(undefined1 *)(param_2 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar11;
        bVar3 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar3);
      *piVar11 = 0;
      if (iVar15 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
      goto LAB_00e49324;
    }
    puVar18 = (uint *)(param_2 + 0x34);
    if (*puVar18 == 0x80000000) {
      uVar6 = *(uint *)(param_2 + 0x1c);
LAB_00e490d4:
      iVar12 = *param_3;
      iVar15 = param_3[1];
      iVar14 = param_3[2];
      uVar5 = *(uint *)(param_2 + 0x10);
      if (uVar6 == uVar5) {
        FUN_01561020();
        uVar5 = *(uint *)(param_2 + 0x10);
        uVar6 = *(uint *)(param_2 + 0x1c);
      }
      uVar10 = *(int *)(param_2 + 0x18) + uVar6;
      *(uint *)(param_2 + 0x1c) = uVar6 + 1;
      uVar6 = uVar10 - uVar5;
      if (uVar10 < uVar5) {
        uVar6 = uVar10;
      }
      piVar17 = (int *)(*(int *)(param_2 + 0x14) + uVar6 * 0xc);
      *piVar17 = iVar12;
      iVar12 = 0;
      piVar17[1] = iVar15;
      piVar17[2] = iVar14;
      iVar14 = 3;
      goto joined_r0x00e49134;
    }
    uVar6 = *(uint *)(param_2 + 0x1c);
    if (uVar6 < *(uint *)(param_2 + 0x30)) goto LAB_00e490d4;
    uVar19 = thunk_FUN_016de0ee(*(uint *)(param_2 + 0x30),0x248);
    uVar6 = *(uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
    if (uVar6 < 3) {
      piVar17 = (int *)FUN_015f7ed0();
    }
    else {
      piVar17 = (int *)(uVar6 - 8);
      do {
        iVar15 = *piVar17;
        bVar3 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar3);
      *piVar17 = iVar15 + 1;
      if (iVar15 < 0) goto LAB_00e497a4;
    }
    piVar13 = local_58;
    iStack_30 = extraout_r2[1];
    iStack_34 = *extraout_r2;
    iStack_2c = extraout_r2[2];
    uStack_4c = (undefined3)((uint)iStack_2c >> 8);
    local_50._0_3_ = (undefined3)((uint)iStack_30 >> 8);
    local_50 = CONCAT13((char)iStack_2c,(undefined3)local_50);
    local_58._3_1_ = (undefined1)iStack_34;
    local_54._0_3_ = (undefined3)((uint)iStack_34 >> 8);
    local_54 = CONCAT13((char)iStack_30,(undefined3)local_54);
    local_3c = 0;
    local_40 = 1;
    local_44 = 1;
    local_48 = (int *)0x1;
    local_38 = (int)piVar13 << 8;
    local_28 = piVar17;
    piVar17 = (int *)thunk_FUN_016d4a50(0x24);
    if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x24);
    }
    *piVar17 = (int)local_48;
    piVar17[1] = local_44;
    piVar17[2] = local_40;
    piVar17[3] = local_3c;
    piVar17[4] = local_38;
    piVar17[5] = iStack_34;
    piVar17[6] = iStack_30;
    piVar17[7] = iStack_2c;
    piVar17[8] = (int)local_28;
    uVar6 = *puVar18;
    if (uVar6 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01886a74);
    }
    do {
      iVar15 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar15 + 1;
    if (iVar15 < 0) {
LAB_00e497a4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe497a4);
      (*pcVar1)();
    }
    uVar5 = *(uint *)(param_2 + 0x40);
    if (uVar5 == uVar6) {
      FUN_00ef311c(puVar18);
      uVar6 = *(uint *)(param_2 + 0x34);
      uVar5 = *(uint *)(param_2 + 0x40);
    }
    uVar10 = *(int *)(param_2 + 0x3c) + uVar5;
    *(uint *)(param_2 + 0x40) = uVar5 + 1;
    uVar5 = uVar10 - uVar6;
    if (uVar10 < uVar6) {
      uVar5 = uVar10;
    }
    piVar13 = (int *)(*(int *)(param_2 + 0x38) + uVar5 * 8);
    *piVar13 = (int)piVar17;
    piVar13[1] = (int)&DAT_0187a7d0;
    if (((local_60 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar11;
      bVar3 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar3);
    *piVar11 = 0;
    if (iVar15 == 2) {
      FUN_016d6968(0xf0,piVar11,0x81,1);
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(param_2 + 0x4c) == '\0') {
      puVar16 = &DAT_01886af4;
LAB_00e494c4:
      uVar20 = FUN_00e48374(piVar17 + 2);
      piVar11 = (int *)uVar20;
      if (((uint)(uVar20 >> 0x20) & 0xff) != 2) {
        if (piVar11[2] != -0x80000000) goto code_r0x00e494e4;
        if ((((uVar20 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar11;
          bVar3 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar3);
        *piVar11 = 0;
        if (iVar15 == 2) {
          FUN_016d6968(0xf0,piVar11,0x81,1);
        }
        goto LAB_00e495a8;
      }
      goto LAB_00e4979c;
    }
LAB_00e495a8:
    uVar20 = FUN_00e48374(piVar17 + 2);
    piVar11 = (int *)uVar20;
    if (((uint)(uVar20 >> 0x20) & 0xff) == 2) {
      puVar16 = &DAT_01886aa4;
LAB_00e4979c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar16);
    }
    unaff_r9 = piVar11[2];
    iVar15 = piVar11[3];
    iVar12 = piVar11[4];
    piVar11[2] = -0x80000000;
    if ((((uVar20 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
      *(undefined1 *)(piVar11 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar11;
      bVar3 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar3);
    *piVar11 = 0;
    if (iVar14 == 2) {
      FUN_016d6968(0xf0,piVar11,0x81,1);
    }
    iVar14 = 1;
    if (unaff_r9 == -0x80000000) {
      iVar14 = 3;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e49b4c(piVar17);
    }
  }
  else {
    unaff_r9 = *param_3;
    iVar14 = 1;
    iVar15 = param_3[1];
    iVar12 = param_3[2];
joined_r0x00e49134:
    if (((local_60 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar11;
      bVar3 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar3);
    *piVar11 = 0;
    if (iVar8 == 2) {
      FUN_016d6968(0xf0,piVar11,0x81,1);
    }
  }
  if (iVar14 != 3) {
    if (iVar14 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01886a3c);
    }
    *param_1 = unaff_r9;
    param_1[1] = iVar15;
    param_1[2] = iVar12;
    return;
  }
LAB_00e49324:
  *param_1 = -0x80000000;
  return;
code_r0x00e494e4:
  if ((((uVar20 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
    *(undefined1 *)(piVar11 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar11;
    bVar3 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar3);
  *piVar11 = 0;
  if (iVar15 == 2) {
    FUN_016d6968(0xf0,piVar11,0x81,1);
  }
  FUN_015fbbf8();
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_00e495a8;
  goto LAB_00e494c4;
}

