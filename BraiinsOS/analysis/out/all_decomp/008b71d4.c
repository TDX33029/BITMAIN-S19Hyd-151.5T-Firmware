// FUN_008b71d4 @ 008b71d4 size=3968 calls_out=15 calls_in=2
// strings: 

void FUN_008b71d4(uint *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int *piVar27;
  bool bVar28;
  undefined8 uVar29;
  int *local_100;
  int *piStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int *local_c0;
  int *piStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  int *local_a0;
  undefined1 local_9c;
  int *local_98;
  int *local_94;
  uint uStack_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  int *local_70;
  int *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_38;
  undefined8 uStack_34;
  undefined2 local_2c;
  
  puVar9 = (uint *)(param_2 + 2);
  if (*puVar9 == 4) {
    iVar14 = param_2[3];
    if ((*(uint *)(iVar14 + 8) & 1) == 0) goto LAB_008b77f0;
    piVar11 = (int *)(iVar14 + 0x10);
    do {
      if (*piVar11 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar11);
        goto LAB_008b7228;
      }
      bVar28 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar28);
    *piVar11 = 1;
    DataMemoryBarrier(0xb);
LAB_008b7228:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(iVar14 + 0x14) != '\0') {
        uVar4 = 0;
LAB_008b7ee0:
        local_6c = (int *)CONCAT31(local_6c._1_3_,(char)uVar4);
        local_70 = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_70,&DAT_01863b4c,&DAT_01886a94);
      }
      bVar28 = *(int *)(iVar14 + 0x18) == 4;
LAB_008b725c:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
        *(undefined1 *)(iVar14 + 0x14) = 1;
      }
    }
    else {
      uVar4 = FUN_015bf3f8();
      uVar4 = uVar4 ^ 1;
      if (*(char *)(iVar14 + 0x14) != '\0') goto LAB_008b7ee0;
      bVar28 = *(int *)(iVar14 + 0x18) == 4;
      if (uVar4 == 0) goto LAB_008b725c;
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
    if (bVar28) goto LAB_008b77f0;
    piVar11 = param_2 + 1;
    if (*param_2 != 0) {
      piVar11 = (int *)param_2[1];
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(*piVar11 + 0x4c) == '\0') {
      iVar14 = param_2[3];
      puVar7 = (undefined4 *)*param_3;
      pcVar13 = (char *)(iVar14 + 0x38);
      do {
        if (*pcVar13 == '\0') {
          bVar28 = (bool)hasExclusiveAccess(pcVar13);
          if (bVar28) {
            *pcVar13 = '\x01';
            DataMemoryBarrier(0xb);
            cVar2 = *(char *)(iVar14 + 0x44);
            DataMemoryBarrier(0xb);
            puVar22 = (undefined4 *)*puVar7;
            iVar8 = puVar7[1];
            bVar28 = *(int *)(iVar14 + 0x40) == iVar8;
            if (bVar28) {
              puVar7 = *(undefined4 **)(iVar14 + 0x3c);
            }
            if (!bVar28 || puVar7 != puVar22) {
              uVar29 = (*(code *)*puVar22)(iVar8);
              (**(code **)(*(int *)(iVar14 + 0x3c) + 0xc))(*(undefined4 *)(iVar14 + 0x40));
              *(undefined8 *)(iVar14 + 0x3c) = uVar29;
              if (cVar2 != '\0') {
                (*(code *)puVar22[2])(iVar8);
              }
            }
            DataMemoryBarrier(0xb);
            *pcVar13 = '\0';
            *param_1 = 5;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        while (*pcVar13 != '\0') {
          HintYield();
        }
      } while( true );
    }
    iVar14 = param_2[3];
    if ((*(uint *)(iVar14 + 8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01886aa4);
    }
    piVar11 = (int *)(iVar14 + 0x10);
    do {
      if (*piVar11 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar11);
        goto joined_r0x008b7dc0;
      }
      bVar28 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar28);
    *piVar11 = 1;
    DataMemoryBarrier(0xb);
joined_r0x008b7dc0:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(iVar14 + 0x14) != '\0') {
        uVar4 = 0;
LAB_008b7f90:
        local_94 = (int *)CONCAT31(local_94._1_3_,(char)uVar4);
        local_98 = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_98,&DAT_01863b4c,&DAT_01886a94);
      }
      local_70 = *(int **)(iVar14 + 0x18);
      local_6c = *(int **)(iVar14 + 0x1c);
      local_68 = *(uint *)(iVar14 + 0x20);
      local_64 = *(uint *)(iVar14 + 0x24);
      local_60 = *(uint *)(iVar14 + 0x28);
      local_5c = *(uint *)(iVar14 + 0x2c);
      local_58 = *(uint *)(iVar14 + 0x30);
      uStack_54 = *(uint *)(iVar14 + 0x34);
      *(undefined4 *)(iVar14 + 0x18) = 4;
LAB_008b732c:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
        *(undefined1 *)(iVar14 + 0x14) = 1;
      }
    }
    else {
      uVar4 = FUN_015bf3f8();
      uVar4 = uVar4 ^ 1;
      if (*(char *)(iVar14 + 0x14) != '\0') goto LAB_008b7f90;
      local_70 = *(int **)(iVar14 + 0x18);
      local_6c = *(int **)(iVar14 + 0x1c);
      local_68 = *(uint *)(iVar14 + 0x20);
      local_64 = *(uint *)(iVar14 + 0x24);
      local_60 = *(uint *)(iVar14 + 0x28);
      local_5c = *(uint *)(iVar14 + 0x2c);
      local_58 = *(uint *)(iVar14 + 0x30);
      uStack_54 = *(uint *)(iVar14 + 0x34);
      *(undefined4 *)(iVar14 + 0x18) = 4;
      if (uVar4 == 0) goto LAB_008b732c;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar11;
      bVar28 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar28);
    *piVar11 = 0;
    if (iVar14 == 2) {
      FUN_016d6968(0xf0,piVar11,0x81,1);
      uVar4 = *puVar9;
    }
    else {
      uVar4 = *puVar9;
    }
    if (uVar4 != 5) {
      if (uVar4 == 4) {
        piVar11 = (int *)param_2[3];
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar11;
          bVar28 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar28);
        *piVar11 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089e9f4(param_2[3]);
        }
      }
      else {
        FUN_008b7038(puVar9);
      }
    }
    *puVar9 = 5;
    if (local_70 != (int *)0x4) {
      *param_1 = (uint)local_70;
      param_1[1] = (uint)local_6c;
      param_1[2] = local_68;
      param_1[3] = local_64;
      param_1[4] = local_60;
      param_1[5] = local_5c;
      param_1[6] = local_58;
      param_1[7] = uStack_54;
      return;
    }
LAB_008b77f0:
    *param_1 = 4;
    return;
  }
  piVar11 = (int *)*puVar9;
  piVar15 = (int *)param_2[3];
  uVar18 = param_2[4];
  uVar23 = param_2[5];
  uVar4 = param_2[6];
  uVar16 = param_2[7];
  uVar19 = param_2[8];
  uVar24 = param_2[9];
  *puVar9 = 5;
  if (((uint)piVar11 & 6) == 4) {
    *param_1 = 4;
    goto joined_r0x008b7e28;
  }
  piVar27 = param_2 + 1;
  if (*param_2 != 0) {
    piVar27 = (int *)param_2[1];
  }
  iVar14 = *piVar27;
  piVar27 = (int *)(iVar14 + 8);
  do {
    local_100 = piVar11;
    piStack_fc = piVar15;
    uStack_f8 = uVar18;
    uStack_f4 = uVar23;
    local_f0 = uVar4;
    uStack_ec = uVar16;
    uStack_e8 = uVar19;
    uStack_e4 = uVar24;
    if (*piVar27 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar27);
      goto LAB_008b7444;
    }
    bVar28 = (bool)hasExclusiveAccess(piVar27);
  } while (!bVar28);
  *piVar27 = 1;
  DataMemoryBarrier(0xb);
LAB_008b7444:
  uVar4 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar14 + 0xc);
  }
  else {
    uVar4 = FUN_015bf3f8();
    uVar4 = uVar4 ^ 1;
    cVar2 = *(char *)(iVar14 + 0xc);
  }
  if (cVar2 != '\0') {
    local_6c._1_3_ = (undefined3)((uint)local_6c >> 8);
    local_6c = (int *)CONCAT31(local_6c._1_3_,(char)uVar4);
    local_70 = piVar27;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_70,&DAT_01863b2c,&DAT_01886a4c);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar14 + 0x4c) == '\0') {
    iVar8 = *(int *)(iVar14 + 0x2c);
    if (iVar8 != 0) {
      puVar7 = (undefined4 *)((uint)&local_c0 | 4);
      puVar22 = (undefined4 *)((uint)&local_70 | 4);
      puVar5 = (undefined4 *)((uint)&local_98 | 4);
      local_98 = local_100;
      local_94 = piStack_fc;
      uStack_90 = uStack_f8;
      local_8c = uStack_f4;
      local_88 = local_f0;
      uStack_84 = uStack_ec;
      uStack_80 = uStack_e8;
      uStack_7c = uStack_e4;
      do {
        piVar20 = local_98;
        *(int *)(iVar14 + 0x2c) = iVar8 + -1;
        uVar18 = *(int *)(iVar14 + 0x28) + 1;
        puVar10 = (undefined4 *)(*(int *)(iVar14 + 0x24) + *(int *)(iVar14 + 0x28) * 8);
        piVar21 = (int *)*puVar10;
        uVar16 = uVar18 - *(uint *)(iVar14 + 0x20);
        if (uVar18 < *(uint *)(iVar14 + 0x20)) {
          uVar16 = uVar18;
        }
        *(uint *)(iVar14 + 0x28) = uVar16;
        iVar8 = puVar10[1];
        bVar28 = local_98 == (int *)0x4;
        local_98 = (int *)0x4;
        if (bVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886a84);
        }
        local_70 = piVar20;
        uVar18 = *(uint *)(iVar8 + 8);
        uVar12 = puVar5[1];
        uVar25 = puVar5[2];
        *puVar22 = *puVar5;
        puVar22[1] = uVar12;
        puVar22[2] = uVar25;
        uVar12 = puVar5[4];
        uVar25 = puVar5[5];
        uVar26 = puVar5[6];
        puVar22[3] = puVar5[3];
        puVar22[4] = uVar12;
        puVar22[5] = uVar25;
        puVar22[6] = uVar26;
        uVar16 = uVar18;
        if (uVar18 < 9) {
          uVar16 = 8;
        }
        uVar16 = uVar16 - 1 & 0xfffffff8;
        puVar9 = (uint *)((int)piVar21 + uVar16 + 8);
        if ((*puVar9 & 1) != 0) {
          piVar20 = (int *)((int)piVar21 + uVar16 + 0x10);
          goto LAB_008b787c;
        }
        if (piVar20 == (int *)0x5) {
          bVar28 = true;
          goto LAB_008b7a90;
        }
        local_c0 = piVar20;
        uVar12 = puVar5[1];
        uVar25 = puVar5[2];
        *puVar7 = *puVar5;
        puVar7[1] = uVar12;
        puVar7[2] = uVar25;
        uVar12 = puVar5[4];
        uVar25 = puVar5[5];
        uVar26 = puVar5[6];
        puVar7[3] = puVar5[3];
        puVar7[4] = uVar12;
        puVar7[5] = uVar25;
        puVar7[6] = uVar26;
        iVar6 = (**(code **)(iVar8 + 0xc))((int)puVar9 + (uVar18 - 1 & 0xffffffd0) + 0x30);
        piVar20 = local_98;
        if (iVar6 == 0) {
          uVar16 = *(uint *)(iVar14 + 0x10);
          uVar18 = *(uint *)(iVar14 + 0x1c);
          if (uVar18 == uVar16) {
            FUN_008ac0b8();
            uVar16 = *(uint *)(iVar14 + 0x10);
            uVar18 = *(uint *)(iVar14 + 0x1c);
          }
          uVar19 = *(int *)(iVar14 + 0x18) + uVar18;
          *(uint *)(iVar14 + 0x1c) = uVar18 + 1;
          uVar18 = uVar19 - uVar16;
          if (uVar19 < uVar16) {
            uVar18 = uVar19;
          }
          puVar9 = (uint *)(*(int *)(iVar14 + 0x14) + uVar18 * 0x20);
          *puVar9 = (uint)local_c0;
          puVar9[1] = (uint)piStack_bc;
          puVar9[2] = uStack_b8;
          puVar9[3] = uStack_b4;
          puVar9[4] = local_b0;
          puVar9[5] = uStack_ac;
          puVar9[6] = uStack_a8;
          puVar9[7] = uStack_a4;
          if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
            *(undefined1 *)(iVar14 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar27;
            bVar28 = (bool)hasExclusiveAccess(piVar27);
          } while (!bVar28);
          *piVar27 = 0;
          bVar28 = false;
          if (iVar6 == 2) {
            FUN_016d6968(0xf0,piVar27,0x81,1);
          }
          goto LAB_008b7a90;
        }
        local_70 = local_98;
        local_6c = local_94;
        local_68 = uStack_90;
        local_64 = local_8c;
        local_60 = local_88;
        local_5c = uStack_84;
        local_58 = uStack_80;
        uStack_54 = uStack_7c;
        local_98 = local_c0;
        local_94 = piStack_bc;
        uStack_90 = uStack_b8;
        local_8c = uStack_b4;
        local_88 = local_b0;
        uStack_84 = uStack_ac;
        uStack_80 = uStack_a8;
        uStack_7c = uStack_a4;
        if (piVar20 != (int *)0x4) {
          FUN_00845840(&local_70);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar21;
          bVar28 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar28);
        *piVar21 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089e6a8(piVar21,iVar8);
        }
        iVar8 = *(int *)(iVar14 + 0x2c);
      } while (iVar8 != 0);
      if (local_98 != (int *)0x4) {
        uVar12 = puVar5[1];
        uVar25 = puVar5[2];
        *puVar22 = *puVar5;
        puVar22[1] = uVar12;
        puVar22[2] = uVar25;
        uVar12 = puVar5[4];
        uVar25 = puVar5[5];
        uVar26 = puVar5[6];
        puVar22[3] = puVar5[3];
        puVar22[4] = uVar12;
        puVar22[5] = uVar25;
        puVar22[6] = uVar26;
        local_70 = local_98;
        uVar16 = *(uint *)(iVar14 + 0x10);
        uVar18 = *(uint *)(iVar14 + 0x1c);
        if (uVar18 == uVar16) {
          FUN_008ac0b8();
          uVar16 = *(uint *)(iVar14 + 0x10);
          uVar18 = *(uint *)(iVar14 + 0x1c);
        }
        uVar19 = *(int *)(iVar14 + 0x18) + uVar18;
        *(uint *)(iVar14 + 0x1c) = uVar18 + 1;
        uVar18 = uVar19 - uVar16;
        if (uVar19 < uVar16) {
          uVar18 = uVar19;
        }
        puVar9 = (uint *)(*(int *)(iVar14 + 0x14) + uVar18 * 0x20);
        *puVar9 = (uint)local_70;
        puVar9[1] = (uint)local_6c;
        puVar9[2] = local_68;
        puVar9[3] = local_64;
        puVar9[4] = local_60;
        puVar9[5] = local_5c;
        puVar9[6] = local_58;
        puVar9[7] = uStack_54;
      }
      goto LAB_008b7b68;
    }
    piVar20 = (int *)(iVar14 + 0x34);
    if (*piVar20 == -0x80000000) {
      uVar16 = *(uint *)(iVar14 + 0x1c);
    }
    else {
      uVar16 = *(uint *)(iVar14 + 0x1c);
      if (*(uint *)(iVar14 + 0x30) <= uVar16) {
        uVar29 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
        FUN_016dd1aa((uint)&local_98 | 3,&local_100,0x20);
        local_64 = 0;
        local_38 = 0;
        local_2c = 0;
        local_5c = local_5c & 0xffffff00;
        local_60 = 0;
        local_68 = 1;
        local_6c = (int *)&DAT_00000001;
        local_70 = (int *)0x1;
        uStack_34 = uVar29;
        FUN_016dd1aa((int)&local_5c + 1,&local_98,0x23);
        piVar21 = (int *)thunk_FUN_016d4a50(0x48);
        if (piVar21 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x48);
        }
        FUN_016dd1aa(piVar21,&local_70,0x48);
        if (*piVar20 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886a74);
        }
        do {
          iVar8 = *piVar21;
          bVar28 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar28);
        *piVar21 = iVar8 + 1;
        if (iVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x8b80e4);
          (*pcVar1)();
        }
        uVar16 = *(uint *)(iVar14 + 0x34);
        uVar18 = *(uint *)(iVar14 + 0x40);
        if (uVar18 == uVar16) {
          FUN_008ac040(piVar20);
          uVar16 = *(uint *)(iVar14 + 0x34);
          uVar18 = *(uint *)(iVar14 + 0x40);
        }
        uVar19 = *(int *)(iVar14 + 0x3c) + uVar18;
        *(uint *)(iVar14 + 0x40) = uVar18 + 1;
        uVar18 = uVar19 - uVar16;
        if (uVar19 < uVar16) {
          uVar18 = uVar19;
        }
        piVar20 = (int *)(*(int *)(iVar14 + 0x38) + uVar18 * 8);
        *piVar20 = (int)piVar21;
        piVar20[1] = (int)&DAT_01863b94;
        if ((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
          iVar8 = FUN_015bf3f8();
          if (iVar8 == 0) {
            *(undefined1 *)(iVar14 + 0xc) = 1;
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar27;
          bVar28 = (bool)hasExclusiveAccess(piVar27);
        } while (!bVar28);
        *piVar27 = 0;
        if (iVar14 == 2) {
          FUN_016d6968(0xf0,piVar27,0x81,1);
          uVar4 = *puVar9;
        }
        else {
          uVar4 = *puVar9;
        }
        if (uVar4 != 5) {
          if (uVar4 == 4) {
            piVar27 = (int *)param_2[3];
            DataMemoryBarrier(0xb);
            do {
              iVar14 = *piVar27;
              bVar28 = (bool)hasExclusiveAccess(piVar27);
            } while (!bVar28);
            *piVar27 = iVar14 + -1;
            if (iVar14 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0089e9f4(param_2[3]);
            }
          }
          else {
            FUN_00845840(puVar9);
          }
        }
        param_2[2] = 4;
        param_2[3] = (int)piVar21;
        *param_1 = 5;
        goto joined_r0x008b7e28;
      }
    }
    uVar18 = *(uint *)(iVar14 + 0x10);
    if (uVar16 == uVar18) {
      FUN_008ac0b8();
      uVar18 = *(uint *)(iVar14 + 0x10);
      uVar16 = *(uint *)(iVar14 + 0x1c);
    }
    piVar20 = (int *)0x3;
    uVar19 = *(int *)(iVar14 + 0x18) + uVar16;
    *(uint *)(iVar14 + 0x1c) = uVar16 + 1;
    uVar16 = uVar19 - uVar18;
    if (uVar19 < uVar18) {
      uVar16 = uVar19;
    }
    puVar9 = (uint *)(*(int *)(iVar14 + 0x14) + uVar16 * 0x20);
  }
  else {
    piVar20 = (int *)0x1;
    puVar9 = &local_e0;
  }
  *puVar9 = (uint)local_100;
  puVar9[1] = (uint)piStack_fc;
  puVar9[2] = uStack_f8;
  puVar9[3] = uStack_f4;
  puVar9[4] = local_f0;
  puVar9[5] = uStack_ec;
  puVar9[6] = uStack_e8;
  puVar9[7] = uStack_e4;
  if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(undefined1 *)(iVar14 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar27;
    bVar28 = (bool)hasExclusiveAccess(piVar27);
  } while (!bVar28);
  *piVar27 = 0;
  if (iVar14 == 2) {
LAB_008b8004:
    FUN_016d6968(0xf0,piVar27,0x81,1);
  }
  uVar4 = 4;
  if (piVar20 != (int *)0x3) {
    local_68 = local_e0;
    local_64 = uStack_dc;
    local_60 = uStack_d8;
    local_5c = uStack_d4;
    local_58 = local_d0;
    uStack_54 = uStack_cc;
    uStack_50 = uStack_c8;
    uStack_4c = uStack_c4;
    local_6c = (int *)0x0;
    if (piVar20 != (int *)0x1) {
      local_70 = piVar20;
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_0187c3c4);
    }
    puVar9 = (uint *)((uint)&local_e0 | 4);
    local_98 = (int *)*puVar9;
    local_94 = (int *)puVar9[1];
    uStack_90 = puVar9[2];
    local_8c = puVar9[3];
    local_88 = puVar9[4];
    uStack_84 = puVar9[5];
    uStack_80 = puVar9[6];
    local_70 = (int *)0x1;
    uVar4 = local_e0;
  }
  goto LAB_008b7bb0;
  while (bVar28 = (bool)hasExclusiveAccess(piVar20), !bVar28) {
LAB_008b787c:
    if (*piVar20 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar20);
      goto LAB_008b7898;
    }
  }
  *piVar20 = 1;
  DataMemoryBarrier(0xb);
LAB_008b7898:
  uVar19 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)((int)piVar21 + uVar16 + 0x14);
  }
  else {
    uVar19 = FUN_015bf3f8();
    uVar19 = uVar19 ^ 1;
    cVar2 = *(char *)((int)piVar21 + uVar16 + 0x14);
  }
  if (cVar2 != '\0') {
    local_9c = (undefined1)uVar19;
    local_a0 = piVar20;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_a0,&DAT_01863b4c,&DAT_01886a94);
  }
  puVar17 = (uint *)((int)piVar21 + uVar16 + 0x18);
  if (*puVar17 != 4) {
    FUN_00845840(puVar17);
  }
  *puVar17 = (uint)local_70;
  *(int **)((int)piVar21 + uVar16 + 0x1c) = local_6c;
  *(uint *)((int)piVar21 + uVar16 + 0x20) = local_68;
  *(uint *)((int)piVar21 + uVar16 + 0x24) = local_64;
  *(uint *)((int)piVar21 + uVar16 + 0x28) = local_60;
  *(uint *)((int)piVar21 + uVar16 + 0x2c) = local_5c;
  *(uint *)((int)piVar21 + uVar16 + 0x30) = local_58;
  *(uint *)((int)piVar21 + uVar16 + 0x34) = uStack_54;
  if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)((int)piVar21 + uVar16 + 0x14) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar20;
    bVar28 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar28);
  *piVar20 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar20,0x81,1);
  }
  if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(iVar14 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar27;
    bVar28 = (bool)hasExclusiveAccess(piVar27);
  } while (!bVar28);
  *piVar27 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar27,0x81,1);
  }
  bVar28 = false;
  (**(code **)(iVar8 + 0xc))((int)puVar9 + (uVar18 - 1 & 0xffffffd0) + 0x30);
LAB_008b7a90:
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar21;
    bVar3 = (bool)hasExclusiveAccess(piVar21);
  } while (!bVar3);
  *piVar21 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e6a8(piVar21,iVar8);
  }
  if (local_98 != (int *)0x4) {
    FUN_00845840(&local_98);
  }
  if (bVar28) {
LAB_008b7b68:
    if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0)
       ) {
      *(undefined1 *)(iVar14 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar27;
      bVar28 = (bool)hasExclusiveAccess(piVar27);
    } while (!bVar28);
    *piVar27 = 0;
    if (iVar14 == 2) {
      piVar20 = (int *)0x3;
      goto LAB_008b8004;
    }
  }
  uVar4 = 4;
LAB_008b7bb0:
  *param_1 = uVar4;
  param_1[1] = (uint)local_98;
  param_1[2] = (uint)local_94;
  param_1[3] = uStack_90;
  param_1[4] = local_8c;
  param_1[5] = local_88;
  param_1[6] = uStack_84;
  param_1[7] = uStack_80;
joined_r0x008b7e28:
  if (piVar11 == (int *)0x4) {
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar15;
      bVar28 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar28);
    *piVar15 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e9f4(piVar15);
      return;
    }
  }
  return;
}

