// FUN_015472a8 @ 015472a8 size=2328 calls_out=19 calls_in=1
// strings: 

void FUN_015472a8(undefined4 param_1,int param_2,uint *param_3,undefined4 param_4,code *param_5,
                 code *param_6,int param_7)

{
  code *pcVar1;
  undefined2 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  bool bVar23;
  undefined8 uVar24;
  uint local_e8;
  int local_e4;
  uint local_e0;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  FUN_01513a48(&local_e8,*(int *)(param_2 + 4),*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 0xc);
  if (*param_3 == 0x80000000) {
    iVar16 = 1;
    uVar18 = 0;
    uVar15 = 0;
  }
  else {
    uVar18 = param_3[2];
    uVar4 = 0;
    if ((int)uVar18 < 0) {
LAB_015473d0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,uVar18);
    }
    uVar9 = param_3[1];
    if (uVar18 == 0) {
      uVar15 = 0;
      iVar16 = 1;
    }
    else {
      iVar16 = thunk_FUN_016d4a50(uVar18);
      uVar15 = uVar18;
      if (iVar16 == 0) {
        uVar4 = 1;
        goto LAB_015473d0;
      }
    }
    FUN_016dd1aa(iVar16,uVar9,uVar18);
  }
  if (local_e8 != 0) {
    thunk_FUN_016d3fb4(local_e4);
  }
  local_e8 = uVar15;
  local_e4 = iVar16;
  local_e0 = uVar18;
  if (*(int *)(param_7 + 8) == 1 && uVar18 == 0) {
    iVar16 = *(int *)(param_7 + 0x24);
    FUN_0150e454(&local_60,&local_e8);
    uVar24 = (*param_6)(param_4);
    piVar14 = (int *)(param_7 + 0xc);
    do {
      if (*piVar14 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar14);
        goto LAB_01547478;
      }
      bVar23 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar23);
    *piVar14 = 1;
    DataMemoryBarrier(0xb);
LAB_01547478:
    pcVar19 = (char *)(param_7 + 0x10);
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(param_7 + 0x10) != '\0') {
LAB_015474a0:
        if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
          *pcVar19 = '\x01';
        }
        goto LAB_015474b0;
      }
      uVar18 = 0;
LAB_0154751c:
      uVar15 = local_58;
      uVar9 = local_5c;
      puVar10 = (uint *)(param_7 + 0x14);
      uVar5 = *puVar10;
      uVar13 = *(uint *)(param_7 + 0x20);
      iVar11 = 0;
      if (uVar13 == 0) {
        uVar12 = 0;
        uVar5 = 0;
      }
      else {
        uVar17 = *(uint *)(param_7 + 0x1c);
        uVar12 = uVar17 - uVar5;
        if (uVar17 < uVar5) {
          uVar12 = uVar17;
        }
        if (uVar5 - uVar12 < uVar13) {
          iVar11 = uVar13 - (uVar5 - uVar12);
        }
        else {
          uVar5 = uVar12 + uVar13;
        }
      }
      piVar21 = *(int **)(param_7 + 0x18);
      piVar8 = piVar21 + uVar5;
      piVar22 = piVar21 + iVar11;
      piVar20 = piVar21 + uVar12;
      iVar11 = 0;
      uVar5 = (uint)uVar24 & 0xffff;
      if (uVar5 == 3) {
        do {
          if (piVar20 == piVar8) {
            if ((piVar21 == (int *)0x0) ||
               (bVar23 = piVar21 == piVar22, piVar6 = piVar21, piVar8 = piVar22, piVar21 = piVar20,
               piVar22 = piVar20, bVar23)) goto LAB_01547754;
          }
          else {
            piVar6 = piVar20;
          }
          piVar20 = piVar6 + 1;
          iVar7 = *piVar6;
          if (*(short *)(iVar7 + 0x28) == 3) {
            uVar5 = (uint)*(ushort *)(iVar7 + 0x2a);
            bVar23 = uVar5 == ((uint)((ulonglong)uVar24 >> 0x20) & 0xffff);
            if (bVar23) {
              uVar5 = *(uint *)(iVar7 + 0x10);
            }
            if ((bVar23 && uVar5 == uVar15) &&
               (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0xc),uVar9,uVar15), iVar7 == 0))
            goto LAB_015476a4;
          }
          iVar11 = iVar11 + 1;
        } while( true );
      }
      while( true ) {
        if (piVar20 == piVar8) {
          if ((piVar21 == (int *)0x0) ||
             (bVar23 = piVar21 == piVar22, piVar6 = piVar21, piVar8 = piVar22, piVar21 = piVar20,
             piVar22 = piVar20, bVar23)) goto LAB_01547754;
        }
        else {
          piVar6 = piVar20;
        }
        piVar20 = piVar6 + 1;
        iVar7 = *piVar6;
        uVar13 = (uint)*(ushort *)(iVar7 + 0x28);
        bVar23 = uVar13 == uVar5;
        if (bVar23) {
          uVar13 = *(uint *)(iVar7 + 0x10);
        }
        if ((bVar23 && uVar13 == uVar15) &&
           (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 0xc),uVar9,uVar15), iVar7 == 0))
        break;
        iVar11 = iVar11 + 1;
      }
LAB_015476a4:
      puVar3 = (uint *)FUN_01561120(puVar10,iVar11);
      if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a79e4);
      }
      do {
        uVar9 = *puVar3;
        bVar23 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar23);
      *puVar3 = uVar9 + 1;
      if ((int)uVar9 < 0) goto LAB_01547b70;
      FUN_01560eb0(puVar10,puVar3);
      if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
        *(undefined1 *)(param_7 + 0x10) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar14;
        bVar23 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar23);
      *piVar14 = 0;
    }
    else {
      uVar18 = FUN_015bf3f8();
      if (*(char *)(param_7 + 0x10) == '\0') {
        uVar18 = uVar18 ^ 1;
        goto LAB_0154751c;
      }
      if (uVar18 != 0) goto LAB_015474a0;
LAB_015474b0:
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar14;
        bVar23 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar23);
      *piVar14 = 0;
      puVar3 = (uint *)0x0;
    }
    if (iVar16 == 2) {
      FUN_016d6968(0xf0,piVar14,0x81,1);
    }
    goto LAB_015474d4;
  }
  puVar3 = (uint *)FUN_015327f4(param_4,param_5,param_6,&local_e8);
  goto LAB_01547340;
LAB_01547754:
  if ((uVar18 == 0) &&
     (((DAT_018dd988 & 0x7fffffff) != 0 && (iVar11 = FUN_015bf3f8(), iVar11 == 0)))) {
    *(undefined1 *)(param_7 + 0x10) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar14;
    bVar23 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar23);
  *piVar14 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,piVar14,0x81,1);
    if (local_58 != 0) goto LAB_015477b0;
LAB_0154783c:
    local_cc = 1;
    uVar9 = 0;
    uVar18 = local_5c;
    uVar15 = local_58;
  }
  else {
    if (local_58 == 0) goto LAB_0154783c;
LAB_015477b0:
    uVar9 = local_58;
    uVar18 = local_5c;
    local_cc = thunk_FUN_016d4a50(local_58);
    uVar15 = uVar9;
    if (local_cc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar9);
    }
  }
  local_d0 = uVar9;
  FUN_016dd1aa(local_cc,uVar18,uVar15);
  local_c8 = uVar15;
  (*param_5)(&local_50,param_4,&local_d0,1);
  if (local_50 == 0x80000000) {
    puVar3 = (uint *)0x0;
LAB_015474d4:
    if (local_60 != 0) {
      thunk_FUN_016d3fb4(local_5c);
    }
  }
  else {
    local_40 = local_60;
    uStack_3c = local_5c;
    uStack_38 = local_58;
    uStack_34 = local_50;
    uStack_30 = local_4c;
    local_2c = local_48;
    local_cc = 1;
    local_d0 = 1;
    local_c8 = local_60;
    uStack_c4 = local_5c;
    uStack_c0 = local_58;
    local_bc = local_50;
    uStack_b8 = local_4c;
    uStack_b4 = local_48;
    uVar2 = (undefined2)((ulonglong)uVar24 >> 0x20);
    local_a8 = CONCAT22(uVar2,(short)uVar24);
    local_b0 = CONCAT22(uVar2,(short)uVar24);
    local_ac = uVar15;
    puVar3 = (uint *)thunk_FUN_016d4a50(0x2c);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x2c);
    }
    *puVar3 = local_d0;
    puVar3[1] = local_cc;
    puVar3[2] = local_c8;
    puVar3[3] = uStack_c4;
    puVar3[4] = uStack_c0;
    puVar3[5] = local_bc;
    puVar3[6] = uStack_b8;
    puVar3[7] = uStack_b4;
    puVar3[8] = local_b0;
    puVar3[9] = local_ac;
    puVar3[10] = local_a8;
    do {
      if (*piVar14 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar14);
        goto joined_r0x01547ad8;
      }
      bVar23 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar23);
    *piVar14 = 1;
    DataMemoryBarrier(0xb);
joined_r0x01547ad8:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*pcVar19 == '\0') {
        uVar18 = 0;
        iVar11 = *(int *)(param_7 + 0x20);
joined_r0x01547b94:
        if ((iVar11 == iVar16) && (iVar16 != 0)) {
          *(int *)(param_7 + 0x20) = iVar16 + -1;
          uVar15 = *(int *)(param_7 + 0x1c) + 1;
          piVar8 = *(int **)(*(int *)(param_7 + 0x18) + *(int *)(param_7 + 0x1c) * 4);
          uVar9 = uVar15 - *(uint *)(param_7 + 0x14);
          if (uVar15 < *(uint *)(param_7 + 0x14)) {
            uVar9 = uVar15;
          }
          *(uint *)(param_7 + 0x1c) = uVar9;
          DataMemoryBarrier(0xb);
          do {
            iVar16 = *piVar8;
            bVar23 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar23);
          *piVar8 = iVar16 + -1;
          if (iVar16 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01560fac();
          }
        }
        do {
          uVar9 = *puVar3;
          bVar23 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar23);
        *puVar3 = uVar9 + 1;
        if ((int)uVar9 < 0) {
LAB_01547b70:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1547b70);
          (*pcVar1)();
        }
        FUN_01560eb0(puVar10,puVar3);
        if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
          *(undefined1 *)(param_7 + 0x10) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar16 = *piVar14;
          bVar23 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar23);
        *piVar14 = 0;
        if (iVar16 == 2) {
          FUN_016d6968(0xf0,piVar14,0x81,1);
        }
        goto LAB_01547348;
      }
LAB_01547964:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar16 = FUN_015bf3f8(), iVar16 == 0)) {
        *(undefined1 *)(param_7 + 0x10) = 1;
      }
    }
    else {
      uVar18 = FUN_015bf3f8();
      if (*pcVar19 == '\0') {
        uVar18 = uVar18 ^ 1;
        iVar11 = *(int *)(param_7 + 0x20);
        goto joined_r0x01547b94;
      }
      if (uVar18 != 0) goto LAB_01547964;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar14;
      bVar23 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar23);
    *piVar14 = 0;
    if (iVar16 == 2) {
      FUN_016d6968(0xf0,piVar14,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar18 = *puVar3;
      bVar23 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar23);
    *puVar3 = uVar18 - 1;
    if (uVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01560fac(puVar3);
    }
    puVar3 = (uint *)0x0;
  }
LAB_01547340:
  if (puVar3 == (uint *)0x0) {
    FUN_015471e0(param_1,param_2,param_3);
    FUN_0154376c(&local_e8);
    return;
  }
LAB_01547348:
  local_cc = 0x80000000;
  local_c8 = puVar3[6];
  uStack_c4 = puVar3[7];
  uStack_c0 = puVar3[8];
  local_bc = puVar3[9];
  local_d0 = 0x80000006;
  FUN_01527ba4(param_1,&local_d0);
  DataMemoryBarrier(0xb);
  do {
    uVar18 = *puVar3;
    bVar23 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar23);
  *puVar3 = uVar18 - 1;
  if (uVar18 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01560fac(puVar3);
  }
  FUN_0154376c(&local_e8);
  if ((*param_3 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(param_3[1]);
  return;
}

